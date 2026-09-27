#include <iostream>
using namespace std;

void shellsort(int arr[], int s)
{

    for(int gap = s/2; gap>0; gap = gap/2)
    {
        for(int j = gap; j< s; j+=1)
        {
            int temp = arr[j];// holds the value at given gap as index  
            int i = 0;
            for(i=j; i>=gap && arr[i-gap]> temp; i -= gap)// this loop must be understood here is happening the major things
            {
                arr[i] = arr[i-gap];
            }
            arr[i] = temp; // now after swapping the value of sapped index is still not saved say wo abhi b udhar e ha mukmal swap nai howa 
        }
    }
}

int main()
{
    int size = 0;
    cout<< "how many elements you want to store in the array: ";
    cin>> size;

    int myarray[size];
    cout<< endl;

    cout<< "Please enter the values you want to store : ";
    for(int i = 0; i< size; i++)
    {
        cin>> myarray[i];
    }
    cout<< endl;

    cout<< "elements stored in the array: ";
    for(int i= 0; i< size; i++)
    {
        cout<<  myarray[i] << " ";
    }
    cout<< endl;

    cout<< "after sorting: ";

    shellsort(myarray, size);

    for(int i= 0; i< size; i++)
    {
        cout<<  myarray[i] << " ";
    }
    return 0;
}