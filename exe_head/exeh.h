#include <iostream>
class exeh
{
private:
    /* data */
public:
    exeh();
    ~exeh();
    int sumOfAllIntegerSmaller(int n);
    long isMultiple(long n, long m);
    int printArray(int **arr, int n, int m);
    void SmallestAndLargest(int arr[], int n);
};

class Flower
{
private:
    std::string name;
    int pedals;
    float price;

public:
    Flower(std::string name, int pedals, float price);
    ~Flower();
    void printFlower();
    void setName(std::string name);
    void setPedals(int pedals);
    void setPrice(float price);
    void getName();
    void getPedals();
    void getPrice();
};