#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{
    public:

    Management(){
        mainMenu();
    }
};

class Details{
    public:

        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information(){
            cout << "\nEnter the customer ID: ";
            cin >> cId;
            cout << "\nEnter the name: ";
            cin >> name;
            cout << "\n Enter the age: ";
            cin >> age;
            cout << "\n Address: ";
            cin >> add;
            cout << "\n Gender: ";
            cin>>gender;
            cout << "Your details are saved with us\n"<<endl;
        }
};


int Details::cId;
string Details::name;
string Details::gender;

class registration{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights(){
        string flightN[] = {"Dubai","Canada","UK","USA","Australia","Europe","South Africa","Argentina"};

        for(int i=0;i<8;i++){
            cout << (i+1) << ".flight to" << " " << flightN[i] << endl;
        }

        cout << "\n Welcome to the Airlines!" <<endl;
        cout << "Please select the flight you want to book by pressing country number: ";
        cin >> choice;

        switch(choice){
            case 1 : {
                cout << "______________Welcome to Dubai Emirates______________" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. DUB - 498" <<endl;
                cout << "\t08-01-2024  08:00AM 10hrs Rs. 18000" <<endl; 
                cout << "2. DUB - 698" <<endl;
                cout << "\t08-01-2024  07:00PM 12hrs Rs. 15000" <<endl; 
                cout << "3. DUB - 598" <<endl;
                cout << "\t09-01-2024  08:00AM 10hrs Rs. 16000" <<endl; 
                cout << "4. DUB - 398" <<endl;
                cout << "\t09-01-2024  07:00PM 12hrs Rs. 13000" <<endl; 
                cout << "5. DUB - 798" <<endl;
                cout << "\t10-01-2024  08:00AM 10hrs Rs. 20000" <<endl; 
                cout << "6. DUB - 998" <<endl;
                cout << "\t10-01-2024  07:00PM 12hrs Rs. 12000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=18000;
                    cout << "\n You have successfully booked the flight DUB - 498" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=15000;
                    cout << "\n You have successfully booked the flight DUB - 698" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=16000;
                    cout << "\n You have successfully booked the flight DUB - 598" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=13000;
                    cout << "\n You have successfully booked the flight DUB - 398" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==5){
                    charges=20000;
                    cout << "\n You have successfully booked the flight DUB - 798" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==6){
                    charges=12000;
                    cout << "\n You have successfully booked the flight DUB - 998" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }
            case 2: {
                cout << "______________Welcome to Canadian Airlines______________" << endl;

                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. CA - 108" <<endl;
                cout << "\t08-01-2024  09:00AM 10hrs Rs. 38000" <<endl; 
                cout << "2. CA - 608" <<endl;
                cout << "\t08-01-2024  17:00PM 12hrs Rs. 25000" <<endl; 
                cout << "3. CA - 508" <<endl;
                cout << "\t09-01-2024  09:00AM 10hrs Rs. 36000" <<endl; 
                cout << "4. CA - 408" <<endl;
                cout << "\t09-01-2024  17:00PM 12hrs Rs. 23000" <<endl; 
                cout << "5. CA - 708" <<endl;
                cout << "\t10-01-2024  09:00AM 10hrs Rs. 20000" <<endl; 
                cout << "6. CA - 408" <<endl;
                cout << "\t10-01-2024  17:00PM 12hrs Rs. 32000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=38000;
                    cout << "\n You have successfully booked the flight CA - 108" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=25000;
                    cout << "\n You have successfully booked the flight CA - 608" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=36000;
                    cout << "\n You have successfully booked the flight CA - 508" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=23000;
                    cout << "\n You have successfully booked the flight CA - 408" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==5){
                    charges=20000;
                    cout << "\n You have successfully booked the flight CA - 798" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==6){
                    charges=32000;
                    cout << "\n You have successfully booked the flight CA - 408" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }
            case 3: {
                cout << "______________Welcome to UK Airways______________" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. UK - 418" <<endl;
                cout << "\t08-01-2024  05:00AM 10hrs Rs. 48000" <<endl; 
                cout << "2. UK - 618" <<endl;
                cout << "\t08-01-2024  11:00PM 12hrs Rs. 35000" <<endl; 
                cout << "3. UK - 518" <<endl;
                cout << "\t09-01-2024  05:00AM 10hrs Rs. 46000" <<endl; 
                cout << "4. UK - 418" <<endl;
                cout << "\t09-01-2024  11:00PM 12hrs Rs. 33000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=48000;
                    cout << "\n You have successfully booked the flight UK - 418" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=35000;
                    cout << "\n You have successfully booked the flight UK - 618" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=46000;
                    cout << "\n You have successfully booked the flight UK - 518" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=33000;
                    cout << "\n You have successfully booked the flight UK - 418" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }
            case 4:{
                cout << "______________Welcome to USA Airways______________" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. USA - 497" <<endl;
                cout << "\t08-01-2024  07:00AM 10hrs Rs. 58000" <<endl; 
                cout << "2. USA - 697" <<endl;
                cout << "\t08-01-2024  10:00PM 12hrs Rs. 45000" <<endl; 
                cout << "3. USA - 597" <<endl;
                cout << "\t09-01-2024  07:00AM 10hrs Rs. 46000" <<endl; 
                cout << "4. USA - 497" <<endl;
                cout << "\t09-01-2024  10:00PM 12hrs Rs. 33000" <<endl; 
                cout << "5. USA - 797" <<endl;
                cout << "\t10-01-2024  07:00AM 10hrs Rs. 30000" <<endl; 
                cout << "6. USA - 497" <<endl;
                cout << "\t10-01-2024  10:00PM 12hrs Rs. 32000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=58000;
                    cout << "\n You have successfully booked the flight USA - 497" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=45000;
                    cout << "\n You have successfully booked the flight USA - 697" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=46000;
                    cout << "\n You have successfully booked the flight USA - 597" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=33000;
                    cout << "\n You have successfully booked the flight USA - 497" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==5){
                    charges=30000;
                    cout << "\n You have successfully booked the flight USA - 797" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==6){
                    charges=32000;
                    cout << "\n You have successfully booked the flight USA - 497" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }
            case 5 :{
                cout << "______________Welcome to Australian Airlines______________" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. AUS - 495" <<endl;
                cout << "\t08-01-2024  04:00AM 10hrs Rs. 48000" <<endl; 
                cout << "2. AUS - 695" <<endl;
                cout << "\t08-01-2024  16:00PM 12hrs Rs. 35000" <<endl; 
                cout << "3. AUS - 595" <<endl;
                cout << "\t09-01-2024  04:00AM 10hrs Rs. 36000" <<endl; 
                cout << "4. AUS - 495" <<endl;
                cout << "\t09-01-2024  16:00PM 12hrs Rs. 43000" <<endl; 
                cout << "5. AUS - 795" <<endl;
                cout << "\t10-01-2024  04:00AM 10hrs Rs. 40000" <<endl; 
                cout << "6. AUS - 495" <<endl;
                cout << "\t10-01-2024  16:00PM 12hrs Rs. 32000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=48000;
                    cout << "\n You have successfully booked the flight AUS - 495" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=35000;
                    cout << "\n You have successfully booked the flight AUS - 695" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=36000;
                    cout << "\n You have successfully booked the flight AUS - 595" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=43000;
                    cout << "\n You have successfully booked the flight AUS - 495" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==5){
                    charges=40000;
                    cout << "\n You have successfully booked the flight AUS - 795" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==6){
                    charges=32000;
                    cout << "\n You have successfully booked the flight AUS - 495" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }
            case 6 : {
                cout << "______________Welcome to European Airlines______________" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. EU - 448" <<endl;
                cout << "\t08-01-2024  06:00AM 10hrs Rs. 38000" <<endl; 
                cout << "2. EU - 648" <<endl;
                cout << "\t08-01-2024  19:00PM 12hrs Rs. 35000" <<endl; 
                cout << "3. EU - 548" <<endl;
                cout << "\t09-01-2024  06:00AM 10hrs Rs. 36000" <<endl; 
                cout << "4. EU - 448" <<endl;
                cout << "\t09-01-2024  19:00PM 12hrs Rs. 33000" <<endl; 
                cout << "5. EU - 748" <<endl;
                cout << "\t10-01-2024  06:00AM 10hrs Rs. 30000" <<endl; 
                cout << "6. EU - 448" <<endl;
                cout << "\t10-01-2024  19:00PM 12hrs Rs. 32000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=38000;
                    cout << "\n You have successfully booked the flight EU - 448" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=35000;
                    cout << "\n You have successfully booked the flight EU - 648" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=36000;
                    cout << "\n You have successfully booked the flight EU - 548" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=33000;
                    cout << "\n You have successfully booked the flight EU - 448" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==5){
                    charges=30000;
                    cout << "\n You have successfully booked the flight EU - 748" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==6){
                    charges=32000;
                    cout << "\n You have successfully booked the flight EU - 448" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            
            }
            case 7: {
                cout << "______________Welcome to South African Airways______________" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. SAA - 493" <<endl;
                cout << "\t08-01-2024  02:00AM 10hrs Rs. 28000" <<endl; 
                cout << "2. SAA - 693" <<endl;
                cout << "\t08-01-2024  14:00PM 12hrs Rs. 25000" <<endl; 
                cout << "3. SAA - 593" <<endl;
                cout << "\t09-01-2024  02:00AM 10hrs Rs. 26000" <<endl; 
                cout << "4. SAA - 493" <<endl;
                cout << "\t09-01-2024  14:00PM 12hrs Rs. 23000" <<endl; 
                cout << "5. SAA - 793" <<endl;
                cout << "\t10-01-2024  02:00AM 10hrs Rs. 20000" <<endl; 
                cout << "6. SAA - 493" <<endl;
                cout << "\t10-01-2024  14:00PM 12hrs Rs. 22000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=28000;
                    cout << "\n You have successfully booked the flight SAA - 493" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=25000;
                    cout << "\n You have successfully booked the flight SAA - 693" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=26000;
                    cout << "\n You have successfully booked the flight SAA - 593" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=23000;
                    cout << "\n You have successfully booked the flight SAA - 493" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==5){
                    charges=20000;
                    cout << "\n You have successfully booked the flight SAA - 793" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==6){
                    charges=22000;
                    cout << "\n You have successfully booked the flight SAA - 493" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }
            case 8: {
                cout << "______________Welcome to Aerolineas Argentinas______________" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                cout << "Following are the flights \n" << endl;

                cout << "1. ARG - 438" <<endl;
                cout << "\t08-01-2024  08:00AM 10hrs Rs. 38000" <<endl; 
                cout << "2. ARG - 638" <<endl;
                cout << "\t08-01-2024  07:00PM 12hrs Rs. 35000" <<endl; 
                cout << "3. ARG - 538" <<endl;
                cout << "\t09-01-2024  08:00AM 10hrs Rs. 36000" <<endl; 
                cout << "4. ARG - 438" <<endl;
                cout << "\t09-01-2024  07:00PM 12hrs Rs. 43000" <<endl; 
                cout << "5. ARG - 738" <<endl;
                cout << "\t10-01-2024  08:00AM 10hrs Rs. 40000" <<endl; 
                cout << "6. ARG - 438" <<endl;
                cout << "\t10-01-2024  07:00PM 12hrs Rs. 42000" <<endl; 

                cout << "\nSelect the flight number you want to book :";
                cin >> choice1;
                if(choice1==1){
                    charges=38000;
                    cout << "\n You have successfully booked the flight ARG - 438" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==2){
                    charges=35000;
                    cout << "\n You have successfully booked the flight ARG - 638" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==3){
                    charges=36000;
                    cout << "\n You have successfully booked the flight ARG - 538" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==4){
                    charges=43000;
                    cout << "\n You have successfully booked the flight ARG - 438" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==5){
                    charges=40000;
                    cout << "\n You have successfully booked the flight ARG - 738" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else if(choice==6){
                    charges=42000;
                    cout << "\n You have successfully booked the flight ARG - 438" << endl;
                    cout << "You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout << "\nInvalid choice, shifting to the previous menu"<<endl;
                    flights();
                }
                cout <<"Press any key to go back to the main menu:" << endl;
                cin >> back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
            }
            default : {
                cout << "\nInvalid choice, shifting to the main menu !"<<endl;
                mainMenu();
                break;
            }
        }
    }
};
    //         }
        
