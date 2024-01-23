#include <iostream>

using std::cout;
using std::endl;

template <typename T> unsigned equal (T *arr, T elem, unsigned size)
{
    unsigned count = 0;
    for (unsigned i = 0; i < size; ++i)
    {
        if (arr[i] == elem)
            ++ count;
    }
    return count;
}

int main ()
{
    char arr1 [5] = {'a', '-', '1', 'a', 'T'};
    cout << equal (arr1, 'a', 5) << endl;

    int arr2 [5] = {1, 2, 0, 4, 0};
    cout << equal (arr2, 0, 5) << endl;

    double arr3 [5] = {1.5, 2.6, 0.0, 4.8, 0.7456};
    cout << equal (arr3, 0.567, 5) << endl;

    const char* arr4 [5] = {"me", "you", "me", "true", "0.567"};
    cout << equal (arr4, "0.567", 5) << endl;

    return 0;
}