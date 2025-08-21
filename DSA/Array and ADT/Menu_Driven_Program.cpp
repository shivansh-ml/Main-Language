#include <iostream>
#include <math.h>

using namespace std;

class Array
{
private:
    int *a;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 0;
        a = new int[10];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        a = new int[sz];
    }
    ~Array()
    {
        delete[] a;
    }
    void Display()
    {
        if (length <= 0)
        {
            cout << "Array is empty" << endl;
        }
        else
        {
            for (int i = 0; i < length; i++)
            {
                cout << a[i] << endl;
            }
        }
    }
    void Append(int x)
    {
        cout << "Program to append a number in the array" << endl;
        if (size == length)
        {
            cout << "The Array is full" << endl;
        }
        else
        {
            a[length] = x;
            length++;
        }
    }
    void Insertion(int index, int x)
    {
        if (index < 0 || index > length || length == size)
        {
            cout << "The value cannot be added" << endl;
        }
        else
        {
            cout << "Program to add a number in a specific index" << endl;

            // shift elements to the right
            for (int i = length - 1; i >= index; i--)
            {
                a[i + 1] = a[i];
            }

            // insert new element
            a[index] = x;

            // increase length
            length++;
        }
    }
    int Delete(int index);
    int LinearSearch(int key);
    int BinarySearch(int key);
    void swap(int *x, int *y);
    int Sum()
    {
        int s = 0;
        int i;
        for (i = 0; i < length; i++)
            s += a[i];
        return s;
    }

    float Avg()
    {
        return (float)Sum() / length;
    }
    void Reverse()
    {
        int *B;
        int i, j;
        B = new int[10];
        for (i = length - 1, j = 0; i >= 0; i--, j++)
            B[j] = a[i];
        for (i = 0; i < length; i++)
            a[i] = B[i];
    }
    void Reverse2()
    {
        int i, j;
        for (i = 0, j = length - 1; i < j; i++, j--)
        {
            swap(&a[i], &a[j]);
        }
    }
};

int Array::Delete(int index)
{
    if (index < 0 || index >= length)
    {
        cout << "The value cannot be deleted" << endl;
    }
    else
    {
        cout << "Program to delete a number in a specific Index";
        for (int i = index; i < length - 1; i++)
        {
            a[i] = a[i + 1];
        }
        length--;
    }
}
int Array::LinearSearch(int n)
{
    for (int i = 0; i < length; i++)
    {
        if (n == a[i])
        {
            cout << "Number is present at Index: " << i << endl;
        }
    }
    cout << "Number is not present" << endl;
}
int Array::BinarySearch(int key)
{
    int l, mid, h;
    l = 0;
    h = length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
void Array::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    cout << "MENU DRIVEN PROGRAM ADT" << endl;
    Array *arr1;
    int ch, sz;
    int x, index;

    cout << "Enter Size of Array";
    scanf("%d", &sz);
    arr1 = new Array(sz);

    do
    {
        cout << "\n\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6.Exit\n";

        cout << "enter you choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter an element and index ";
            cin >> x >> index;
            arr1->Insertion(index, x);
            break;
        case 2:
            cout << "Enter index ";
            cin >> index;
            arr1->Delete(index);
            break;
        case 3:
            cout << "Enter element to search";
            cin >>x;
            arr1->LinearSearch(x);
            break;
        case 4:
            cout << "Sum is " << arr1->Sum();
            break;
        case 5:
            arr1->Display();
        }
    } while (ch < 6);
    delete arr1;
    return 0;
}