    // }
// one ; is missing

float registration::charges;
int registration::choice;

class ticket : public registration, Details{
    public:
    void Bill(){
        string destination = "";
        ofstream outf("records.txt");
        {
            outf<<"___________________Kingfisher Airlines_________________"<<endl;
            outf<<"______________________Ticket____________________"<<endl;
            outf<<"________________________________________________"<<endl;

            outf<<"Customer ID: "<<Details::cId<<endl;
            outf<<"Customer Name: "<<Details::name<<endl;
            outf<<"Customer Gender: "<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(registration::choice==1){
                destination="Dubai";
            }
            else if(registration::choice==2){
                destination="Canada";
            }
            else if(registration::choice==3){
                destination="UK";
            }
            else if(registration::choice==4){
                destination="USA";
            }
            else if(registration::choice==5){
                destination="Australia";
            }
            else if(registration::choice==6){
                destination="Europe";
            }
            else if(registration::choice==7){
                destination="South Africa";
            }
            else if(registration::choice==8){
                destination="Argentina";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost : \t\t" << registration::charges << endl;
        }
        outf.close();
    }

    //to display the receipt 
    void disBill(){
        ifstream ifs("records.txt");{
            if(!ifs){
                cout << "File error!" << endl;
            }
            while(!ifs.eof()){
                ifs.getline(arr,100);
                cout <<arr<<endl;
            }
        }ifs.close();
    }
};

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout << "____________________***********************_____________________________" << endl;
    cout << "\t             Kingfisher Airlines \n" << endl;
    cout << "\t____________________Main Menu____________________"<<endl;

