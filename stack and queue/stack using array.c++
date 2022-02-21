i#define MAX 10000;
int a[MAX];


bool stack push(int x){
    if(top>MAX-1){
        return false;
    }else{
        a[++top] = x;
        return true;
    }
}

int pop(){
    if(top<0){
        return -1;
    }else{
        int x = a[top];
        --top;
        return x;
    }
}