#include<bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0
#define N 9
int a[9][9];
bool discoverLocation(int grid[N][N],
                            int& r, int& c);
 
bool ifSafe(int grid[N][N], int r,
            int c, int num);
bool Solvegame(int grid[N][N])
{
    int r, c;
    if (!discoverLocation(grid, r, c))
        
        return true;
    for (int num = 1; num <= 9; num++) 
    {
        if (ifSafe(grid, r, c, num)) 
        {
            grid[r][c] = num;
            if (Solvegame(grid))
                return true;
 			 grid[r][c] = UNASSIGNED;
        }
    }
    
    // it will trigger backtracking
    return false;
}
bool discoverLocation(int grid[N][N],
                            int& r, int& c)
{
    for (r = 0; r < N; r++)
        for (c = 0; c < N; c++)
            if (grid[r][c] == UNASSIGNED)
                return true;
    return false;
}
bool InRow(int grid[N][N], int r, int num)
{
    for (int c = 0; c < N; c++)
        if (grid[r][c] == num)
            return true;
    return false;
}
bool InCol(int grid[N][N], int c, int num)
{
    for (int r = 0; r < N; r++)
        if (grid[r][c] == num)
            return true;
    return false;
}
bool InBox(int grid[N][N], int boxStartRow,
               int boxStartCol, int num)
{
    for (int r = 0; r < 3; r++)
        for (int c = 0; c< 3; c++)
            if (grid[r + boxStartRow]
                    [c + boxStartCol] ==
                                       num)
                return true;
    return false;
}
bool ifSafe(int grid[N][N], int r,
            int c, int num)
{
    return !InRow(grid, r, num)
           && !InCol(grid, c, num)
           && !InBox(grid, r - r % 3,
                         c - c % 3, num)
           && grid[r][c] == UNASSIGNED;
}
void displayGrid(int grid[N][N])
{	cout<<"_____________________________________________"<<endl;
    for (int r= 0; r < N; r++) 
    {
        for (int c = 0; c < N; c++)
            cout <<"|_"<< grid[r][c] << "_|";
            
        cout << endl;
        
    }
}

int main()
{

cout<<"\t\t\t\t\t\t\tSUDOKU"<<endl;
cout<<"\t\t\t\t\tA BASIC DISPLAY OF 9X9 SUDOKU BOARD"<<endl;
	string ch;
	cout<<"_____________________________________"<<endl;
	cout<<"|   | 7 |   |   |   |   |   |   | 9 |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"| 5 | 1 |   | 4 | 2 |   | 6 |   |   |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"|   | 8 |   | 3 |   |   | 7 |   |   |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"|   |   | 8 |   |   | 1 | 3 | 7 |   |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"|   | 2 | 3 |   | 8 |   |   | 4 |   |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"| 4 |   |   | 9 |   |   | 1 |   |   |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"| 9 | 6 | 2 | 8 |   |   |   | 3 |   |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"|   |   |   |   | 1 |   | 4 |   |   |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	cout<<"| 7 |   |   | 2 |   | 3 |   | 9 | 6 |"<<endl;
	cout<<"|___|___|___|___|___|___|___|___|___|"<<endl;
	
	cout<<"the solution will be generated using backtracking algorithm"<<endl;

	 int grid[N][N] = { { 0, 7, 0, 0, 0, 0, 0, 0, 9 },
                       { 5, 1, 0, 4, 2, 0, 6, 0, 0 },
                       { 0, 8, 0, 3, 0, 0, 7, 0, 0 },
                       { 0, 0, 8, 0, 0, 1, 3, 7, 0 },
                       { 0, 2, 3, 0, 8, 0, 0, 4, 0 },
                       { 4, 0, 0, 9, 0, 0, 1, 0, 0 },
                       { 9, 6, 2, 8, 0, 0, 0, 3, 0 },
                       { 0, 0, 0, 0, 1, 0, 4, 0, 0 },
                       { 7, 0, 0, 2, 0, 3, 0, 9, 6 } };
                       cout<<endl;
                       cout<<"WANT TO SEE THE SOLUTION TYPE yes OTHERWISE no "<<endl;
                       cin>>ch;
                       if(ch=="yes"){
					   
    if (Solvegame(grid) == true)
        displayGrid(grid);

    else
        cout << "No solution exists";
       
}
else{
	cout<<"THANK YOU SO MUCH"<<endl;
}
	
	cout<<"____________________________________________________________________________"<<endl;
	return 0;
	
}
