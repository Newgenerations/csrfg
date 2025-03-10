#include "exe_head/exeh.h"
exeh::exeh()
{
    std::cout << "exeh object created" << std::endl;
}

exeh::~exeh()
{
    std::cout << "exeh object destroyed" << std::endl;
}
int exeh::sumOfAllIntegerSmaller(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

long exeh::isMultiple(long n, long m)
{
    if (n % m == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int exeh::printArray(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

void exeh::SmallestAndLargest(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    std::cout << "Smallest: " << min << std::endl;
    std::cout << "Largest: " << max << std::endl;
}

Flower::Flower(std::string name, int pedals, float price)
{
    this->name = name;
    this->pedals = pedals;
    this->price = price;
}

Flower::~Flower()
{
    std::cout << "Flower object destroyed" << std::endl;
}

void Flower::printFlower()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Pedals: " << pedals << std::endl;
    std::cout << "Price: " << price << std::endl;
}

void Flower::setName(std::string name)
{
    this->name = name;
    std::cout << "New name is : " << name << std::endl;
}

void Flower::setPedals(int pedals)
{
    this->pedals = pedals;
    std::cout << "New pedals are : " << pedals << std::endl;
}

void Flower::setPrice(float price)
{
    this->price = price;
    std::cout << "New price is : " << price << std::endl;
}

void Flower::getName()
{
    std::cout << "Name: " << name << std::endl;
}

void Flower::getPedals()
{
    std::cout << "Pedals: " << pedals << std::endl;
}

void Flower::getPrice()
{
    std::cout << "Price: " << price << std::endl;
}
