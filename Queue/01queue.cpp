#include<bits/stdc++.h>
using namespace std;

public class QueueY{
    static class Queue{
        static int arr[];
        static int size;
        static int rear = -1;
    }
    Queue(int n){
        arr = new int[n];
        this.size = n;
    }

    public static boolean isEmpty(){
        return rear == -1;
    }
    //add enqueue
    
}