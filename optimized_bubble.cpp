#include <iostream>
using namespace std;

void bubblesort(int arr[])
{
    int round = 0;
    for (int i = 0; i < 5; i++)
    {
        bool flag = false;
        
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                
                flag = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        round++;
        if (flag == false)
        {
            break;
        }
    }
    cout << "after sorting: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout<< " no of rounds taken: " << round ;
}

int main()
{
    int myarr[5];
    cout << "enter 5 digits into the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << endl;
    cout << "before sorting: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i];
    }

    cout << endl;
    bubblesort(myarr);
    
    return 0;
}