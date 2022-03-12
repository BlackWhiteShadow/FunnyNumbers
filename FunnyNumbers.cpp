/*
FunnyNumbers.cpp : Create a function which takes a number n and a positive integer p and
                    returns a positive integer k, such as the sum of the digits of n taken to the successive powers of p is equal to k * n.
*/

#include <iostream>
#include <vector>

using namespace std;

int funnyNumbers(int n, int p)
{
    int x;
    int y = n;
    int sum = 0;
    int k;
    vector<int> num;
    do
    {
        x = y % 10;
        num.insert(num.begin(), x);
        y /= 10;
    } while (y);


    for (int i = 0; i < num.size(); i++)
    {
        sum += pow(num[i], (p + i));
    }

    k = sum / n;
    if (sum % n == 0)
        return k;
    else
        return -1;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << funnyNumbers(n, p);
}

