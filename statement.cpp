/*
      Conditional Statements
      ----------------------


    if(------)
    {
       ----
       ---
       --
       -
    }
  else 
    {
       -----
       ---
       --
       -
    }


*/
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter the age of the person:"<<endl;
    cin>>age;

    if(age>=18)
       {
          cout<<"They can vote"<<endl;
       }
    else
    {
        cout<<"Age can not be greater the 18"<<endl<<"he can't  vote"<<endl;

    }




      int num;
    cout<<"Enter any natural number:"<<endl;
    cin>>num;

    if(num%2==0)
       {
          cout<<"even number"<<endl;
       }
    else
    {
        cout<<"odd number"<<endl;

    }


 




/*
   if(----)
    {
     ----
     --
     -
    }
  else if(---)
    {
     -----
     ----
     --
     -
    }
  else if(---)
    {
      ---
      --
      -
    }

  else{
    -----
    --
    -
  }
*/




//lower case or uppercase
//(char>='a' && char<='z')
//(char>=65 && char<=90)//here implicit conversion
//(char>='A'&&char<='Z')

  char character;
    cout<<"Enter any charecter:"<<endl;
    cin>>character;

    if(character>='a' && character<='z' )
    
       {
          cout<<"lowerCase"<<endl;
       }
    else
    {
        cout<<"upperCase"<<endl;

    }

  return 0;
}
