#include <cstddef>
#include <iostream>

using std::cout;
using std::endl;

template <typename T> bool equal (T elem1, T elem2)
{
    if (elem1 == elem2)
        return true;
    return false;
}

bool delit (int elem, int number)
{
    if (elem % number ==0)
        return true;
    return false;
}

template <typename T>
unsigned check (T *arr, size_t size, bool (*func)(T, T))
{
    unsigned count = 0;
    for (size_t i = 0; i < size; i++)
        {
            if (func (arr[i], arr[0]))
                count ++;
        }
    return count;
}

int main ()
{
    char arr1 [5] = {'a', '-', '1', 'a', 'T'};
    cout << check (arr1, 5, &equal) << endl;

    int arr2 [5] = {1, 2, 0, 4, 0};
    cout << check (arr2, 5, &equal) << endl;
    cout << check (arr2, 5, &delit) << endl;

    double arr3 [5] = {1.5, 2.6, 0.0, 4.8, 0.7456};
    cout << check (arr3, 5, &equal) << endl;

    const char* arr4 [5] = {"me", "you", "me", "true", "0.567"};
    cout << check (arr4, 5, &equal) << endl;

    return 0;
}