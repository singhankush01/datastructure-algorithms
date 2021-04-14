#include<iostream>
using namespace std;

class vector{
    public:
        int *arr;
        int ms;
        int cs;

        void push_back(int i)
        {
            if(cs==ms)
            {
                
            }
            arr[cs++] = i;
        }
        int pop_back()
        {
            return arr[cs--];
        }
        int operator[] (int i)
        {
            return arr[i];
        }
        int size()
        {
            return cs;
        }
        int capacity()
        {
            return ms;
        }
};