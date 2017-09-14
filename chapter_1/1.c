#include <time.h>
#include <stdio.h>

int main(){
    
    time_t t = time(NULL);
    struct tm *tp = localtime(&t);
    char *s = asctime(tp);
    
    printf("協定世界時 : %ld\n",t);
    printf("ローカル時間 : %s\n",s);
    
    return 0;
}