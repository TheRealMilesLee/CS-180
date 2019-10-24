#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    unsigned SIZE = 10;
    unsigned numbers[SIZE];
    unsigned count;
    ofstream output_file;

    for (count = 0; count < SIZE; count++)
    {
        numbers[count] = count;
    }

    output_file.open("1.txt");

    for (count = 0; count < SIZE; count++)
    {
        output_file << numbers[count] << endl;
    }

    output_file.close();
    return 0;
}