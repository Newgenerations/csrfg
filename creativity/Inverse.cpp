#include "creativity\Inverse.h"

void Inverse::getInverse(std::vector<int> arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        inverse.push_back(arr[i]);
    }
}

void Inverse::printInverse()
{
    int size = inverse.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << inverse[i] << " ";
    }
    std::cout << std::endl;
}

Inverse::Inverse(/* args */)
{
    std::cout << "Inverse object created" << std::endl;
}

Inverse::~Inverse()
{
    std::cout << "Inverse object destroyed" << std::endl;
}

IsEven::IsEven(/* args */)
{
    std::cout << "IsEven object created" << std::endl;
}

IsEven::~IsEven()
{
    std::cout << "IsEven object destroyed" << std::endl;
}

bool IsEven::isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsEven::isOdd(int n)
{
    if (n % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsEven::isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void IsEven::isProductIsEven(int a[], int size)
{
    std::cout << size << std::endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((a[i] * a[j]) % 2 == 0)
            {
                std::cout << "Product of " << a[i] << " * " << a[j] << " is even" << std::endl;
            }
        }
    }
}

void IsEven::isOdd(std::vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = i + 1; j < b.size(); j++)
        {
            if (b[i] % b[j] != 0)
            {
                std::cout << "Odd by modulo with " << b[i] << "%" << b[j] << std::endl;
            }
            else if (b[i] * b[j] % 2 != 0)
            {
                std::cout << "Odd by product with " << b[i] << " * " << b[j] << std::endl;
            }
            else if (b[i] + b[j] % 2 != 0)
            {
                std::cout << "Odd by sum with " << b[i] << " + " << b[j] << std::endl;
            }
            else if (b[i] - b[j] % 2 != 0)
            {
                std::cout << "Odd by difference with " << b[i] << " - " << b[j] << std::endl;
            }
            else if (b[i] / b[j] % 2 != 0)
            {
                std::cout << "Odd by division with " << b[i] << " / " << b[j] << std::endl;
            }
            else
            {
                std::cout << "Even" << std::endl;
            }
        }
    }
}

void IsEven::isDifferent(std::vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = i + 1; j < b.size(); j++)
        {
            if (b[i] != b[j])
            {
                std::cout << "Different" << std::endl;
            }
        }
    }
}

bool IsEven::isComposite(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

bool IsEven::isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}

bool IsEven::isAbundant(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum > n)
    {
        return true;
    }
    return false;
}

bool IsEven::isDeficient(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum < n)
    {
        return true;
    }
    return false;
}

bool IsEven::isHappy(int n)
{
    int sum = 0;
    while (n != 1 && n != 4)
    {
        sum = 0;
        while (n)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        n = sum;
    }
    if (n == 1)
    {
        return true;
    }
    return false;
}

bool IsEven::isSad(int n)
{
    int sum = 0;
    while (n != 1 && n != 4)
    {
        sum = 0;
        while (n)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        n = sum;
    }
    if (n == 4)
    {
        return true;
    }
    return false;
}

bool IsEven::isHarshad(int n)
{
    int sum = 0;
    int temp = n;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    if (temp % sum == 0)
    {
        return true;
    }
    return false;
}

bool IsEven::isPronic(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i * (i + 1) == n)
        {
            return true;
        }
    }
    return false;
}

bool IsEven::isPowerOfTwo(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return false;
        }
        n = n / 2;
    }
    return true;
}

bool IsEven::isPowerOfThree(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 3 != 0)
        {
            return false;
        }
        n = n / 3;
    }
    return true;
}

bool IsEven::isPowerOfFour(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 4 != 0)
        {
            return false;
        }
        n = n / 4;
    }
    return true;
}

bool IsEven::isPowerOfFive(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 5 != 0)
        {
            return false;
        }
        n = n / 5;
    }
    return true;
}

bool IsEven::isPowerOfSix(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 6 != 0)
        {
            return false;
        }
        n = n / 6;
    }
    return true;
}

bool IsEven::isPowerOfSeven(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 7 != 0)
        {
            return false;
        }
        n = n / 7;
    }
    return true;
}

bool IsEven::isPowerOfEight(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 8 != 0)
        {
            return false;
        }
        n = n / 8;
    }
    return true;
}

bool IsEven::isPowerOfNine(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 9 != 0)
        {
            return false;
        }
        n = n / 9;
    }
    return true;
}

bool IsEven::isPowerOfTen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 10 != 0)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

bool IsEven::isPowerOfEleven(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 11 != 0)
        {
            return false;
        }
        n = n / 11;
    }
    return true;
}

bool IsEven::isPowerOfTwelve(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 12 != 0)
        {
            return false;
        }
        n = n / 12;
    }
    return true;
}

bool IsEven::isPowerOfThirteen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 13 != 0)
        {
            return false;
        }
        n = n / 13;
    }
    return true;
}

bool IsEven::isPowerOfFourteen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 14 != 0)
        {
            return false;
        }
        n = n / 14;
    }
    return true;
}

bool IsEven::isPowerOfFifteen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 15 != 0)
        {
            return false;
        }
        n = n / 15;
    }
    return true;
}

bool IsEven::isPowerOfSixteen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 16 != 0)
        {
            return false;
        }
        n = n / 16;
    }
    return true;
}

bool IsEven::isPowerOfSeventeen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 17 != 0)
        {
            return false;
        }
        n = n / 17;
    }
    return true;
}

bool IsEven::isPowerOfEighteen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 18 != 0)
        {
            return false;
        }
        n = n / 18;
    }
    return true;
}

bool IsEven::isPowerOfNineteen(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 19 != 0)
        {
            return false;
        }
        n = n / 19;
    }
    return true;
}

bool IsEven::isPowerOfTwenty(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 20 != 0)
        {
            return false;
        }
        n = n / 20;
    }
    return true;
}

bool IsEven::isPowerOfTwentyOne(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 21 != 0)
        {
            return false;
        }
        n = n / 21;
    }
    return true;
}

bool IsEven::isPowerOfTwentyTwo(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 22 != 0)
        {
            return false;
        }
        n = n / 22;
    }
    return true;
}
