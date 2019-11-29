#include<iostream>
#include<vector>

using namespace std;

void selection_sort(vector<int> &array);

int main()
{
    vector<int> array;
    selection_sort(array);
    return 0;
}

void selection_sort(vector<int> &array)
{
    size_t size = array.size();
    for(size_t select_indx = 0; select_indx < size - 1; select_indx++)
    {
        int smallest_value = array.at(select_indx);
        size_t smallest_indx = select_indx;
        for (size_t compare_indx = select_indx +1; compare_indx < size; compare_indx++)
        {
            if(array.at(compare_indx) < smallest_value)
            {
                smallest_value = array.at(compare_indx);
                smallest_indx = compare_indx;
            }
        } 
        swap(array.at(smallest_indx), array.at(select_indx));
    }
}