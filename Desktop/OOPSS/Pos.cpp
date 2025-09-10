// #include <iostream>
// using namespace std;
 
// int main() {
    
//     int dailySale = 0;
//     int estimatedPrice = 0;
//     float percentage = 20.0;
//     int TotalPrice;
//     int USB_ports = 0;
//     int casee = 0;
//     int screen = 0;
//     int ProcessorPrice = 0;
//     int RAM = 0;
//     int storage = 0;
//     int stock_p3 = 1;
//     int stock_p5 = 2;
//     int stock_p7 = 3;
//     int RAM16GB = 2;
//     int RAM32GB = 3;
//     int _1TB = 3;
//     int _2TB = 4;
//     int _19I = 1;
//     int _23I = 2;
//     int miniTower = 2;
//     int midiTower = 2;
//     int _2p = 2;
//     int _4p = 4;
//     string choice1;
//     string choice2;
//     string choice3;
//     string choice4;
//     string choice5;
//     string choice6;
//     int choice;
//     char c;
//     bool exit = true;
//     bool exitProcessor = true;

//     while (exit == true) {

//         cout << "*****MENU*****" << endl;
//         cout << "1. For new cost estimation and order press 1" << endl;
//         cout << "2. For check daily summary press 2" << endl;
//         cout << "3. For stock visualization press 3" << endl;
//         cout << "4. For exit press 4" << endl;
//         cout << "Enter your choice" << endl;
//         cin >> choice;

//         if (choice == 1) {
//             exitProcessor = true; //reset

//             while (exitProcessor == true) {

//                 cout << "Select the components you want to select" << endl;
//                 cout << "In processors we have p3 / p5 / p7 and prices are 100 / 120 / 200 respectively" << endl;
//                 cout << "Enter the processor you want to purchase" << endl;
//                 cin >> choice1;

//                 if (choice1 == "p3") {

//                     if (stock_p3 >= 1) {
//                         cout << "You have successfully purchased p3" << endl;
//                         stock_p3--;
//                         ProcessorPrice = 100;
//                         exitProcessor = false;

//                     } else {
//                         cout << "Out of stock" << endl;
//                     }
//                 }

//                 else if (choice1 == "p5") {

//                     if (stock_p5 >= 1) {
//                         cout << "You have successfully purchased p5" << endl;
//                         stock_p5--;
//                         ProcessorPrice = 120;
//                         cout << "Your Processor's price is " << ProcessorPrice << endl;
//                         exitProcessor = false;

//                     } else {
//                         cout << "Out of stock" << endl;
//                     }
//                 }

//                 else if (choice1 == "p7") {

//                     if (stock_p7 >= 1) {
//                         cout << "You have successfully purchased p7" << endl;
//                         stock_p7--;
//                         ProcessorPrice = 200;
//                         cout << "Your Processor's price is " << ProcessorPrice << endl;
//                         exitProcessor = false;

//                     } else {
//                         cout << "Out of stock" << endl;
//                     }
//                 }

//                 else {
//                     cout << "You have selected wrong thing" << endl;
//                 }

//             }

//             exitProcessor = true;
//             while (exitProcessor == true) {
//             cout << "Select RAM" << endl;
//             cout << "In RAM we have 16 GB and 32GB of price 75 and 150 respectively" << endl;
//             cout << "Enter the RAM you want to purchase" << endl;
//             cin >> choice2;

//             if (choice2 == "16GB") {
//                 cout << "You have purchased 16 GB RAM" << endl;
//                 RAM16GB--;
//                 RAM = 75;
//                 exitProcessor = false;
//             }

//             else if (choice2 == "32GB") {
//                 cout << "You have purchased 32 GB RAM" << endl;
//                 RAM32GB--;
//                 RAM = 150;
//                 exitProcessor = false;
//             }

//             else {
//                 cout << "You have selected wrong thing" << endl;
//             }

//             cout << "Your RAM's price is " << RAM << endl;
//             }
            
//             exitProcessor = true;
//             while (exitProcessor == true) {
//             cout << "Select Storage" << endl;
//             cout << "In Storage we have 1TB and 2TB of price 50 and 100 respectively" << endl;
//             cout << "Enter the Storage you want to purchase" << endl;
//             cin >> choice3;

//             if (choice3 == "1TB") {
//                 cout << "You have purchased 1TB Storage" << endl;
//                 _1TB--;
//                 storage = 50;
//                 exitProcessor = false;
//             } 

//             else if (choice3 == "2TB") {
//                 cout << "You have purchased 2TB Storage" << endl;
//                 _2TB--;
//                 storage = 100;
//                 exitProcessor = false;
//             } 

//             else {
//                 cout << "You have selected wrong thing" << endl;
//             }

//             cout << "Your Storage price is " << storage << endl;
//             }   

