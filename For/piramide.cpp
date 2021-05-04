/*
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
*/


#include <iostream>

using namespace std;

int main()
{
   
   
   for(int y=1; y<=10;y++)
   {
        for(int x = 1; x <= 10;x++)
        {
            cout<<x<<" ";
        
        }
        cout<<endl;
   }
}


/*
10 9 8 7 6 5 4 3 2 1
10 9 8 7 6 5 4 3 2 1
10 9 8 7 6 5 4 3 2 1
10 9 8 7 6 5 4 3 2 1
*/

void piramida_2()
{
   
   
   for(int y=1; y<=10;y++)
   {
        for(int x = 10; x >= 1;x--)
        {
            cout<<x<<" ";
        
        }
        cout<<endl;
   }
}

/*
1 2 3 4 5 6 7 8 9 10                                                                                                                                                                                                                            
2 3 4 5 6 7 8 9 10                                                                                                                                                                                                                              
3 4 5 6 7 8 9 10                                                                                                                                                                                                                                
4 5 6 7 8 9 10                                                                                                                                                                                                                                  
5 6 7 8 9 10                                                                                                                                                                                                                                    
6 7 8 9 10                                                                                                                                                                                                                                      
7 8 9 10                                                                                                                                                                                                                                        
8 9 10                                                                                                                                                                                                                                          
9 10                                                                                                                                                                                                                                            
10 
*/

void piramida_3()
{
   
   
   for(int x=0; x!=10;x++)
   {
        
        for(int z=x+1;z<=10;z++)
        {
            cout<<z<<" ";
        }
        cout<<"\n";
    }
}

/*
10 9 8 7 6 5 4 3 2 1                                                                                                                                                                                                                            
9 8 7 6 5 4 3 2 1                                                                                                                                                                                                                               
8 7 6 5 4 3 2 1                                                                                                                                                                                                                                 
7 6 5 4 3 2 1                                                                                                                                                                                                                                   
6 5 4 3 2 1                                                                                                                                                                                                                                     
5 4 3 2 1                                                                                                                                                                                                                                       
4 3 2 1                                                                                                                                                                                                                                         
3 2 1                                                                                                                                                                                                                                           
2 1                                                                                                                                                                                                                                             
1
*/ 
  
void piramida_4()
{
   
   for(int x=10; x!=0;x--)
   {
        
        for(int z=x;z>=1;z--)
        {
            cout<<z<<" ";
        }
        cout<<"\n";
}


/*
10 9 8 7 6 5 4 3 2 1                                                                                                                                                                                                                            
10 9 8 7 6 5 4 3 2
10 9 8 7 6 5 4 3 
10 9 8 7 6 5 4 
10 9 8 7 6 5 
*/
 
void piramida_5()
{
 int y=0;
    
      for(int x=10; x!=0;x--)
   {
        
        for(int z=10;z>=1+y;z--)
        {
          
            cout<<z<<" ";
           
        
        }
    y++;
    cout<<"\n";
   }
}

void piramida_5.1()
{
    
      for(int x=1; x!=11;x++)
   {
        
        for(int z=10;z>=x;z--)
        {
          
            cout<<z<<" ";
           
        
        }
    cout<<"\n";
    }
}


/*
0 1 2 3 4 5 6 7 8 9
1 0 1 2 3 4 5 6 7 8
2 1 0 1 2 3 4 5 6 7
3 2 1 0 1 2 3 4 5 6
4 3 2 1 0 1 2 3 4 5
5 4 3 2 1 0 1 2 3 4
6 5 4 3 2 1 0 1 2 3
7 6 5 4 3 2 1 0 1 2
8 7 6 5 4 3 2 1 0 1
9 8 7 6 5 4 3 2 1 0
*/

void piramida_6()
{
    for(int x=1; x<=10;x++)
    {
        for(int z=1;z<=10;z++)  
        {
            if(x>=z)
            {
                cout<<x-z<<" ";
            }
            else
            {
                cout<<z-x<<" ";
            }
            
        
          
    
            //cout<<"[ x="<<x<<", z="<<z<<" ] ";
        }
        cout<<"\n";
    }