    cout << "\t_________________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t\t " << endl;

    cout << "\t|\t Press 1 to add the Customer Details  \t|"<<endl;
    cout << "\t|\t Press 2 for Flight registration      \t|"<<endl;
    cout << "\t|\t Press 3 for Ticket and Charges       \t|"<<endl;
    cout << "\t|\t Press 4 to exit                      \t|"<<endl;
    cout << "\t\t\t\t\t\t\t\t " << endl;
    cout << "\t_________________________________________________" << endl;


    cout<<"Enter your choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice){
        case 1: {
            cout <<"___________Customers_____________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main Menu";
            cin >> back;

            if(back==1){
                mainMenu();
            }else{
                mainMenu();
            }
            break;
        }
        case 2: {
            cout<<"_________Book a flight using this system__________\n"<<endl;
            r.flights();
            break;
        }
        case 3 : {
            cout<<"_________Ticket and Charges__________\n"<<endl;
            t.Bill();

            cout << "Your ticket is printed, you can collect it \n"<<endl;
            cout << "press 1 to display yout ticket";

            cin >> back;
                if(back==1){
                    t.disBill();
                    cout<<"Press any key to go back to Main Menu: ";
                    cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                }
                else{
                    mainMenu();
                }
                break;
        }
        case 4 : {
            cout<<"\n\n_________Thank you__________\n"<<endl;
            break;
        }
        default : {
            cout << "Invalid Input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }



}

int main(){
    Management Mobj;
    return 0;
}