/*
=========================================================================
*  Project Name: My Project(National Id Card System)
*  File Name   : nationalidCardSystem.cpp
*  Time        : 11:10:31 PM
*  Created on  : November, 2014
*  This source code is copyright protected under GNU PUBLIC LICENSE
=========================================================================
*/
#include<iostream>
#include<sstream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iomanip>
#include<conio.h>

using namespace std;

class address
{
private:
    string bordingNumber;
    string village;
    string unionCouncil;
    int wordNumber;
    string postOffice;
    int postCode;
    string policeStation;
    string district;

public:
    address() : bordingNumber("Unknown"), village("Unknown"), unionCouncil("Unknown"), \
        wordNumber(0), postOffice("Unknown"), postCode(), policeStation("Unknown"), district("Unknown") {}
    void setbordingNumber(string bording)
    {
        bordingNumber = bording;
    }
    void setvillage(string Village)
    {
        village = Village;
    }
    void setunioncouncil(string unioncouncil)
    {
        unionCouncil = unioncouncil;
    }
    void setwordNumber(int word)
    {
        wordNumber = word;
    }
    void setpostoffice(string post)
    {
        postOffice = post;
    }
    void setpostcode(int postcode)
    {
        postCode = postcode;
    }
    void setpolicestation(string police)
    {
        policeStation = police;
    }
    void setdistrict(string dist)
    {
        district = dist;
    }
    string getbordingNumber()
    {
        return bordingNumber;
    }
    string getvillage()
    {
        return village;
    }
    string getunioncouncil()
    {
        return unionCouncil;
    }
    int getwordNumber()
    {
        return wordNumber;
    }
    string getpostoffice()
    {
        return postOffice;
    }
    int getpostcode()
    {
        return postCode;
    }
    string getpolicestation()
    {
        return policeStation;
    }
    string getdistrict()
    {
        return district;
    }
    void inputAdress()
    {
        fflush(stdin);
        cout << "   House Number/Flat Number/Road Number  : ";
        getline(cin, bordingNumber);
        fflush(stdin);
        cout << "   Town/City/Village/Area                : ";
        getline(cin, village);
        fflush(stdin);
        cout << "   Union Council/City Corporation        : ";
        getline(cin, unionCouncil);
        fflush(stdin);
        cout << "   Word Number                           : ";
        cin >> wordNumber;
        fflush(stdin);
        cout << "   Post Office                           : ";
        getline(cin, postOffice);
        fflush(stdin);
        cout << "   Post Code                             : ";
        cin >> postCode;
        fflush(stdin);
        cout << "   Police Station                        : ";
        getline(cin, policeStation);
        fflush(stdin);
        cout << "   District                              : ";
        getline(cin, district);
    }
    friend ostream& operator << (ostream &out, address &Address)
    {
        out << "   House Number/Flat Number/Road Number  : " << Address.bordingNumber << endl
            << "   Town/City/Village/Area                : " << Address.village << endl
            << "   Union Council/City Corporation        : " << Address.unionCouncil << endl
            << "   Word Number                           : " << Address.wordNumber << endl
            << "   Post Office                           : " << Address.postOffice << endl
            << "   Post Code                             : " << Address.postCode << endl
            << "   Police Station                        : " << Address.policeStation << endl
            << "   District                              : " << Address.district << endl << endl;
        return out;
    }

    address operator = (address source)
    {
        bordingNumber = source.bordingNumber;
        village = source.village;
        unionCouncil = source.unionCouncil;
        wordNumber = source.wordNumber;
        postOffice = source.postOffice;
        postCode = source.postCode;
        policeStation = source.policeStation;
        district = source.district;
        return *this;
    }
    ~address() {}
};

