// Week1AppCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <functional>
#include <numeric>

#define expectedSum 100

int main()
{
    srand(time(0));
    int scores[100];
    enum Skill { novice, intermediate, advanced, hardcore };
    int range[4] = { novice, intermediate, advanced, hardcore };
    range[novice] = 0;
    range[intermediate] = 0;
    range[advanced] = 0;
    range[hardcore] = 0;

    for (int i = 0; i < 100; i++) {
        scores[i] = (rand() % 100);

        if (scores[i] <= 40)
        {
            range[novice]++;
        }
        else if (scores[i] <= 60)
        {
            range[intermediate]++;
        }
        else if (scores[i] <= 80)
        {
            range[advanced]++;
        }
        else if (scores[i] <= 100)
        {
            range[hardcore]++;
        }
        else
        {
            std::cout << "What did you do!?" << std::endl;
        }
    }
    std::cout << range[novice] << " people have a novice score" << std::endl;
    std::cout << range[intermediate] << " people have an intermediate score" << std::endl;
    std::cout << range[advanced] << " people have an advanced score" << std::endl;
    std::cout << range[hardcore] << " people have a hardcore score" << std::endl;

    int sum = accumulate(std::begin(range), std::end(range), 0, std::plus<int>());

    #ifdef expectedSum
    if (sum == expectedSum)
    {
        std::cout << "Program Succeeded" << std::endl;
    }
    else
    {
        std::cout << "Program Failed" << std::endl;
    }
    #endif
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
