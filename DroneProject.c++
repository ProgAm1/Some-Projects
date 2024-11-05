#include <iostream>
#include <string>
using namespace std;

class Pres
{
public:
    int Speed, Ful, FT;
    string Model;
};
Pres Fly;

void askModel()
{
    string inputModel;
    cout << "Enter the name of model: ";
    getline(cin, inputModel);
    Fly.Model = inputModel;
}

int askSpeed()
{
    int inputSpeed;
    cout << "Enter the Speed: ";
    cin >> inputSpeed;
    Fly.Speed = inputSpeed;
    if (Fly.Speed > 2000)
        return 1;
    else
        return 0;
}
int askFT()
{
    int inputFT;
    cout << "Enter the Height: ";
    cin >> inputFT;
    Fly.FT = inputFT;
    if (Fly.FT > 10000)
        return 1;
    else
        return 0;
}

int askFul()
{
    int inputFul;
    cout << "Enter the Fuel: ";
    cin >> inputFul;
    Fly.Ful = inputFul;
    if (Fly.Ful > 50)
        return 1;
    else
        return 0;
}
void display()
{
    cout<<"\n";
    cout << "The Model name: " << Fly.Model << endl;
    cout << "The Speed is: " << Fly.Speed << " km/h" << endl;
    cout << "The Fuel is: " << Fly.Ful << " Gallon" << endl;
    cout << "Height above the ground: " << Fly.FT << " FT" << endl;
    if (Fly.Speed>2000 && Fly.FT>15000 && Fly.Ful>50)
        cout << "The plane is in attack mode" << endl;
    else
        cout << "The plane is in a defensive mode" << endl;
}

int main()
{
    askModel();
    askSpeed();
    askFT();
    askFul();
    display();
    return 0;
}






// Program by AI

// #include <iostream>
// #include <string>

// using namespace std;

// class Pres {
// public:
//     int Speed, Ful, FT;
//     string Model;
// };

// Pres Fly; // Create an instance of Pres

// void askModel() {
//     string inputModel;
//     cout << "Enter the name of the model: ";
//     getline(cin, inputModel);
//     Fly.Model = inputModel;
// }

// void askSpeed() {
//     cout << "Enter the Speed (km/h): ";
//     cin >> Fly.Speed; // Directly set Fly.Speed
// }

// void askFT() {
//     cout << "Enter the Height (FT): ";
//     cin >> Fly.FT; // Directly set Fly.FT
// }

// void askFul() {
//     cout << "Enter the Fuel (Gallon): ";
//     cin >> Fly.Ful; // Directly set Fly.Ful
// }

// void display() {
//     cout << "The Model name: " << Fly.Model << endl;
//     cout << "The Speed is: " << Fly.Speed << " km/h" << endl;
//     cout << "The Height above the ground: " << Fly.FT << " FT" << endl;
//     cout << "The Fuel is: " << Fly.Ful << " Gallon" << endl;

//     // Check conditions for attack mode
//     if (Fly.Speed > 2000 && Fly.FT > 10000 && Fly.Ful > 50)
//         cout << "The plane is in attack mode" << endl;
//     else
//         cout << "The plane is in a defensive position" << endl;
// }

// int main() {
//     // cin.ignore(); // Clear the input buffer before getline
//     askModel(); // Ask for model name
//     askSpeed(); // Ask for speed
//     askFT();    // Ask for height
//     askFul();   // Ask for fuel
//     display();  // Display the information

//     return 0;
// }
