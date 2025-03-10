#include "randomnes/Rnd.h"

void Rnd::shuffleArray(int arr[], int n)
{
    srand(time(0));
    int j;
    for (int i = n - 1; i > 0; i--)
    {
        j = rand() % (i + 1);
        std::swap(arr[i], arr[j]);
    }
    std::cout << "the random is " << arr[j] << std::endl;
}

void Rnd::renverseOrder()
{
    std::cout << "enter anything" << std::endl;
    std::string str;
    std::getline(std::cin, str);
    std::reverse(str.begin(), str.end());
    std::cout << "the reverse is " << str << std::endl;
}


Vec::Vec(double x, double y) : x(x), y(y)
{
    std::cout << "Vec object created" << std::endl;
}

Vec::~Vec()
{
    std::cout << "Vec object destroyed" << std::endl;
}

void Vec::SumVector(std::vector<double> a, std::vector<double> b)
{
    std::vector<double> sum;
    for (int i = 0; i < a.size(); i++)
    {
        sum.push_back(a[i] + b[i]);
    }
    for (int i = 0; i < sum.size(); i++)
    {
        std::cout << sum[i] << " = " << a[i] << " + " << b[i] << std::endl;
    }
    std::cout << std::endl;
}

void Rnd::possibleString(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            std::cout << str[i] << str[j] << std::endl;
        }
    }
}

Rnd::Rnd(/* args */)
{
    std::cout << "Rnd object created" << std::endl;
}

Rnd::~Rnd()
{
    std::cout << "Rnd object destroyed" << std::endl;
}