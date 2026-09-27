#include <iostream>
using namespace std;

void countsort(int arr[], int s, int div);

int getmax(int arr[], int s)
{
    int max = arr[0];

    for(int i = 1; i < s; i++)
    {
        if(arr[i]> max)
        {
            max = arr[i];
        }
    }
    return max;
}



void radixsort(int arr[], int s)
{
    int m = getmax(arr, s);

    for(int div = 1; m/div > 0; div*= 10)
    {
        countsort(arr, s, div);
    }
}

void countsort(int arr[], int s, int div)
{
    int output[s];
    int range = 10;
    int count[range];

    for(int i = 0; i < range; i++)
    {
        count[i] = 0;
    }

    for(int i = 0; i< s ; i++)
    {
        count[(arr[i]/div)%10] ++;
    }
    for(int i = 1; i< range; i++)
    {
        count[i] = count[i] + count[i-1];
    }
    for(int i = 0; i< s; i++)
    {
        output[count[(arr[i]/div)%10]-1] = arr[i];
    }
    for(int i = 0 ; i < s ; i++)
    {
        arr[i] = output[i];
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

    radixsort(myarray, size);

    for(int i= 0; i< size; i++)
    {
        cout<<  myarray[i] << " ";
    }
    return 0;
}