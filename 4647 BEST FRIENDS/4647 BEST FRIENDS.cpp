// 4647 BEST FRIENDS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Node 
{
public:
    int N, i, j;
};
int main()
{
    Node* nodes = new Node[10000];
    int i = 1;
    int j = 1;
    for (int N = 0; N < 10000; N++)
    {
        nodes[N].N = N + 1;
        nodes[N].i = i;
        nodes[N].j = j++;
        if (j > i)
        {
            i++;
            j = 1;
        }
    }
    std::cout << "Hello World!\n";
    delete[] nodes;
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
