/******************************************************************************

Move All Non Zeros to the end of the array

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[5] = { 1 , 0 , 2, 0 , 3};
    
    int count;
    int i;
    int size = 5;
    
    for(i = 0 ; i < size ; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    
    for(i = count ; i < size ; i++)
    {
        arr[i] = 0;
    }


    for(i = 0 ; i < size ; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
