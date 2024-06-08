// Code by AFTAB NAFEES
// GitHub : aftab1038

/*    Assignment No 1 : Finding Tehsils of Inputed District.....    */

#include <iostream>
#include <cstring>

#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

using namespace std;

int main()
{
    string district[9] = {"Ghizer", "Hunza", "Skardu", "Ghanche","Astore","Diamir", "Darel", "Tangir", "Gilgit"};
    string ghizer_tehsils[4] = {"Yasin", "Punyial", "Isohkoman", "Gupis"};
    string hunza_tehsils[3] = {"Hunza", "Gojal", "Nagar"};
    string skardu_tehsils[5] = {"Gultari","Kharmang", "Rondu", "Shigar", "Skardu"};
    string ghanche_tehsils[2] = {"Khaplu", "Mashabrum"};
    string astore_tehsils[2] = {"Astore", "Shounter"};
    string diamir_tehsils[2] = {"Babu Sar", "Chilas"};	
    string darel_tehsils[1] = {"Darel"};
    string tangir_tehsils[1] = {"tangir"};
    string gilgit_tehsils[3] = {"Danyour", "Gilgit", "Juglot"};
    
    cout<<UNDERLINE<<"District in Gilgit Baltistan\n"<<CLOSEUNDERLINE;

    for(int i = 0; i < 9; i++ )
    {
        cout<<i+1<<". "<<district[i]<<endl;
    }
    
    string name;
    cout<<"\nEnter a district name to find it's tehsils : ";
    cin>>name;
    
    
    if (name == "Gilgit" || name == "gilgit" || name == "GILGIT")
    {
        cout<<UNDERLINE<<"\nTehsil of Gilgit district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 3; i++ )
        {
        cout<<i+1<<". "<<gilgit_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Ghizer" || name == "ghizer"|| name == "GHIZER")
    {
        cout<<UNDERLINE<<"\nTehsil of Ghizer district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 4; i++ )
        {
        cout<<i+1<<". "<<ghizer_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Hunza" || name == "HUNZA"|| name == "hunza")
    {
        cout<<UNDERLINE<<"\nTehsil of Hunza district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 3; i++ )
        {
        cout<<i+1<<". "<<hunza_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Skardu" || name == "skardu"|| name == "SKARDU")
    {
        cout<<UNDERLINE<<"\nTehsil of Skardu district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 5; i++ )
        {
        cout<<i+1<<". "<<skardu_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Astore" || name == "ASTORE"|| name == "astore")
    {
        cout<<UNDERLINE<<"\nTehsil of Astore district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 2; i++ )
        {
        cout<<i+1<<". "<<astore_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Diamir" || name == "diamir"|| name == "DIAMIR")
    {
        cout<<UNDERLINE<<"\nTehsil of Diamir district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 2; i++ )
        {
        cout<<i+1<<". "<<diamir_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Ghanche" || name == "ghanche"|| name == "GHANCHE")
    {
        cout<<UNDERLINE<<"\nTehsil of Ghanche district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 2; i++ )
        {
        cout<<i+1<<". "<<ghanche_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Darel" || name == "darel"|| name == "DAREL")
    {
        cout<<UNDERLINE<<"\nTehsil of Darel district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 1; i++ )
        {
        cout<<i+1<<". "<<darel_tehsils[i]<<endl;
        }
        
    }
    
    else if (name == "Tangir" || name == "tangir"|| name == "TANGIR")
    {
        cout<<UNDERLINE<<"\nTehsil of Tangir district\n"<<CLOSEUNDERLINE;
        for(int i = 0; i < 1; i++ )
        {
        cout<<i+1<<". "<<tangir_tehsils[i]<<endl;
        }
        
    }
    
    else
    {
        cout<<"Invalid input\n";
    }
  


}
