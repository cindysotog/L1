#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int a = 2;
    int b = 1;

    while (a > b)
    {
        cout <<"(while) a > b" << endl;
        break;
    }

    do
    {
        cout << "(do while) a > b " <<endl;
        break;
    } while (a > b);

    return 0;

}