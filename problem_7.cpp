#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string encryptMessages(char arr1[],int len)
{
     string encryptMessage = "";

    for (int i = 0;(i<len && arr1[i]!='\0');i++)
    {

        arr1[i]= arr1[i]+5;
        encryptMessage += arr1[i];
    }


     return encryptMessage;
}



string decryptMessages(char arr1[],int len)
{
     string decryptMessages = "";

    for (int i = 0;(i<len && arr1[i]!='\0');i++)
    {

        arr1[i]= arr1[i]-5;
        decryptMessages += arr1[i];
    }
     return decryptMessages;
}




int main()
{
     cout<<"Do you want to enter a message...\nA- Yes.\nB- No.\n";
    char choice2 ;
    cin>>choice2;


    while (choice2 != 'A' && choice2 != 'a' && choice2 != 'B' && choice2 != 'b' )
    {
        cout<<"please enter a valid choice : ";
        cin>>choice2;
    }



    while(choice2 == 'A' || choice2 == 'a' )
    {



    int len;
    cout<<"\nplease enter the length of your string : ";
    cin>>len;

    char arr1[len];
    cout<<"please enter the string : ";
    cin>>arr1;

    cout<<"\nA-Encrypt Message.\nB-Decrypt Message.\nchoose one of the choices: ";
    char choice1;
    cin>>choice1;



    while (choice1 != 'A' && choice1 != 'a' && choice1 != 'B' && choice1 != 'b' )
    {
        cout<<"please enter a valid choice : ";
        cin>>choice1;
    }



        if (choice1 == 'A' || choice1 == 'a')
            cout<<"\nEncrypted Message = "<<encryptMessages(arr1,len)<<"\n\n";
       else
        cout<<"\nDecrypted Message = "<<decryptMessages(arr1,len)<<"\n\n";



    cout<<"Do you want to enter a new message...\nA- Yes.\nB- No.\n";
    char choice2 ;
    cin>>choice2;


     if (choice2=='B'|| choice2=='b')
        break;

    while (choice2 != 'A' && choice2 != 'a' && choice2 != 'B' && choice2 != 'b' )
    {
        cout<<"please enter a valid choice : ";
        cin>>choice2;
    }


    }

   cout<<"\nThank you for using our program...\n";

    return 0;
}
