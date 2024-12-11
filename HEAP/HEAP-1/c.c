#include <stdio.h>
#include <stdlib.h>

#define queue_size 101

typedef struct{
    int A[queue_size +1];
    int cnt;
}pqueue;

void init(pqueue *q){
    q->cnt = 0; 
}


void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insert(pqueue * q, int a){
    if (q->cnt == queue_size)
    {
        printf("queue is full\n");
        return;
    }

    q->A[++q->cnt] = a;
    int index = q->cnt;

    while (index != 1 && q->A[index] < q->A[index/2])
    {
        swap(&q->A[index], &q->A[index/2]);
        index /= 2;
    }
}

int Delete(pqueue * q){
    if (q->cnt == 0)
    {
        printf("Queue is empty");
        return -1;
    }

    int index = 1;
    int min = q->A[index];
    q->A[index] = q->A[q->cnt--];
    
    while (index *2 <= q->cnt)
    {
        int smallest = index;
        int leftchild = index *2;
        int rightchild = index *2+1;

        if (q->A[smallest] > q->A[leftchild]) smallest = leftchild;
        if (rightchild <= q->cnt && q->A[smallest] > q->A[rightchild]) smallest =rightchild;
        if (smallest == index) break;

        swap(&q->A[index], &q->A[smallest]);
        index = smallest;
    }
    
    return min;
    
}

void print(pqueue *q){
    if(q->cnt != 0) for(int i= 1; i < q->cnt; i++) printf("%d -> ", q->A[i]);
}
int main(){
    pqueue *q = (pqueue*)malloc(sizeof(pqueue));
    init(q);
    int numbers[]= {1,4,5,6,7,8,9,78};
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) insert(q,numbers[i]);
    print(q);
    printf("\n%d\n",Delete(q));
    print(q);
    return 0;
}