//             exitProcessor = true;
//             while (exitProcessor == true) {
//             cout << "Select Screen" << endl;
//             cout << "In Screen we have 19 inches and 23 inches of price 65 and 120 respectively" << endl;
//             cout << "Enter the Screen you want to purchase" << endl;
//             cin >> choice4;

//             if (choice4 == "19I") {
//                 cout << "You have purchased 19 inches Screen" << endl;
//                 _19I--;
//                 screen = 65;
//                 exitProcessor = false;
//             } 

//             else if (choice4 == "23I") {
//                 cout << "You have purchased 23I Screen" << endl;
//                 _23I--;
//                 screen = 120;
//                 exitProcessor = false;
//             } 

//             else {
//                 cout << "You have selected wrong thing" << endl;
//             }

//             cout << "Your Screen's price is " << screen << endl;
//             }
            
//             exitProcessor = true;
//             while (exitProcessor == true) {
//             cout << "Select Case" << endl;
//             cout << "In Cases we have Mini Tower and Midi Tower of price 40 and 70 respectively" << endl;
//             cout << "Enter the Case you want to purchase" << endl;
//             cin.ignore();
//             getline(cin, choice5); //Why not working with it?
//             // cin >> choice5;

//             if (choice5 == "Mini Tower") {
//                 cout << "You have purchased Mini Tower Case" << endl;
//                 miniTower--;
//                 casee = 40;
//                 exitProcessor = false;
//             }

//             else if (choice5 == "Midi Tower") {
//                 cout << "You have purchased Midi Tower Case" << endl;
//                 midiTower--;
//                 casee = 70;
//                 exitProcessor = false;
//             } 

//             else {
//                 cout << "You have selected wrong thing" << endl;
//             }

//             cout << "Your Case price is " << casee << endl;
//             }

//             exitProcessor = true;
//             while (exitProcessor == true) {
//             cout << "Select USB ports" << endl;
//             cout << "In Screen we have 2 ports and 4 ports of price 10 and 20 respectively" << endl;
//             cout << "Enter the USB port you want to purchase" << endl;
//             cin >> choice6;

//             if (choice6 == "2p") {
//                 cout << "You have purchased 2 Ports" << endl;
//                 _2p--;
//                 USB_ports = 65;
//                 exitProcessor = false;
//             }

//             else if (choice6 == "4p") {
//                 cout << "You have purchased 4 Ports" << endl;
//                 _4p--;
//                 USB_ports = 120; 
//                 exitProcessor = false;       
//             }

//             else {
//                 cout << "You have selected wrong thing" << endl;
//             }

//             cout << "Your USB ports' price is " << USB_ports << endl;
//             }

//             cout << "*****TOTAL*****" << endl;
//             TotalPrice = ProcessorPrice + RAM + storage + screen + casee + USB_ports;
//             cout << "So the Total price is :- " << endl << TotalPrice << endl;
//             cout << "The price after Tax is :- " << endl;
//             cout << TotalPrice * (percentage / 100) << endl;
//             cout << "Your estimated cost is :- " << endl;
//             estimatedPrice = TotalPrice + (TotalPrice * (percentage / 100));
//             cout << estimatedPrice << endl;
//             dailySale = estimatedPrice + dailySale;

//         }

//         else if (choice == 2) {
//             cout << "The daily Sale is : " <<  dailySale << endl;
//         }

//         else if (choice == 3) {
//             // cout << "The remaining USB ports are : " << USB_ports << endl;
//             // cout << "The remaining Cases are : " << casee << endl;
//             // cout << "The remaining screens are : " << screen;
//             // cout << "The remaining Processors are : " << ProcessorPrice << endl;
//             // cout << "The remaining RAM are : " << RAM << endl;
//             // cout << "The remaining Storage are : " << storage << endl;
//             cout << "The remaining P3 are : " << stock_p3 << endl;
//             cout << "The remaining p5 are : " << stock_p5 << endl;
//             cout << "The remaining p7 are : " << stock_p7 << endl;
//             cout << "The remaining RAM 16GB are : " << RAM16GB << endl;
//             cout << "The remaining RAM 32GB are : " << RAM32GB << endl;
//             cout << "The remaining 1TB are : " << _1TB << endl;
//             cout << "The remaining 2TB are : " << _2TB << endl;
//             cout << "The remaining 19 Inches scree are : " << _19I << endl;
//             cout << "The remaining 23 Inches screen are : " << _23I << endl;
//             cout << "The remaining Mini Tower are : " << miniTower << endl;
//             cout << "The remaining Midi tower are : " << midiTower << endl;
//             cout << "The remaining 2p are : " << _2p << endl;
//             cout << "The remaining 4p are : " << _4p << endl;
//         }

//         else if (choice == 4) {
//             cout << "Exit" << endl;
//             exit = false;
//         }
//     }
//     return 0;
// }

