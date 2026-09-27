#include <iostream>
using namespace std;

void selectionsort(int myarr[])
{
    int min;
    for(int i = 0; i<4;i++ )
    {
        min = i;
        for(int j = i+1; j < 5; j++)
        {
            if(myarr[j]< myarr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = myarr[min];
            myarr[min] = myarr[i];
            myarr[i] = temp;
        }
    }


}

int main()
{

    int arr[5];
    cout<< "enter value in the array: ";
    for(int i=0 ; i<5; i++)
    {
        cin>> arr[i];
    }
    cout<< endl;

    cout<< "the unsorted array you enter are: ";
    for(int i = 0; i< 5; i++)
    {
        cout<< arr[i]<< "  ";
    }
    cout<< endl;

    cout<< "the sorted array are: ";
    

    selectionsort(arr);
    for(int i = 0; i< 5; i++)
    {
        cout<< arr[i]<< "  ";
    }
    cout<< endl;
    return 0;
}
