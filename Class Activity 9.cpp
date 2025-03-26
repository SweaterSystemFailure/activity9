#include <iostream>

using namespace std;

struct releaseDate {
    short year;
    short month;
    short day;
};

struct movie {
    string title;
    releaseDate date;
    string director;
    bool isGood;
};

ostream& operator<<(ostream& stream, const movie& movie) {  
    stream << "Title: " << movie.title << endl;
    stream << "Release date: " << movie.date.month << "/" << movie.date.day << "/" << movie.date.year << endl;
    stream << "Directed by: " << movie.director << endl;
    stream << "Good: " << boolalpha << movie.isGood << endl;
    return stream;
}

int main()
{
    movie movie1{ "Back to the Future", {1985, 7, 3,}, "Robert Zemekis", true};
    movie movie2{ "Back to the Future 2", {1989, 11, 22}, "Robert Zemekis", true };
    movie movie3{ "Back to the Future 3", {1990, 5, 25}, "Robert Zemekis", false };

    cout << movie1 << endl;
    cout << movie2 << endl;
    cout << movie3 << endl;

    return 0;
}

