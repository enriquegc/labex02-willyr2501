// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double meal_cost;
  double total_meal_cost;
  double after_tip;
  double after_tax;
  double tax = 7.75/100;
  double tip = 20.0/100;

//introduction
std::cout <<"Welcome to the restaurant bill calculator";

  //input the price of the total bill
  std::cout << "what is the total meal cost?";
  std::cin >> meal_cost;

  //calculate the total price of the bill
after_tax = meal_cost * tax;

//dispay the are of the price after the after tax
std::cout << "the total tax on the meal is " << after_tax;

//calculate the total tip
after_tip = meal_cost * tip;

//display the price of the tip that is to be left
std::cout <<"the total amount of tip on the meal is " << after_tip;

//calulate the total bill
total_meal_cost = after_tax + after_tip + meal_cost;

//display the total bill
std::cout <<"the total biil is " << total_meal_cost;
}
