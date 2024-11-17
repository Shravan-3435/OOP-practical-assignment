#include <iostream> 
using namespace std;

template <typename T>
void selectionSort(T arr[], int n) 
{ 
    for (int i = 0; i < n - 1; i++) 
    { 
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) 
        { 
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            } 
        }
        if (minIndex != i)  
        { 
            T temp = arr[i]; 
            arr[i] = arr[minIndex]; 
            arr[minIndex] = temp;
        }
    }
}

template <typename T>
void printArray(const T arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
       cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int n; 
    cout << "Enter the number of integers: "; 
    cin >> n;

    int intArr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> intArr[i];
    }

    cout << "Original array: "; 
    printArray(intArr, n);

    selectionSort(intArr, n);

    cout << "Sorted array: "; 
    printArray(intArr, n);

    int m;
    cout << "Enter the number of doubles: "; 
    cin >> m;

    double doubleArr[m];
    cout << "Enter " << m << " doubles: ";
    for (int i = 0; i < m; i++) 
    {
        cin >> doubleArr[i];
    }

    cout << "Original array: ";
    printArray(doubleArr, m);

    selectionSort(doubleArr, m);

    cout << "Sorted array: "; 
    printArray(doubleArr, m);

    return 0;
}
