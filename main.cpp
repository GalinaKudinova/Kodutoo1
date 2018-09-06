#include <QCoreApplication>
#include "iostream"
#include "string"


using namespace std;

int main()
{
    cout << "Hello user \n"; //переход на новую строчку "\n" (стандартный С метод)
    cout << "You are Men or Women? If you is a Men choose Nr 1,If you is a Women choose Nr 2  ";
    unsigned short int gender = 0;
    cin >> gender;
    cout << "What is your heigth in cm? " << endl;
    unsigned short int height = 0;
    cin >> height;

    //cout << "You are a " << gender << endl;
    cout << "DEBUG: " << "height value is " << height << endl;

    cout << "What is your weight in kg? " << endl;
    float realWeight;

    cin >> realWeight;
    cout << "DEBUG: " << "realWeight value is " << realWeight << endl;







    if (gender == 1) {  cout << "You are a Men"<< endl;;
        double idealWeightMen = 0;
        idealWeightMen = height * height * 0.00222;
        cout << "DEBUG: " << "idealWeight value is " << idealWeightMen << endl;

        double minWeight = idealWeightMen * 0.95 ;
        double maxWeight = idealWeightMen * 1.05 ;
        cout << "ideal weight shall be {" <<minWeight << " - "<< maxWeight <<"} kg\n"; // вывод первого элемента массив
        if (realWeight < minWeight) {
            cout << "You under ideal weight" << endl;
        }
        if ( (realWeight > minWeight) && (realWeight < maxWeight )){
             cout << "You have ideal weight" << endl;
        }
        if (realWeight > maxWeight) {
             cout << "You above ideal weight" << endl;
        } }
    if (gender == 2) { cout << "You are a Women"<< endl;;
        double idealWeightWomen = 0;
        idealWeightWomen = height * height * 0.00227;
        cout << "DEBUG: " << "idealWeight value is " << idealWeightWomen << endl;

        double minWeightWomen = idealWeightWomen * 0.95 ;
        double maxWeightWomen = idealWeightWomen * 1.05 ;
        cout << "ideal weight shall be {" <<minWeightWomen << " - "<< maxWeightWomen <<"} kg\n";
        if (realWeight < minWeightWomen) {
            cout << "You under ideal weight" << endl;
        }
        if ( (realWeight > minWeightWomen) && (realWeight < maxWeightWomen )){
             cout << "You have ideal weight" << endl;
        }
        if (realWeight > maxWeightWomen) {
             cout << "You above ideal weight" << endl;
        }}




    return 0; // выход их главной функции

}
