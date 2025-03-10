#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <vector>
#include <ostream>
class Rnd
{
public:
    Rnd(/* args */);
    ~Rnd();
    void shuffleArray(int arr[], int n);
    void possibleString(char str[], int n);
    void renverseOrder();
};

class Vec
{
public:
    // NOTE - >
    /*
        @dev addition of two vectors
        @param a - first vector
        @param b - second vector
        @return sum of two vectors
        @info We will  override the operator implemented in the class
        @info we repeit the syntax with multiplication of a scalar and dot product
    */
    Vec(double x = 0.0, double y = 0.0);

    // Surcharge de l'opérateur + pour l'addition de deux vecteurs
    Vec operator+(const Vec &other) const
    {
        return Vec(x + other.x, y + other.y);
    }

    // Surcharge de l'opérateur * pour la multiplication scalaire (vecteur * scalaire)
    Vec operator*(double scalar) const
    {
        return Vec(x * scalar, y * scalar);
    }

    // Surcharge de l'opérateur * pour le produit scalaire (vecteur * vecteur)
    double operator*(const Vec &other) const
    {
        return (x * other.x) + (y * other.y);
    }

    // Surcharge de l'opérateur << pour l'affichage du vecteur
    friend std::ostream &operator<<(std::ostream &os, const Vec &vec)
    {
        os << "(" << vec.x << ", " << vec.y << ")";
        return os;
    }
    ~Vec();
    void SumVector(std::vector<double> a, std::vector<double> b);

private:
    double x;
    double y;
};
