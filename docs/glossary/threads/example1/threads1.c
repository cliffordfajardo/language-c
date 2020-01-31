#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 
  
int global_var = 0;
#define NTHREADS 3

  
void *my_thread_function(void *x) {
  int thread_id = *((int *) x);
  printf("Hi from thread %d!\n", thread_id);
  
  static int static_var = 0;
  global_var++;
  static_var++;

  return NULL;
}


int main() { 
  pthread_t threads[NTHREADS];
  int thread_args[NTHREADS];
  int i, return_code;
  
  // Spawn threads 
  for (i = 0; i < NTHREADS; i++)  {
    thread_args[i] = i;
    
    printf("spawning thread %d\n", i);
    pthread_create(&threads[i], NULL, my_thread_function, (void *)&thread_args[i]); 
  }

  // wait for threads to finish      
  for (i=0; i < NTHREADS; ++i) {
    return_code = pthread_join(threads[i], NULL);
  }

  pthread_exit(NULL); 
  return 0; 
} 