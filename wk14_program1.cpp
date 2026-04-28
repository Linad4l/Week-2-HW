#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearRealeased;
    int runningTime;
    double productionCost;
    double firstYearRevenue;
};

void displayMovieInfo(const MovieData movie);

int main()
{
MovieData movie1;
movie1.title="The Dark Knight";
movie1.director="Christopher Nolan";
movie1.yearRealeased=2008;
movie1.runningTime=152;
movie1.productionCost=160000000;
movie1.firstYearRevenue=825000000;

MovieData movie2;
movie2.title="The Dark Knight Rises";
movie2.director="Christopher Nolan";
movie2.yearRealeased=2012;
movie2.runningTime=164;
movie2.productionCost=180000000;
movie2.firstYearRevenue=937000000;

displayMovieInfo(movie1);
displayMovieInfo(movie2);

return 0;
}

void displayMovieInfo(const MovieData movie)
{
    double profitloss= movie.firstYearRevenue - movie.productionCost;
    cout<<fixed<<setprecision(0);
    cout << "Movie Title:        " << movie.title << endl;
    cout << "Director:           " << movie.director << endl;
    cout << "Year Released:      " << movie.yearRealeased << endl;
    cout << "Running Time:       " << movie.runningTime << " minutes" << endl;
    cout << "Production Cost:    $" << movie.productionCost << endl;
    cout << "1st Year Revenue:   $" << movie.firstYearRevenue << endl;

    cout << "Profit/Loss:        $" << profitloss;
    
    if(profitloss<=0)
    {
        cout<<"(loss)"<<endl;
    }
    else
    {
        cout<<"(profit)"<<endl;
    }
    cout<< "-----------------------------------------"<<endl;
}