class CITIZEN
{
// Attributes of the CITIZEN Class ( The local variables of CITIZEN class
protected:
    string CINnumber;
    string name;
    string fatherName;
    string gender;
    string motherName;
    string husbandName;       // For only married Women;
    string spouseName;        // Only for married Man;
    string matarialStatus;
    string dateofBirth;
    string profession;
    string contactNumber;
    float salary;
    string educationLevel;
    address present, parmanent;
    CITIZEN* nextCitizen;
public:
    // 	All Function declarations  of CITIZEN class
    CITIZEN() : CINnumber("##############"), name("Unknown"), fatherName("Unknown"), motherName("Unknown"), \
        husbandName("Unknown"), spouseName("Unknown"), matarialStatus("Unknown"), \
        dateofBirth("##/##/####"), profession("Unknown"), contactNumber("##########"), \
        salary(0.00), educationLevel("Unknown"), present(), parmanent()  {}
    ~CITIZEN()
    {
        present.~address();
        parmanent.~address();
    }
    void setNext(CITIZEN* next)
    {
        nextCitizen = next;
    }
    CITIZEN* getnext()
    {
        return nextCitizen;
    }
    void setCINnumber(string id)
    {
        CINnumber = id;
    }
    void setname(string Name)
    {
        name = Name;
    }
    void setfathername(string FatherName)
    {
        fatherName = FatherName;
    }
    void setmothername(string MotherName)
    {
        motherName = MotherName;
    }
    void setmobileNumber(string NUMBER)
    {
        contactNumber = NUMBER;
    }
    void setprofession(string work)
    {
        profession = work;
    }
    void setSalary(float pay)
    {
        salary = pay;
    }
    void setpresentaddress()
    {
        present.inputAdress();
    }
    void setparmanantaddress()
    {
        parmanent.inputAdress();
    }
    string getCINnumber()
    {
        return CINnumber;
    }
    string getName()
    {
        return name;
    }
    string getfathername()
    {
        return fatherName;
    }
    string getmothername()
    {
        return motherName;
    }
    string gethusbandname()
    {
        return husbandName;
    }
    string getdateofBirth()
    {
        return dateofBirth;
    }
    void setdateofBirth(string birth)
    {
        dateofBirth = birth;
    }
    string getprofession()
    {
        return profession;
    }
    string getmobileNumber()
    {
        return contactNumber;
    }
    string getvillage()
    {
        return present.getvillage();
    }
    string getpostoffice()
    {
        return present.getpostoffice();
    }
    string getpolicestation()
    {
        return present.getpolicestation();
    }
    string getdistrict()
    {
        return present.getdistrict();
    }
    void inputCitizenInformation();
    void showCitizenInformation();
    void deleteCitizenInformation();
    void generateCINnumbernumber()
    {
        // This concate Date of Birth with order (year + month + date)
        string tempmonth = getdateofBirth();
        string tempdate = getdateofBirth();
        string tempyear = getdateofBirth();
        tempdate.erase(2, tempdate.size());
        tempmonth.erase(5, 10);
        tempmonth.erase(0, 3);
        tempyear.erase(0, 6);
        string tempbirth = tempyear + tempmonth + tempdate;
        // This Blocks made all number data type to string
        stringstream ss;
        ss << present.getpostcode() << endl;
        string pcode = ss.str();
        CINnumber = (tempbirth + pcode);

    }
    void showCitizenInfo()
    {
        cout << "\n*-------------------------------------------" << endl
             << "*          Citizen Information             *" << endl
             << "*------------------------------------------*" << endl << endl;

        cout << " Citizen Identification Number    :" << CINnumber << endl
             << " Name                           : " << name << endl
             << " Father's Name                  : " << fatherName << endl
             << " Mobile Number                  : " << contactNumber << endl
             << " Profession                     : " << profession << endl << endl;
    }
    friend ostream& operator << (ostream &os, CITIZEN &people)
    {
        os << "\n*-------------------------------------------" << endl
           << "*          Citizen Information             *" << endl
           << "*------------------------------------------*" << endl << endl;

        os << " Citizen Identification Number    :" << people.CINnumber << endl
           << " Name                           : " << people.name << endl
           << " Father's Name                  : " << people.fatherName << endl
           << " Mobile Number                  : " << people.contactNumber << endl
           << " Profession                     : " << people.profession << endl << endl;
        return os;
    }

};
// Functions definitions of CITIZEN class

