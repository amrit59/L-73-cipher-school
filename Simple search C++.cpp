//1 Simple Search:- 

#include<iostream>
using namespace std;

void simplesearch(int *arr, int l, int r, int val)
{
    //We have to check whether val is present in the array between the index l and r

    int i;
    for(i=1;i<r+1;i++)
    {
        if(arr[i] == val)
        {
            cout<<"Congrats your value is present in the array"<<endl;
            return;
        }
    }
    cout<<"Sad bro, your value is not present in the array"<<endl;
    return;
}
int main()
{
    int arr[7] = {1,3,10,2,4,7,5};
    int size = 7;

    simplesearch(arr,0,6,13);       //13 is not present in the array
    simplesearch(arr,0,6,10);       //10 is present in the array

    return 0;
}
