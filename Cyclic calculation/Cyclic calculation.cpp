#include <iostream>

void cycle()
{
    int last_num, sum = 0;
    std::cout << "Enter last number: ";
    std::cin >> last_num;
    std::cout << std::endl;
    for (int i = 0; i <= last_num; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
        }
    }

    std::cout << "Sum = " << sum << std::endl;

}


int main()
{
    cycle();
    std::cout << "Hello World!\n";
}