void CITIZEN::inputCitizenInformation()
{
    cout << endl << endl;
    cout << "\n *---------------------------------------------------------------*" << endl
         << " *                 Information collection Form                   *" << endl
         << " *---------------------------------------------------------------*" << endl << endl;
    fflush(stdin);
    cout << " Your Name                               : ";
    getline(cin, name);
    cout << " Gender: " << endl;
    int choose;
here2:
    cout << "   1. Male" << "   2. Female" << "   3. Other" << endl << "   Choice: ";
    fflush(stdin);
    cin >> choose;
    switch (choose)
    {
    case 1:
        gender = "Male";
        break;
    case 2:
        gender = "Female";
        break;
    case 3:
        gender = "Other";
        break;
    default:
        cout << " Enter Correct number !!!";
        goto here2;
    }

    fflush(stdin);
    cout << " Father's Name                           : ";
    getline(cin, fatherName);
    fflush(stdin);
    cout << " Mother's Name                           : ";
    getline(cin, motherName);
    fflush(stdin);
    cout << " Date of Birth               [DD/MM/YYYY]: ";
    cin >> dateofBirth;
    cout << " Parmanant Address : " << endl << endl;
    fflush(stdin);
    parmanent.inputAdress();
    while (1)
    {
        cout << "Are your Parmanant Address and Present Address Same? [y/n] ";
        string choice;
        fflush(stdin);
        cin >> choice;
        if (choice == "y")
        {
            present = parmanent;
            break;
        }
        else if (choice == "n")
        {
            cout << " Present Address : " << endl << endl;
            present.inputAdress();
            break;
        }
        else
        {
            cout << " Enter Correct Character !!!";
        }
    }
    fflush(stdin);
    cout << " Mobile Number                            : ";
    cin >> contactNumber;
    fflush(stdin);
    cout << " Highest Education Level                  : ";
    getline(cin, educationLevel);
    fflush(stdin);
    cout << " Profession                               : ";
    getline(cin, profession);
    if (profession == "student" || profession == "Student")
    {
        salary = 0.00;
    }
    else if (profession == "unemployed" || profession == "Unemployed")
    {
        salary = 0.00;
    }
    else
    {
        fflush(stdin);
        cout << " Please tell us your salary !!!" << endl << " Salary                          :";
        cin >> salary;
    }
    while (1)
    {
        cout << " Matarial Status: " << endl << "   1.Married" << "   2.Single" << endl << "Choose: ";
        int decision;
        fflush(stdin);
        cin >> decision;
        if (decision == 1)
        {
            if (gender == "Male")
            {
                matarialStatus = "Married";
                fflush(stdin);
                cout << "   Spouse Name                           : ";
                getline(cin, spouseName);
                break;
            }
            else if (gender == "Female")
            {
                matarialStatus = "Married";
                fflush(stdin);
                cout << "   Husband Name                          : ";
                getline(cin, husbandName);
                break;
            }
            break;
        }
        else if (decision == 2)
        {
            matarialStatus = "Single";
            break;
        }
        else
            cout << " Choose Correct digit !!" << endl;
    }
    generateCINnumbernumber();
}

void CITIZEN::showCitizenInformation()

{
    cout << endl << endl;
    cout << "\n *---------------------------------------------------------------*" << endl
         << " *                      Citizen Information                      *" << endl
         << " *---------------------------------------------------------------*" << endl << endl;


    cout << "National Id Card Number             : " << CINnumber << endl;
    cout << " Name                               : " << name << endl
         << " Gender                             : " << gender << endl
         << " Father's Name                      : " << fatherName << endl
         << " Mother's Name                      : " << motherName << endl;

    if (gender == "Male" && matarialStatus == "Married")
    {
        cout << " Spouse Name                       : " << spouseName << endl;
    }
    else if (gender == "Female" && matarialStatus == "Married")
    {
        cout << " Husband Name                      : " << husbandName << endl;
    }
    cout << " Date of Birth                      : " << dateofBirth << endl;
    cout << " Parmanant Address: " << endl << endl;
    cout << parmanent;
    cout << " Present Address: " << endl << endl;
    cout << present;
    cout << " Educational Background                  : " << educationLevel << endl
         << " Mobile Number                           : " << contactNumber << endl
         << " Profession                              : " << profession << endl
         << " Salary                                  : " << salary << endl
         << " Matarial Status                         : " << matarialStatus << endl;
}

void CITIZEN::deleteCitizenInformation()
{
    setdateofBirth("");
    setname("");
    setfathername("");
    setmothername("");
    setCINnumber("");
    setmobileNumber("");
    setprofession("");
    setSalary(NULL);
    present.setbordingNumber("");
    present.setdistrict("");
    present.setpolicestation("");
    present.setpostcode('\0');
    present.setpostoffice("");
    present.setunioncouncil("");
    present.setwordNumber(NULL);
    present.setvillage("");
    parmanent.setbordingNumber("");
    parmanent.setdistrict("");
    parmanent.setpolicestation("");
    parmanent.setpostcode(NULL);
    parmanent.setpostoffice("");
    parmanent.setunioncouncil("");
    parmanent.setwordNumber(NULL);
    parmanent.setvillage("");
    //setNext(NULL);
}

