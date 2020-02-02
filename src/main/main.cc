#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    int input1 = 10, input2 = 15;
    std::cout << "Before swapping : input1 = " << input1 << " input2 = " << input2 << std::endl;
    solution.swap_by_reference(input1, input2);
    std::cout << "After swapping using swap_by_reference : input1 = " << input1 << " input2 = " << input2 << std::endl;

    std::cout << "Before swapping : input1 = " << input1 << " input2 = " << input2 << std::endl;
    solution.swap_by_pointers(&input1, &input2);
    std::cout << "After swapping using swap_by_pointers : input1 = " << input1 << " input2 = " << input2 << std::endl;

    return EXIT_SUCCESS;
}