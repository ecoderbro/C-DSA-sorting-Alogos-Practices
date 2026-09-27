#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{ 
    int p = arr[e]; //the pivot
    int pindex = s; //need to track the starting index
    for(int i = s; i < e; i++)
    {
        if(arr[i] < p)
        {
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;

            pindex++;
        }
    }
    int temp2 = arr[e];
    arr[e] = arr[pindex];
    arr[pindex] = temp2;

    return pindex;
}
void quicksort(int arr[],int s,int  e)
{
    if(s<e)
    { 
        int p = partition(arr, s, e);
        quicksort(arr, s, p-1);
        quicksort(arr, p+1, e);
    }
}

int main()
{
;
    int size;
    cout<< "Enter the size of the array: "<< endl;
    cin>> size;
    int myarr[size];
    cout<< "Enter numbers in the array: "<< endl;
    for(int i = 0; i < size; i++)
    {
        cin>> myarr[i];
    }
    cout<< endl;

    cout<< "before sorting: ";
    for(int i = 0; i < size; i++)
    {
        cout <<  myarr[i]<< " , ";
    }
    cout<< endl;

    cout<< "after sorting: ";
    quicksort(myarr, 0, size);

    for(int i = 0; i < size; i++)
    {
        cout <<  myarr[i]<< " , ";
    }

    return 0;
}