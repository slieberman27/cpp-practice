#include <iostream>
using namespace std;

// NOW MAKE IT USE USER INPUT

int main() {
  double basePrice = 19.99;

  const double taxRate = 0.085;

  int amount = 3;

  double subTotal = amount * basePrice;

  double taxAmount = subTotal * taxRate;
  
  double total = taxAmount + subTotal;

  cout << "For " << amount << " items at $" << basePrice << " each, the subtotal is $" << subTotal << ", tax is $" << taxAmount << " and total is $" << total << ".";
  return 0;
}