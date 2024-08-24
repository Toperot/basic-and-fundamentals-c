#include <iostream>
using namespace std;

//Coded by Kristoffer Ludovice

int main() 
{
    int array1[10], array2[10];
    int MergedArray[20];

    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < 10; i++) 
	{
        cin >> array1[i];
    }

    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < 10; i++) 
	{
        cin >> array2[i];
    }

    for (int i = 0; i < 10; i++) 
	{
        MergedArray[i] = array1[i];
    }
    for (int i = 0; i < 10; i++) 
	{
        MergedArray[10 + i] = array2[i];
    }

    int MergedSize = 20;

    for (int i = 0; i < 20 - 1; i++) 
	{
        for (int j = 0; j < 20 - i - 1; j++) 
		{
            if (MergedArray[j] < MergedArray[j + 1]) 
			{
                // Swap the elements
                int temp = MergedArray[j];
                MergedArray[j] = MergedArray[j + 1];
                MergedArray[j + 1] = temp;
            }
        }
    }

    cout << "Merged and sorted array in descending order:" << endl;
    for (int i = 0; i < MergedSize; i++) 
	{
        cout << MergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
