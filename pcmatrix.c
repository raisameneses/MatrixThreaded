/*
 *  Matrix Task Processor
 *  Based on Operating Systems: Three Easy Pieces by R. Arpaci-Dusseau and A. Arpaci-Dusseau
 *
 *  Assignment 3 code
 *  Program operates on tasks submitted to the tasks_input directory
 *  Results are created in the tasks_output directory
 *
 *  A bounded buffer is used to store pending tasks
 *  A producer thread reads tasks from the tasks_input directory
 *  Consumer threads perform tasks in parallel
 *  Program is designed to run as a daemon (i.e. forever) until receiving a request to exit.
 *
 *  This program mimics the client/server processing model without the use of any networking constructs.
 *
 *  Wes J. Lloyd
 *  University of Washington, Tacoma
 *  TCSS 422 - Operating Systems
 *  Spring 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include "matrix.h"
#include "tasks.h"
#include "pcmatrix.h"
volatile int done = 0;
// pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; //Lock
// pthread_cond_t cond = PTHREAD_COND_INITIALIZER; //Condition initializer
int main (int argc, char * argv[])
{
  printf("main\n");
  // pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; //Lock
  // pthread_cond_t cond = PTHREAD_COND_INITIALIZER; //Condition initializer
  // Uncomment to see example operation of the readtasks() routine
  //readtasks((void *)100);
  // Uncomment to see example operation of the dotasks() routine
//  dotasks((void *) NULL);
 int sleep_ms = 500;
 if(argc > 1 && argv[1] >=0){
    sleep_ms = atoi(argv[1]);
 }

  // Use pthreads
  pthread_t producer;
  pthread_t c1, c2, c3, c4;

  // Create one pthread for readtasks()
  pthread_create(&producer, NULL, readtasks, sleep_ms);

  // Create one or more pthreads for dotasks()
  //pthread_create(&c1, NULL, dotasks, NULL);
  // pthread_create(&c2, NULL, dotasks, NULL);
  // pthread_create(&c3, NULL, dotasks, NULL);
  // pthread_create(&c4, NULL, dotasks, NULL);

  // pthread_join(p, NULL);
  // pthread_join(p, NULL);
  // pthread_join(p, NULL);
  // pthread_join(p, NULL);
  // pthread_join(p, NULL);
  return 0;
}
