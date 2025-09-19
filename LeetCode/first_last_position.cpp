#include <iostream>
using namespace std;
int firstOccurrence(int a[], int start, int end, int target)
{
    if (start>end)
    {
        return -1;
    }
    else if(start==end){
        if(a[start]==target) return start;
        else return -1;
    }
    else
    {
        int mid = (start+end)/2;
        if(a[mid]==target) {
            if(mid == 0 || a[mid-1]!=target) return mid;
            else return firstOccurrence(a, start, mid-1, target);
        }
        else {
            if(a[mid]>target){
                return firstOccurrence(a, start, mid-1, target);
            }
            else{
                return firstOccurrence(a, mid+1, end, target);
            }
        }
    }
}
int lastOccurrence(int a[], int start, int end, int target, int n)
{
    if (start>end)
    {
        return -1;
    }
    else if(start==end){
        if(a[start]==target) return start;
        else return -1;
    }
    else
    {
        int mid = (start+end)/2;
        if(a[mid]==target) {
            if(mid == n-1 || a[mid+1]!=target) return mid;
            else return lastOccurrence(a, mid+1, end, target , n);
        }
        else {
            if(a[mid]>target){
                return lastOccurrence(a, start, mid-1, target, n);
            }
            else{
                return lastOccurrence(a, mid+1, end, target, n);
            }
        }
    }
}
int main()
{
    cout << "Program to print First and Last Element in a sorted array\n";
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    int array[n];
    cout << "Enter the value of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the target: ";
    int t;
    cin >> t;

    int first = firstOccurrence(array, 0, n - 1, t);
    int last = lastOccurrence(array, 0, n - 1, t, n);

    if (first == -1 || last == -1)
    {
        cout << "[-1, -1]\n";
    }
    else
    {
        cout << "[" << first << ", " << last << "]\n";
    }

    return 0;
}