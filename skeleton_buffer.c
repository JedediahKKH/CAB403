#include "buffer.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define TRUE 1

buffer_item buffer[BUFFER_SIZE];
pthread_mutex_t mutex;
// pthread_cond_t condc, condp;
sem_t empty;
sem_t full;

int insertPointer = 0, removePointer = 0;

void *producer(void *param);
void *consumer(void *param);

int insert_item(buffer_item item)
{
    //Acquire Empty Semaphore
	sem_wait(&empty);
	
	//Acquire mutex lock to protect buffer
	pthread_mutex_lock(&mutex);
	buffer[insertPointer++] = item;
	insertPointer = insertPointer % 5;

	//Release mutex lock and full semaphore
	pthread_mutex_unlock(&mutex);
    sem_post(&full);

	return 0;
}

int remove_item(buffer_item *item)
{
    /* insert your code here for Task 1 (a) */
    
    /* Acquire Full Semaphore */
	sem_wait(&full);
	
	/* Acquire mutex lock to protect buffer */
	pthread_mutex_lock(&mutex);
	buffer[insertPointer++] = item;
	insertPointer = insertPointer % 5;

	/* Release mutex lock and empty semaphore */
	pthread_mutex_unlock(&mutex);
    sem_post(&empty);	
	return 0;
}


int main(int argc, char *argv[])
{
	int sleepTime, producerThreads, consumerThreads;
	int i, j, value1=0, value2=0;

	if(argc != 4)
	{
		fprintf(stderr, "Useage: <sleep time> <producer threads> <consumer threads>\n");
		return -1;
	}
    
    /* insert your code below for Task 1 (b) */
    
    /* Get command line arguments argv[1], argv[2], argv[3]*/
	sleepTime=atoi(argv[1]);
	producerThreads=atoi(argv[2]);
	consumerThreads=atoi(argv[3]);

	p_thread_t tid[producerThreads];
	p_thread_t cid[consumerThreads];
	/* Initialize the the locks */
	printf("%d\n", pthread_mutex_init(&mutex, NULL));
	printf("%d\n", sem_init(&empty, 0,5));
	printf("%d\n", sem_init(&full, 0,0));
	srand(time(0));

	/* Create the producer and consumer threads */
	for(int i=0; i<producerThreads; i++){
		pthread_attr_t attr;
		pthread_attr_init(&attr);
		pthread_create(&tid[i],&attr,producer,NULL); 
	}// Creates Producer Threads

	for(int i=0; i<cosumerThreads; i++){
		pthread_attr_t attr;
		pthread_attr_init(&attr);
		pthread_create(&cid[i],&attr,producer,NULL); 
	}// Creates Consumer Threads

   
    /* Sleep for user specified time */
	sleep(sleepTime);
	return 0;
}

void *producer(void *param)
{
	buffer_item random;
	int r;

	while(TRUE)
	{
		r = rand() % 5;
		sleep(r);
		random = rand();

		if(insert_item(random))
			fprintf(stderr, "Error");

		printf("Producer produced %d \n", random);

	}

}

void *consumer(void *param)
{
	buffer_item random;
	int r;

	while(TRUE)
	{
		r = rand() % 5;
		sleep(r);

		if(remove_item(&random))
			fprintf(stderr, "Error Consuming");
		else
			printf("Consumer consumed %d \n", random);
	}
}
