#include <iostream>
#include <conio.h>
using namespace std;

class books
{
public:
    string csBook [50], csAuthor[50],csAmount[50];
    string mBook[50],mAuthor[50],mAmount[50];
    string eeBook[50],eeAuthor[50],eeAmount[50];
    string ceBook[50],ceAuthor[50],ceAmount[50];
    string lawBook[50],lawAuthor[50],lawAmount[50];
    int csCounter=2;
    int mCounter=2;
    int eeCounter=2;
    int ceCounter=2;
    int lawCounter=2;
    int book,bok;

    void registerBook()
    {

        cout << "\t\tWhat kind of book you want to add: "<< endl;
        cout << "\t\t1. Computer Science\n\t\t2. Medical\n\t\t3. Electronic Engineering\n\t\t4. Civil Engineering\n\t\t5. Law"<<endl<<"\t\t";
        cin >> bok;
        switch (bok)
        {
        case 1:
            csBook[0]="Introduction to C++";
            csBook[1]="Introduction to java programming";
            cout << "\t\tEnter the name of book: \t";
            cin >> csBook[csCounter];
            cout << "\t\tEnter the Author name: \t";
            cin >> csAuthor[csCounter];
            cout << "\t\tEnter the amount of books: \t";
            cin >> csAmount[csCounter];
            csCounter++;
            break;
        case 2:
            mBook[0]="physiology";
            mBook[1]="Microbiology";
            cout << "\t\tEnter the name of Book: \t";
            cin >> mBook[mCounter];
            cout << "\t\tEnter the Author name: \t";
            cin >> mAuthor[mCounter];
            cout << "\t\tEnter the amount of books: \t";
            cin >> mAmount[mCounter];
            mCounter++;
            break;
        case 3:
            eeBook[0]="Basic Electrical Engineering ";
            eeBook[1]="Electrical Auto cad ";
            cout << "\t\tEnter the name of Book: \t";
            cin >> eeBook[eeCounter];
            cout << "\t\tEnter the Author name: \t";
            cin >> eeAuthor[eeCounter];
            cout << "\t\tenter the amount of books: \t";
            cin >> eeAmount[eeCounter];
            eeCounter++;
            break;
        case 4:
            ceBook[0]="civil Engineering";
            ceBook[1]="Auto cad learning";
            cout << "\t\tEnter the name of Book: \t";
            cin >> ceBook[ceCounter];
            cout << "\t\tEnter the Author name: \t";
            cin >> ceAuthor[ceCounter];
            cout << "\t\tenter the amount of books: \t";
            cin >> ceAmount[ceCounter];
            ceCounter++;
            break;
        case 5:
            lawBook[0]="Panel Code";
            lawBook[1]="Law of Afghanistan";
            cout << "\t\tEnter the name of Book: \t";
            cin >> lawBook[lawCounter];
            cout << "\t\tEnter the Author name: \t";
            cin >> lawAuthor[lawCounter];
            cout << "\t\tenter the amount of books: \t";
            cin >> lawAmount[lawCounter];
            lawCounter++;
            break;
        }
    }
    void listOfBooks()
    {

        cout << "\t\twhich kind of book you want: "<< endl;
        cout << "\t\t1. Computer Science\n\t\t2. Medical\n\t\t3. Electronic Engineering\n\t\t4. Civil Engineering\n\t\t5. Law"<<endl<<"\t\t";
        cin >> book;
        switch (book)
        {
        case 1:
            csBook[0]="Introduction to C++";
            csAuthor[0]="Hayatullah ahmadi";
            csAmount [0]= "12";
            csBook[1]="Introduction to java programming";
            csAuthor[1]="wahidullah amini";
            csAmount[1]="10";



            for (int i = 0; i<csCounter; i++)
            {
                cout <<"\t\t"<< (i+1)<<". "<<"Book name:  \t"<<csBook[i]<<endl;
                cout <<"\t\t   Author name:  \t"<<csAuthor[i]<<endl;
                cout <<"\t\t   Amount:  \t"<<csAmount[i]<<endl;
            }
            break;
        case 2:
            mBook[0]="physiology";
            mAuthor[0]="ahmad ahmadi";
            mAmount[0]="3";
            mBook[1]="Microbiology";
            mAuthor[1]="Ali Yawari";
            mAmount[1]="3";
            for (int i = 0; i<mCounter; i++)
            {
                cout <<"\t\t"<<(i+1)<<". "<<"Book name:  \t"<< mBook[i]<<endl;
                cout << "\t\t   Author name:  \t"<<mAuthor[i]<<endl;
                cout <<"\t\t   Amount:  \t"<< mAmount[i]<<endl;
            }
            break;
        case 3:
            eeBook[0]="Basic Electrical Engineering ";
            eeAuthor[0]="amin zafari";
            eeAmount[0]="2";
            eeBook[1]="Electrical Auto cad ";
            eeAuthor[1]="wahid yawari";
            eeAmount[1]="4";
            for (int i = 0; i<eeCounter; i++)
            {
                cout <<"\t\t"<<(i+1)<<". "<< "Book name:  \t"<<eeBook[i]<<endl;
                cout <<"\t\t   Author name:  \t"<<eeAuthor[i]<<endl;
                cout <<"\t\t   Amount:  \t"<< eeAmount[i]<<endl;
            }
            break;
        case 4:
            ceBook[0]="civil Engineering";
            ceAuthor[0]="Hassan Hassani";
            ceAmount[0]="5";
            ceBook[1]="Auto cad learning";
            ceAuthor[1]="ferdous zamani";
            ceAmount[1]="6";
            for (int i = 0; i<ceCounter; i++)
            {
                cout <<"\t\t"<<(i+1)<<". "<< "Book name:  \t"<<ceBook[i]<<endl;
                cout << "\t\t   Author name:  \t"<<ceAuthor[i]<<endl;
                cout <<"\t\t   Amount:  \t"<< ceAmount[i]<<endl;
            }
            break;
        case 5:
            lawBook[0]="Panel Code";
            lawAuthor[0]="Zaman Zamani";
            lawAmount[0]="7";
            lawBook[1]="Law of Afghanistan";
            lawAuthor[1]="Arsalan Shahyar";
            lawAmount[1]="11";
            for (int i = 0; i<ceCounter; i++)
            {
                cout <<"\t\t"<<(i+1)<<". "<< "Book name:  \t"<<lawBook[i]<<endl;
                cout <<"\t\t   Author name:  \t"<< lawAuthor[i]<<endl;
                cout << "\t\t   Amount:  \t"<<lawAmount[i]<<endl;
            }
            break;
        }
    }
    void deleteBook(int ca)
    {

        if (ca<0 || ca>50)
        {

            cout << "\t\tInvalid number! "<<endl;
        }
        else
        {
            switch (book)
            {
            case 1:
                for (int i = ca-1; i<50; i++)
                {
                    csBook[i] = csBook[i+1];
                }
                csCounter--;
                cout << "\t\tBook deleted Successfully!"<< endl;
                break;
            case 2:
                for (int i =ca-1; i<50; i++)
                {
                    mBook[i]=mBook[i+1];
                }
                mCounter--;
                cout << "\t\tbook deleted successfully"<<endl;
                break;
            case 3:
                for (int i =ca-1; i<50; i++)
                {
                    eeBook[i]=eeBook[i+1];
                }
                eeCounter--;
                cout << "\t\tbook deleted successfully"<<endl;
                break;
            case 4:
                for (int i =ca-1; i<50; i++)
                {
                    ceBook[i]=ceBook[i+1];
                }
                ceCounter--;
                cout << "\t\tbook deleted successfully"<<endl;
                break;
            case 5:
                for (int i =ca-1; i<50; i++)
                {
                    lawBook[i]=lawBook[i+1];
                }
                lawCounter--;
                cout << "\t\tbook deleted successfully"<<endl;
                break;
            }
        }
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class newMember : public books
{
public:

    string name[50];
    string lastname[50];
    string email[50];
    string phone[50];
    string username[50];
    string password[50];
    int counter = 0;
    void addMember()
    {
        cout << "\t\tEnter the name: \t";
        cin >> name[counter];
        cout << "\t\tEnter the lastname: \t";
        cin >> lastname[counter];
        cout << "\t\tEnter the Email: \t";
        cin >> email[counter];
        cout << "\t\tEnter the phone Number: \t";
        cin >> phone[counter];
        cout << "\t\tEnter a username: \t";
        cin >> username[counter];
        cout << "\t\tEnter the password: \t";
        cin >> password[counter];
        counter++;
    }
    bool userLogin()
    {
        string user, pass;
        cout << "\t\tEnter Username: "<<endl<<"\t\t";
        cin >> user;
        cout << "\t\tEnter Password: "<<endl<<"\t\t";
        cin >> pass;
        for (int i =0; i<counter; i++)
        {

            if (user==username[i] && pass == password[i])
            {
                cout << "\t\twelcome"<<endl;
                return true;
            }
        }
        return false;
    }

    void listOfMembers()
    {
        if (counter>0)
        {
            for (int i=0; i<counter; i++)
            {
                cout <<"\t\t"<<(i+1)<<". Name: \t"<<name[i]<<endl;
                cout << "\t\t   LastName: \t"<<lastname[i]<<endl;
                cout << "\t\t   Email: \t"<<email[i]<<endl;
                cout << "\t\t   Phone Number: \t"<<phone[i]<<endl;
                cout << "\t\t   Username: \t"<<username[i]<<endl;
                cout << "\t\t   Password: \t"<<password[i]<<endl;
            }
        }
        else
        {
            cout << "\t\tThere is no any Member!"<<endl;
        }
    }
    void removeMember(int a)
    {
        for (int i =a-1 ; i<counter; i++)
        {
            name[i]=name[i+1];
            lastname[i]=lastname[i+1];
            email[i]=email[i+1];
            phone[i]=phone[i+1];
            username[i]=username[i+1];
            password[i]=password[i+1];
        }
        counter--;
    }

};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class admin : public newMember
{
public:
    void login()
    {
        int op=0;
        string username="";
        string password="";
        while (username != "admin")
        {
            cout << "\t\tEnter the username: "<<endl<<"\t\t";
            cin >> username;

            if (username == "admin")
            {
                while (password != "1234")
                {
                    cout << "\t\tEnter the Password: "<< endl<<"\t\t";
                    cin >> password;

                    if (password == "1234")
                    {
                        cout << "\t\t==================== Welcome dear Admin ============= "<<endl;
                        do
                        {
                            cout << "\t\tchoose your operaion:"<<endl ;
                            cout << "\t\t1. Add book\n\t\t2. View booklist\n\t\t3. add member\n\t\t4. list of members\n\t\t5. Remove a book\n\t\t6. Remove a Member\n\t\t7. Get a Book\n\t\t8. Return Book\n\t\t9. Exit"<<endl<<"\t\t";

                            cin >> op;
                            switch(op)
                            {
                            case 1:
                                registerBook();
                                cout << "\t\tpress any key to back....."<< endl;
                                getch();
                                break;

                            case 2:

                                listOfBooks();
                                cout << "\t\tpress any key to back....."<< endl;
                                getch();
                                break;
                            case 3:
                                addMember();
                                cout << "\t\tpress any key to back....."<< endl;
                                getch();
                                break;
                            case 4:

                                listOfMembers();
                                cout << "\t\tpress any key to back....."<< endl;
                                getch();
                                break;
                            case 5:
                                listOfBooks();
                                cout << "\t\twhich one you want to delete"<< endl<<"\t\t";
                                int d;
                                cin>> d;
                                deleteBook(d);
                                cout << "\t\tpress any key to back....."<< endl;
                                getch();
                                break;
                            case 6:
                                listOfMembers();
                                cout << "\t\tWhom yow want to remove: "<<endl<<"\t\t";
                                int person;
                                cin >> person;
                                removeMember(person);
                                cout << "\t\tpress any key to back....."<< endl;
                                getch();
                                break;
                            case 7:
                                listOfBooks();
                                cout << "\t\twhich one you want to get:"<<endl<<"\t\t";
                                int get;
                                cin >> get;
                                deleteBook(get);
                                cout << "\t\tThis is your book!"<<endl;
                                cout << "\t\tpress any key for previous menu....."<<endl;
                                getch();
                                break;
                            case 8:
                                registerBook();
                                cout << "\t\tThanks for returning book!";
                                break;
                            }
                        }
                        while (op!=9);

                    }
                    else
                    {
                        cout << "\t\tpassword is wrong! "<<endl;
                    }
                }
            }
            else
            {
                cout << "\t\tUsername is wrong! "<<endl;
            }
        }

    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    admin ad;
    int operate;
    cout << "\n\t********==========  Welcome to Kateb University Library  =========********\n"<<endl;

    do
    {
        cout << "\t\twhat you want to do: "<<endl;
        cout << "\t\t1. admin\n\t\t2. member\n\t\t3. Exit "<<endl<<"\t\t";
        cin >> operate;
        switch (operate)
        {
        case 1:
            ad.login();
            break;
        case 2:
            int op1;
            if (ad.userLogin())
            {
                cout << "\t\twhat you want: "<<endl;
                cout << "\t\t1. list of Books\n\t\t2. Back to menu"<<endl<<"\t\t";
                cin >> op1;
                if (op1==1)
                {
                    ad.listOfBooks();
                    cout << "\t\tpress any key to previous menu....."<<endl;
                    getch();
                }
            }
            else
            {
                cout << "\t\twrong user name or password! "<<endl;
                break;
            }
        case 3:
            cout << "\n\t\tTHANKS FOR COMING :-)\n\t\tHAVE A NICE DAY!"<<endl;
            break;
        default:
            cout << "\t\tWrong number! "<<endl;
            cout << "\t\tPress any key for menu back..."<<endl;
            getch();
        }

    }
    while(operate!=3);
    return 0;
}
