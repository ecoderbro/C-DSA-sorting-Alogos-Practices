#include <iostream>
using namespace std;

void insertionsort(int myarr[])
{
    int key =0;
    int j=0;
    for(int i = 1; i<5; i++)
    {
        key = myarr[i]; //6
        j= i-1; //0 index
        while(j>= 0 && myarr[j]> key)
        {
            myarr[j+1] = myarr[j];
            j = j-1;
        }
        myarr[j+1] = key;
    }
}

int main()
{
    int arr[5] = {7, 6, 5, 4, 3};

    cout<< "befre sorting"<< endl;

    for(int i = 0; i < 5; i++)
    {
        cout<< arr[i]<< " ";
    }

    cout<< "after sorting"<< endl;

    insertionsort(arr);

    for(int i = 0; i < 5; i++)
    {
        cout<< arr[i]<< " ";
    }
    return 0;
}