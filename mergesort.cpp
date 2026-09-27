#include <iostream>
using namespace std;
//now this is merging function.
void merge(int arr[], int l, int m, int r) // l is the first number in array and r is the last say left and right
{
    int i = l;
    int j = m+1;
    int k = l;

    int temp[5];
    while(i<=m && j<=r) //this condition is for the respective sub arrays like the binary srting
    {
        if(arr[i]<= arr[j])
        {
            temp[k] = arr[i];
            
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int p = l; p<=r; p++)
    {
        arr[p] = temp[p];
    }
}

//this is sorting function.
void mergesort(int arr[],int l,int r)// l means last index and r means right most index
{
    if(l<r)// here we give the indexes 0<1
    {
        int m = (l+r)/2;
        mergesort(arr, l, m ); //first halve the left one 
        mergesort(arr,m+1, r); // second hlave the right one
        merge(arr, l , m , r);
    }
}

int main()
{
    int myarr[5] = {4, 11,55, 34, 9};
    cout<< "Before sorting arr: ";
    for(int i = 0; i< 5; i++)
    {
        cout<< myarr[i]<< " , ";
    }
    cout<< endl;

    //after merge sort

    cout<< "after merge aorting: ";

    mergesort(myarr, 0 , 4);

    for(int i = 0; i< 5; i++)
    {
        cout<< myarr[i]<< " , ";
    }
    cout<< endl;

    return 0;
}