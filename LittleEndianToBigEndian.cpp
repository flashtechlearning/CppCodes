/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void ConvertLittleEndianToBigEndian(int *int_array , int number_bytes)
{
    unsigned char *uint8ptr = (unsigned char*)int_array;
    unsigned char byte_array[4];
    for(int index = 0 ; index < number_bytes / 4 ; index++)
    {
        byte_array[0] = *uint8ptr;
        uint8ptr++;
        byte_array[1] = *uint8ptr;
        uint8ptr++;
        byte_array[2] = *uint8ptr;
        uint8ptr++;
        byte_array[3] = *uint8ptr;
        uint8ptr++;
        
        int_array[index] = ((byte_array[3] << 0)) | 
                            ((byte_array[2] << 8) ) | 
                            ((byte_array[1] << 16) ) | 
                            ((byte_array[0] << 24)) ;
        
    }
    
}

int main()
{
    int int_array[5] = { 1 ,2,3 ,4 , 5};
    
    unsigned char *ptr = (unsigned char*)int_array;
    
    #if 1
    for(int index = 1 ; index <= sizeof(int_array) ; index++)
    {
        cout << (int)*ptr << " " ;
        ptr++;
        if(index % 4 == 0)
        {
            cout << endl;
        }
    }
    #endif
    
    ConvertLittleEndianToBigEndian(int_array , sizeof(int_array));
    
    ptr = (unsigned char*)int_array;
    printf("********************\n");
    #if 1
    for(int index = 1 ; index <= sizeof(int_array) ; index++)
    {
        cout << (int)*ptr << " " ;
        ptr++;
        if(index % 4 == 0)
        {
            cout << endl;
        }
    }
    #endif
    

    return 0;
}
