#include <iostream>
using namespace std;

void linearsearch(int a[], int n)
{
    int temp = -1;
    for (int i= 0 ; i< 5 ; i++)
    {
        if(a[i]==n)
        {
            cout<< "Your value is chiling at psition "<<i+1 << endl;
            temp = 0;
        }
    }
    if(temp == -1)
        {
            cout<< "there is no value you mentioned to search"<< endl;
        }
}

int main()
{
    int arr[5] = {1, 3, 5, 6, 8};
    int num;
    cout<< "Enter a number to search:"<< endl;
    cin>> num;
    linearsearch(arr, num);

    return 0;
}