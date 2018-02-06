
#ifndef luhn_H
#define luhn_H

#include "../util/util.h"

using namespace std;

class luhn
{
private:
public:
int get_number(int number);
int sum_of_even_places(long long cardNumber);
int sum_of_odd_places(long long cardNumber);
bool check(long long cardNumber);
luhn();
};

#endif
