#include<iostream>
#include<iomanip>
using namespace std;

bool is_prime(int num)
{
	for (int i = 2; i*i < num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

int main()
{
    const int NUM_PRIMES = 200; 
    const int PRIMES_PER_LINE = 10; 
    int count = 0; 
    int num = 2;

    while (count < NUM_PRIMES) {
        if (is_prime(num)) {
            std::cout << std::setw(5) << num; 
            count++;
            if (count % PRIMES_PER_LINE == 0) {
                std::cout << std::endl;
            }
        }
        num++;
    }

    return 0;
}

	