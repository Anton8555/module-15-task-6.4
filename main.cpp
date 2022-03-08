#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {-100, -50, -5, 1, 10, 15};
    std::vector<int> b;
    int i,j;

    // task complection (asterisk version)
    // looking for subarrays
    i = 0;  // index of the first element of a subarray of positive numbers
    for(; i<a.size(); i++)
        if( a[i] >= 0 )
            break;
    j = i-1;  // index of the last element of a subarray of negative numbers
    // creating a new array by assignment
    while( (i<a.size()) && (j>=0) ) {
        if( std::abs(a[j]) < a[i] ) {
            b.push_back(a[j]);
            j--;
        } else {
            b.push_back(a[i]);
            i++;
        }
    }
    // adding remaining elements
    if( i == a.size() )
        for(; j>=0; j--)
            b.push_back(a[j]);
    else
    if( j == -1 )
        for(; i<a.size(); i++)
            b.push_back(a[i]);

    // result output
    for(int i=0; i<b.size(); i++)
        std::cout << b[i] << " ";
    std::cout << std::endl;

    return 0;
}