class citizenRecordCenter
{
private:
    CITIZEN* first;
public:
    citizenRecordCenter()
    {
        first = NULL;
    }
    void addCitizen()
    {
        CITIZEN* newCitizen = new CITIZEN;
        newCitizen -> inputCitizenInformation();
        newCitizen->setNext(first);
        first = newCitizen;
    }
    void showCitizen()
    {
        CITIZEN* current = first;
        while (current != NULL)
        {
            if (current->getCINnumber() != "")
            {
                current->showCitizenInformation();
            }
            current = current->getnext();
        }
    }
    void serachCitizenByCINnumber(string* CNumber)
    {
        CITIZEN* current = first;
        int c = 0;
        while (current != NULL)
        {
            string tempCNumber = current->getCINnumber();
            if (*CNumber == tempCNumber)
            {
                current->showCitizenInformation();
                c++;
            }
            current = current->getnext();
        }
        if (c == 0)
        {
            cout << "Their is no citizen with this Name !!" << endl;
        }
    }
    void updateCitizenInformation(string* CNumber)
    {
        CITIZEN* current = first;
        int c = 0;
        while (current != NULL)
        {
            string tempCNumber = current->getCINnumber();
            if (*CNumber == tempCNumber)
            {
                int choose;
                cout << "Did you want to update ?" << endl
                     << "   1.All information" << endl
                     << "   2.Specific information" << endl << endl;
                cout << "What you want ? ";
                fflush(stdin);
                cin >> choose;
                switch (choose)
                {
                case 1:
                {
                    current->inputCitizenInformation();
                    break;
                }
                case 2:
                {
                    char ans;
                    do
                    {
                        cout << "Which one you want to update ? " << endl
                             << "   1.Name" << endl
                             << "   2.Present Address" << endl
                             << "   3.Parmanent Address" << endl
                             << "   4.Date of Birth" << endl
                             << "   5.Father's Name" << endl
                             << "   6.Mother's Name" << endl
                             << "   7.Mobile Number" << endl
                             << "   8.Profession" << endl
                             << "   9.Salary" << endl
                             << "  10.Cancel" << endl << endl;
                        int updatetry;
                        cout << "Which One ? ";
                        fflush(stdin);
                        cin >> updatetry;
                        switch (updatetry)
                        {
                        case 1:
                        {
                            string tempName;
                            cout << "Enter Name : ";
                            fflush(stdin);
                            getline(cin, tempName);
                            current->setname(tempName);
                            break;
                        }
                        case 2:
                        {
                            cout << "Enter Present Address : " << endl;
                            current->setpresentaddress();
                            break;
                        }
                        case 3:
                        {
                            cout << "Enter Parmanent Address : " << endl;
                            current->setparmanantaddress();
                            break;
                        }
                        case 4:
                        {
                            string tempbirthday;
                            cout << "Enter Date of Birth  [DD/MM/YYYY] : ";
                            fflush(stdin);
                            getline(cin, tempbirthday);
                            current->setdateofBirth(tempbirthday);
                            current->generateCINnumbernumber();
                            break;
                        }
                        case 5:
                        {
                            string tempfathername;
                            cout << "Enter father's name : ";
                            fflush(stdin);
                            getline(cin, tempfathername);
                            current->setfathername(tempfathername);
                            break;
                        }
                        case 6:
                        {
                            string tempmothername;
                            cout << "Enter mother's name : ";
                            fflush(stdin);
                            getline(cin, tempmothername);
                            current->setfathername(tempmothername);
                            break;
                        }
                        case 7:
                        {
                            string tempmobileNumber;
                            cout << "Enter Mobile number : ";
                            fflush(stdin);
                            cin >> tempmobileNumber;
                            current->setmobileNumber(tempmobileNumber);
                            break;
                        }
                        case 8:
                        {
                            string tempprofession;
                            cout << "Enter profession : ";
                            fflush(stdin);
                            getline(cin, tempprofession);
                            current->setprofession(tempprofession);
                            break;
                        }
                        case 9:
                        {
                            float tempsalary;
                            cout << "Enter Salary : ";
                            fflush(stdin);
                            cin >> tempsalary;
                            current->setSalary(tempsalary);
                            break;
                        }
                        case 10:
                        {
                            break;
                        }
                        default:
                            cout << "You entered a wrong number!!\n" << endl;
                            break;
                        }
                        cout << "Do you want to update more thing ? [y/n] ";
                        fflush(stdin);
                        cin >> ans;
                    }
                    while (ans == 'y');
                    break;
                }
                default:
                    cout << "You entered a wrong option!!\n" << endl;
                    break;
                }
                c++;
            }
            current = current->getnext();
        }
        if (c == 0)
        {
            cout << "\n There is no Citizen With this CIN number !!" << endl;
        }
    }
    void deletecitizeninformation(string* CNumber)
    {
        CITIZEN* current = first;
        while (current != NULL)
        {
            string tempCNumber = current->getCINnumber();
            if (*CNumber == tempCNumber)
            {
                current->deleteCitizenInformation();
                cout << "All Data removed !!" << endl;
                break;
            }
            else
            {
                cout << "Their is no citizen with this CIN number !!" << endl;
            }
            current = current->getnext();
        }
    }

