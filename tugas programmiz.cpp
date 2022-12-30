#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
	int soal;
	string ulang;
	
	do {
		system("cls");
		cout<<" pilih example no berapa? (1/2/3/4/5/6/7/8/9/10): ";
		cin>>soal;
		
		switch (soal) {
			case 1: {

    			int rows;

			    cout << "Enter number of rows: ";
			    cin >> rows;

			    for(int i = 1; i <= rows; ++i) {
			        for(int j = 1; j <= i; ++j) {
			            cout << "* ";
			        }
			        cout << "\n";
				}
				break;
			}
			
			case 2: {
				int rows;

			    cout << "Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = 1; i <= rows; ++i) {
				    for(int j = 1; j <= i; ++j) {
				        cout << j << " ";
				    }
				    cout << "\n";
				}
				break;
			}
			
			case 3: {
				char input, alphabet = 'A';

			    cout << "Enter the uppercase character you want to print in the last row: ";
			    cin >> input;
			
			    for(int i = 1; i <= (input-'A'+1); ++i)
			    {
			        for(int j = 1; j <= i; ++j)
			        {
			            cout << alphabet << " ";
			        }
			        ++alphabet;
			
			        cout << endl;
			    }
			    
				break;
			}
			
			case 4: {
				int rows;

			    cout << "Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = rows; i >= 1; --i)
			    {
			        for(int j = 1; j <= i; ++j)
			        {
			            cout << "* ";
			        }
			        cout << endl;
			    }
			    
				break;
			}
			
			case 5: {
				int rows;

			    cout << "Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = rows; i >= 1; --i)
			    {
			        for(int j = 1; j <= i; ++j)
			        {
			            cout << j << " ";
			        }
			        cout << endl;
			    }
			
				break;
			}
			
			case 6: {
				int space, rows;

			    cout <<"Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
			    {
			        for(space = 1; space <= rows-i; ++space)
			        {
			            cout <<"  ";
			        }
			
			        while(k != 2*i-1)
			        {
			            cout << "* ";
			            ++k;
			        }
			        cout << endl;
			    }    
			  
				break;
			}
			
			case 7: {
				int rows, count = 0, count1 = 0, k = 0;

			    cout << "Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = 1; i <= rows; ++i)
			    {
			        for(int space = 1; space <= rows-i; ++space)
			        {
			            cout << "  ";
			            ++count;
			        }
			
			        while(k != 2*i-1)
			        {
			            if (count <= rows-1)
			            {
			                cout << i+k << " ";
			                ++count;
			            }
			            else
			            {
			                ++count1;
			                cout << i+k-2*count1 << " ";
			            }
			            ++k;
			        }
			        count1 = count = k = 0;
			
			        cout << endl;
			    }

				break;
			}
			
			case 8: {
				int rows;

			    cout << "Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = rows; i >= 1; --i)
			    {
			        for(int space = 0; space < rows-i; ++space)
			            cout << "  ";
			
			        for(int j = i; j <= 2*i-1; ++j)
			            cout << "* ";
			
			        for(int j = 0; j < i-1; ++j)
			            cout << "* ";
			
			        cout << endl;
			    }
			
				break;
			}
			
			case 9: {
				int rows, coef = 1;

			    cout << "Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = 0; i < rows; i++)
			    {
			        for(int space = 1; space <= rows-i; space++)
			            cout <<"  ";
			
			        for(int j = 0; j <= i; j++)
			        {
			            if (j == 0 || i == 0)
			                coef = 1;
			            else
			                coef = coef*(i-j+1)/j;
			
			            cout << coef << "   ";
			        }
			        cout << endl;
			    }
			
				break;
			}
			
			case 10: {
				int rows, number = 1;

			    cout << "Enter number of rows: ";
			    cin >> rows;
			
			    for(int i = 1; i <= rows; i++)
			    {
			        for(int j = 1; j <= i; ++j)
			        {
			            cout << number << " ";
			            ++number;
			        }
			
			        cout << endl;
			    }
			
				break;
			}
			
		}
		
		cout<<"\n ingin mengulang program? ";
		cin>>ulang;
		
	} 
	while (ulang == "y" or ulang == "ya" or ulang ==" Ya");
	
	return 0;
}
