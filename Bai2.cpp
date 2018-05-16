#include <iostream>

using namespace std;

int main()
{

    int arr1[] = {4, 1, 2};
    int arr2[] = {1, 3, 4, 2};
    int i = 0;
    int j;
    while(arr1[i] != 0 && i < 3)
    {
        j = i + 1;
        while(arr2[j] <= arr1[i] && j < 4)
        {
            j++;
        }
        if(j == 4)
        {
            cout << "-1 ";
        }
        else
        {
            cout << arr2[j] << " ";
        }
        i++;
    }

    return 0;
}