    void findCitizenByname(string* tempname)
    {
        CITIZEN* current = first;
        int c=0;
        while (current != NULL)
        {
            string Name = current->getName();
            if (*tempname == Name)
            {
                current->showCitizenInfo();
                c++;
            }
            current = current->getnext();
        }
        if (c == 0)
        {
            cout << "Their is no citizen with this Name !!" << endl;
        }
    }
    void findCitizenBywork(string* tempProfession)
    {
        CITIZEN* current = first;
        int c = 0;
        while (current != NULL)
        {
            string profession = current->getprofession();
            if (*tempProfession == profession)
            {
                current->showCitizenInfo();
                c++;
            }
            current = current->getnext();
        }
        if (c == 0)
        {
            cout << "Their is no citizen with this Profession !!" << endl;
        }
    }
    void findCitizenByCINnumber(string* CNumber)
    {
        CITIZEN* current = first;
        int c = 0;
        while (current != NULL)
        {
            string tempCNumber = current->getCINnumber();
            if (*CNumber == tempCNumber)
            {
                current->showCitizenInfo();
                c++;
            }
            current = current->getnext();
        }
        if (c == 0)
        {
            cout << "Their is no citizen with this CIN number !!" << endl;
        }
    }
    void findCitizenBymobileNumber(string* MobileNumber)
    {
        CITIZEN* current = first;
        int c = 0;
        while (current != NULL)
        {
            string tempMobileNumber = current->getmobileNumber();
            if (*MobileNumber == tempMobileNumber)
            {
                current->showCitizenInfo();
                c++;
            }
            current = current->getnext();
        }
        if (c == 0)
        {
            cout << "Their is no citizen with this Name !!" << endl;
        }
    }
    void findCitizenByAddress(int whatplace, string* place)
    {
        switch (whatplace)
        {
        case 1:
        {
            CITIZEN* current = first;
            int c = 0;
            while (current != NULL)
            {
                string tempplace = current->getvillage();
                if (*place == tempplace)
                {
                    current->showCitizenInfo();
                    c++;
                }
                current = current->getnext();
            }
            if (c == 0)
            {
                cout << "Their is no data about this village in our Database !!" << endl;
            }
            break;
        }
        case 2:
        {
            CITIZEN* current = first;
            int c = 0;
            while (current != NULL)
            {
                string tempplace = current->getpostoffice();
                if (*place == tempplace)
                {
                    current->showCitizenInfo();
                    c++;
                }
                current = current->getnext();
            }
            if (c == 0)
            {
                cout << "Their is no data about this post office in our Database !!" << endl;
            }
            break;
        }
        case 3:
        {
            CITIZEN* current = first;
            int c = 0;
            while (current != NULL)
            {
                string tempplace = current->getpolicestation();
                if (*place == tempplace)
                {
                    current->showCitizenInfo();
                    c++;
                }
                current = current->getnext();
            }
            if (c == 0)
            {
                cout << "Their is no data about this police station in our Database !!" << endl;
            }
            break;
        }
        case 4:
        {
            CITIZEN* current = first;
            int c = 0;
            while (current != NULL)
            {
                string tempplace = current->getdistrict();
                if (*place == tempplace)
                {
                    current->showCitizenInfo();
                    c++;
                }
                current = current->getnext();
            }
            if (c == 0)
            {
                cout << "Their is no data about this village in our Database !!" << endl;
            }
            break;
        }
        default:
        {
            cout << "Please enter a correct option !!" << endl << endl;
            break;
        }
        }
    }

};

