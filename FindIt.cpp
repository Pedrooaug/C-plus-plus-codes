#include <iostream>
#include <iterator>
#include <algorithm>

//Function to find a number in an array using pointers
//return a pointer to the number

int* FindIt(int* begining, int* ending, int value) {
    int* comparing{ begining };
    while (comparing != ending) {
        if(*comparing == value) {
            return comparing;
        }
        ++comparing;
    }
    return ending;
}
//A example of test on main, just for ilustration

int main()
{

// int testing[] { 4, 6, 12, 7, 9, 7, 32, 12 };

// int* worked { FindIt(std:: begin(teste), std:: end(teste), 12) };

// if(worked != std::end(teste)) {
        
//     std:: cout << "E found the number " << *worked << " which you were looking for";
//  }

// return 0;
}
