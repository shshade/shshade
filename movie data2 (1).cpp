#include <iostream>
#include  <string>
using namespace std;

struct MovieData {
    string title;
    string director;
    int year;
    int length;
};

void displayMovieData(const MovieData& movie) {
    cout << "Movie Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: "  << movie.year << endl;
    cout << "Running Time: " << movie.length << endl;
    cout << "__________________________________" << endl;
};

int main () {
    MovieData movie1 = {"Interstellar", "Christopher Nolan", 2014, 169};
    MovieData movie2 = {"The Half of It", "Alice Wu", 2020, 106};
    cout << "Movie Information:" << endl;
    cout << "__________________________________" << endl;
    displayMovieData(movie1);
    displayMovieData(movie2);
};