class menu
{
private:
    citizenRecordCenter heart;
    string password;
public:
    string inputpassword()
    {
        string pass = "";
        char ch;
        ch = _getch();
        while (ch != 13) //character 13 is enter
        {
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        return pass;
    }
    void option11()                // Add new Citizen
    {
        char mytry;
        do
        {
            heart.addCitizen();
            cout << "Do you want to add a citizen again [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }
    void option12()               // Show all Citizen
    {
        heart.showCitizen();
    }
    void option13()                          // update Citizen information
    {
        string tempCINnumber;
        char mytry;
        do
        {
            cout << "\nEnter CIN number of the Citizen you want to update : ";
            cin >> tempCINnumber;
            tempCINnumber += '\n';
            heart.updateCitizenInformation(&tempCINnumber);
            cout << "Do you want to update another citizen information [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }
    void option14()                          // Search Citizen by there CINnumber;
    {
        string tempCINnumber;
        char mytry;
        do
        {
            cout << "\nEnter CIN number of the Citizen : ";
            fflush(stdin);
            cin >> tempCINnumber;
            tempCINnumber += '\n';
            heart.serachCitizenByCINnumber(&tempCINnumber);
            cout << "Do you want to see another citizen information [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }
    void option15(string* password)               // Delete Citizen Information
    {
        string checkpass;
        cout << "Enter The Password : ";
        fflush(stdin);
        checkpass = inputpassword();
        if (*password == checkpass)
        {
            string tempCINnumber;
            char mytry;
            do
            {
                cout << "\nEnter CIN number of the Citizen : ";
                fflush(stdin);
                cin >> tempCINnumber;
                tempCINnumber += '\n';
                heart.deletecitizeninformation(&tempCINnumber);
                cout << "Do you want to delete another citizen information [y/n] ? ";
                fflush(stdin);
                cin >> mytry;
            }
            while (mytry == 'y');
        }
        else
        {
            cout << "\nYou Entered a  Wrong Password" << endl;
        }
    }
    void option16(string* password)                   // Change Password
    {
        string checkpass, temppass1, temppass2;
        cout << "\n Enter old Password : ";
        fflush(stdin);
        checkpass = inputpassword();
        for (int k = 0; k < 3; k++)
        {
            if (checkpass == *password)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "\n Enter new password : ";
                    fflush(stdin);
                    temppass1 = inputpassword();
                    cout << "\n Retype new password : ";
                    fflush(stdin);
                    temppass2 = inputpassword();
                    if (temppass1 == temppass2)
                    {
                        *password = temppass1;
                        cout << "\nPassword Changed\n";
                        break;
                    }
                    else
                    {
                        cout << "\nPassword not matched!!" << endl;
                    }
                }
            }
            else
            {
                cout << "\nYou entered wrong password !!" << endl;
            }
            break;
        }
    }
    void homeCitizenRecord(string* password)                   // Home Menu of Citizen Record Center
    {
        int decide;
        do
        {

            cout << "\n*-----------------------------------------------------------------------------*" << endl
                 << "*                     Welcome to Citizen Record Center                        *" << endl
                 << "*-----------------------------------------------------------------------------*" << endl << endl;

            cout << "        1.Add new Citizen " << endl
                 << "        2.View  Citizen Information " << endl
                 << "        3.Update Citizen Information " << endl
                 << "        4.Search Citizen Information " << endl
                 << "        5.Delete Citizen Information " << endl
                 << "        6.Change Password " << endl
                 << "        7.Home Manu " << endl << endl;
            cout << "Enter your choice : ";
            cin >> decide;
            switch (decide)
            {
            case 1:
            {
                option11();
                break;
            }
            case 2:
            {
                option12();
                break;
            }
            case 3:
            {
                option13();
                break;
            }
            case 4:
            {
                option14();
                break;
            }
            case 5:
            {
                option15(password);
                break;
            }
            case 6:
            {
                option16(password);
                break;
            }
            case 7:
                break;
            default:
            {
                cout << "\nPlease select a vaild option" << endl;
                break;
            }
            }
        }
        while (decide != 7);
    }

    void option21()
    {
        string tempName;
        char mytry;
        do
        {
            cout << "\nEnter Name of the Citizen : ";
            fflush(stdin);
            getline(cin, tempName);
            heart.findCitizenByname(&tempName);
            cout << "\nDo you want to search another citizen [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }
    void option22()
    {
        string tempCINnumber;
        char mytry;
        do
        {
            cout << "\nEnter CIN number of the Citizen : ";
            fflush(stdin);
            cin >> tempCINnumber;
            tempCINnumber += '\n';
            heart.findCitizenByCINnumber(&tempCINnumber);
            cout << "\nDo you want to see another citizen information [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }
    void option23()
    {
        string tempProfession;
        char mytry;
        do
        {
            cout << "\nEnter the profession : ";
            fflush(stdin);
            getline(cin, tempProfession);
            heart.findCitizenBywork(&tempProfession);
            cout << "\nDo you want to search another citizen by there Profession [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }
    void option24()
    {
        string tempplace;
        char mytry;
        do
        {
            cout << "\t\tSearch People Near You\n" << endl
                 << "\t1.Village" << endl
                 << "\t2.Post Office" << endl
                 << "\t3.Police Station" << endl
                 << "\t4.District" << endl << endl;
            cout << "Enter your option : ";
            int whatplace;
            fflush(stdin);
            cin >> whatplace;
            cout << "\nEnter This place name : ";
            fflush(stdin);
            getline(cin, tempplace);
            heart.findCitizenByAddress(whatplace,&tempplace);
            cout << "\nDo you want to search another near you [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }
    void option25()
    {
        string tempMobileNumber;
        char mytry;
        do
        {
            cout << "\nEnter Mobile number of the Citizen : ";
            fflush(stdin);
            cin >> tempMobileNumber;
            heart.findCitizenBymobileNumber(&tempMobileNumber);
            cout << "\nDo you want to search another citizen by there mobile Number [y/n] ? ";
            fflush(stdin);
            cin >> mytry;
        }
        while (mytry == 'y');
    }

    void homeCitizenInformation()
    {
        int choice;
        do
        {
            cout << "*----------------------------------------------------------------*" << endl
                 << "*            Welcome to Citizen Information Center               *" << endl
                 << "*----------------------------------------------------------------*" << endl << endl;

            cout << "        1.Search Citizen By their Name" << endl
                 << "        2.Search Citizen by their CIN number" << endl
                 << "        3.Search Citizen by their profession" << endl
                 << "        4.Search Citizen Near you" << endl //*
                 << "        5.Search Citizen by Mobile Number" << endl
                 << "        6.Home menu" << endl << endl;
            cout << "Enter your choice : ";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                option21();
                break;
            }
            case 2:
            {
                option22();
                break;
            }
            case 3:
            {
                option23();
                break;
            }
            case 4:
            {
                option24();
                break;
            }
            case 5:
            {
                option25();
                break;
            }
            case 6:
            {
                break;
            }
            default:
                break;

            }
        }
        while (choice != 6);
    }
};

int main()
{
    //menu heart;
    menu admin;
    string password = "123456";
    int choice;
    do
    {

        cout << "*----------------------------------------------------------------*" << endl
             << "*           Citizen Information & Record Center                  *" << endl
             << "*----------------------------------------------------------------*" << endl << endl;
        cout << "        1.Citizen Record Center " << endl
             << "        2.Citizen Information Center " << endl
             << "        3.Quit " << endl << endl << endl;
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            string temppass;
            fflush(stdin);
            cout << "\nEnter the Password : ";
            temppass = admin.inputpassword();
            if (temppass == password)
            {
                admin.homeCitizenRecord(&password);
                break;
            }
            else
            {
                cout << "\nYou entered a wrong password!!" << endl;
            }
            break;
        }
        case 2:
        {
            admin.homeCitizenInformation();
            break;
        }
        case 3:
        {
            break;
        }
        default:
        {
            cout << "\nEnter a correct option!!" << endl;
            break;
        }
        }

    }
    while (choice != 3);

    cout << "\tTHANKS FOR USING THIS SYSTEM\t\t\t\t" << endl
         << "        --------------O-------------" << endl << endl;

    getchar();
    getchar();
    return 0;
}



