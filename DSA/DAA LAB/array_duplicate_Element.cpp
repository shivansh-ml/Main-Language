#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int array[n];
    // Enter the array in sorted manner
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int totalduplicate = 0;
    int maxCount = 0;
    int currentcount = 0;
    int maxElement = array[0];
    for (int i = 01; i < n; i++)
    {
        if (array[i] == array[i - 1])
        {
            currentcount = currentcount + 1;
        }
        else{
            if (maxCount < currentcount)
            {
                maxCount = currentcount;
                maxElement = array[i-1];
            }
            totalduplicate = totalduplicate + currentcount;
            currentcount = 0;
        }
    }
    cout<<"Total number of duplicate element: "<<totalduplicate<<endl;
    cout<<"Maximum number of duplicate element: "<<maxCount<<endl;
    cout<<"Element with maximum number of duplicate: "<<maxElement<<endl;
}