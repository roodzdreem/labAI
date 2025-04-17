#include pthread.h
#include stdio.h
#include sysneutrino.h

pthread_t thread_id1;
pthread_t thread_id2;

void  long_thread1(void notused)
{
    int n;
    for (n=0;n5;n++)
    {
        printf(Eto 1 potck, TID %d - N povtora %dn, thread_id1, n);
        sleep(2);
    }
}

void  long_thread2(void notused)
{
    int n;
    for (n=0;n5;n++)
    {
        printf(Eto 2 potck, TID %d - N povtora %dn, thread_id1, n);
        sleep(2);
    }
}

int main(void)
{
    printf(Prog threads PID %d n, getpid());
    pthread_create(&thread_id1, NULL, long_thread1, NULL);
    pthread_create(&thread_id2, NULL, long_thread2, NULL);
    sleep(40);
    return 1;
}