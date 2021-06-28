#include <stdio.h>
#include <stdio.h>
int main (){
    time_t myTime =time(NULL);
    printf("%s",ctime(&myTime));
    
}