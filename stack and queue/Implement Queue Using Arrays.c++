struct queue{
    int front,rear,cap;
    int *q;
    queue(int c){
        front = 0;
        rear = 0;
        cap =  c;
        q = new int[];
    }

    bool enqueue(int x){
        //the queue is full
        if(rear == cap){
            return false;
        }

        //queue not full
        q[rear] = x;
        rear++;
        return true;
    }

    int deqeue(){
        
    }
}