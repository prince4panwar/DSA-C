struct arrayADT
{
    int capacity;
    int lastindex;
    int *ptr;
};
struct arrayADT* createArray(int capacity);
int getitem(struct arrayADT *arr, int index);
int setitem(struct arrayADT *arr,int index,int value);

struct arrayADT* createArray(int capacity)
{
        struct arrayADT *arr;
        arr=(struct arrayADT*)malloc(sizeof(struct arrayADT));
        arr->capacity=capacity;
        arr->lastindex=-1;
        arr->ptr=(int*)malloc(arr->capacity*sizeof(int));
        return arr;
}

int getitem(struct arrayADT *arr, int index)
{
    if(arr->lastindex<index||index<0)
    {
        printf("invalid index");
        return -1;
    }
    else
    {
        return (arr->ptr[index]);
    }
}

int setitem(struct arrayADT *arr,int index,int value)
{
    if(arr->lastindex==arr->capacity-1)//array is full
    {
        printf("Overflow");
        return 0;
    }
    if(index<0||index>arr->lastindex+1)
    {
        printf("Invalid index");
        return 0;
    }
    if(index<=arr->lastindex)
    {
        int i;
        arr->lastindex=arr->lastindex+1;
        i=arr->lastindex;
        while(i!=index)
        {
            arr->ptr[i]=arr->ptr[i-1];
            i--;
        }
        arr->ptr[index]=value;
        return 1;
    }
    if(index==arr->lastindex+1)
    {

        arr->lastindex=arr->lastindex+1;
        arr->ptr[lastindex]=value;
        return 1;
    }
}


