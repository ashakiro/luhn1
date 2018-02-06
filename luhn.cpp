
#include "luhn.h"

luhn::luhn()
{}

int luhn::get_number(int number)
{
  if (number > 9 && number < 100)
    return number % 10 + number / 10;
  else if (number >= 0 && number <= 9)
    return number;
}

int luhn::sum_of_even_places(long long cardNumber)
{
  string number = to_string(cardNumber);
  int sum_of_evens = 0;
  for (int i = number.length() - 2; i >= 0; i -= 2)
    {
    sum_of_evens += get_number((number[i] - '0') * 2);
    }
  return sum_of_evens;
}

int luhn::sum_of_odd_places(long long cardNumber)
{
    string number = to_string(cardNumber);
    int sum_of_odds = 0;
    for (int i = number.length() - 1; i >= 0; i -= 2)
      {
      sum_of_odds += (number[i] - '0');
      }
    return sum_of_odds;
}

bool luhn::check(long long cardNumber)
{
  if ((sum_of_even_places(cardNumber) + sum_of_odd_places(cardNumber)) % 10 == 0)
    {
    cout<<"CARD NUMBER = "<<cardNumber<<"\n "<<"SUM = "<<(sum_of_even_places(cardNumber) + sum_of_odd_places(cardNumber))<<"\n "<<"Valid\n\n";
    return true;
    }
    else
    {
    cout<<"CARD NUMBER = "<<cardNumber<<"\n "<<"SUM = "<<(sum_of_even_places(cardNumber) + sum_of_odd_places(cardNumber))<<"\n "<<"Invalid\n\n";
    return false;
    }
}
