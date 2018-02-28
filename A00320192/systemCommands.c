#include <sys/types.h>
#include <unistd.h>
#include <ustat.h>
#include <sys/sysinfo.h>
#define _GNU_SOURCE
#include <stdio.h>
#include <utmpx.h>

int main(){

 /* Obtiene las estadisticas del sistema */
 struct sysinfo si;
 sysinfo (&si);


 /*Obtiene el usuario bajo el que se creo el hilo actual */

  uid_t uid;

  uid = getuid();
  printf("The real UID is: %u\n", uid);

  /*Determina la cpu en la que el hilo esta corriendo */
  
  printf( "cpu = %d\n", sched_getcpu() );
  return 0;
}
