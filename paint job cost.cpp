#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void displayHeader();
double calculateGallons(double totalSquareFeet);
double calculatelaborHrs(double totalSquareFeet);
double calculatePaintCost(double gallons, double pricePerGallon);
double calculateLaborCost(double hours);
double calculateTotalCost(double paintCost, double laborCost);

int main() {

  int numOfRooms;
  double pricePerGallon;
  vector<double> roomSqFt;
  double totalSqFt = 0.0;

  cout << "Enter the number of rooms to be painted: ";
  cin >> numOfRooms;

for (int i = 0; i < numOfRooms; i++) {
  double sqFt;
  cout << "Enter the square feet of wall space in room " << (i + 1) << ": ";
  cin >> sqFt;
  roomSqFt.push_back(sqFt);
  totalSqFt += sqFt;

cout << "Enter the price of paint per gallon: ";
cin >> pricePerGallon;
}

double gallonsRequired = calculateGallons(totalSqFt);
double laborHours = calculatelaborHrs(totalSqFt);
double paintCost = calculatePaintCost(gallonsRequired, pricePerGallon);
double laborCost = calculateLaborCost(laborHours);
double totalCost = calculateTotalCost(paintCost, laborCost);


displayHeader();
  cout << fixed << setprecision(2);
  cout << "Gallons of paint required: " << gallonsRequired << endl;
  cout << "Hours of labor required: " << laborHours << endl;
  cout << "Cost of paint: $" << paintCost << endl;
  cout << "Labor charges: $" << laborCost << endl;
  cout << "Total cost of the paint job: $" << totalCost << endl;

  return 0;
}

void displayHeader() {
  cout << "=================================" << endl;
  cout << "   Artistic Solutions Receipt    " << endl;
  cout << "     Professional Paint Jobs     " << endl;
  cout << "=================================" << endl;
}
    
double calculateGallons(double totalSqFt) {
  const double coverage_per_gallon = 160.0;
  return (totalSqFt / coverage_per_gallon);
}
  
double calculatelaborHrs(double totalSqFt) {
  const double labor_per_hour = 3.0;
  const double coverage_per_gallon = 160.0;
  
  return ceil(totalSqFt / coverage_per_gallon) * labor_per_hour;
}

double calculatePaintCost(double gallons, double pricePerGallon) {
  return gallons * pricePerGallon;
}

double calculateLaborCost(double hours) {
  const double labor_cost_per_hour = 28.0;
  return hours * labor_cost_per_hour;
}

double calculateTotalCost(double paintCost, double laborCost) {
  return paintCost + laborCost;
}
