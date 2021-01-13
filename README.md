# sudoku
Prerequisites:Dev C++,Windows 10.
Introduction:
sudoku using backtracking algorithm ,the program will display a 9X9 sudoku board and then display the solved sudoku.
In classic sudoku, the objective is to fill a 9×9 grid with digits so that each column, each row, and each of the nine 3×3 subgrids that compose the grid (also called "boxes", "blocks", or "regions") contain all of the digits from 1 to 9. The puzzle setter provides a partially completed grid, which for a well-posed puzzle has a single solution.
in this we are going to make a 9X9 grid sudoku using backtracking algorithm.
Modules:
in this the sudoku grid or the puzzle is inputed at the compile time and it can be seen on the console then the program will ask for the solution to display if the user input yes then it will print the solved sudoku and if user input no then a thankyou message willbe displayed on the screen.
Functions used in Sudoku.cpp are as follows.
1.bool discoverLocation(int grid[N][N],int& r, int& c);
  This function will check that whether the index is assigned or not that is unassigned.Suppose that grid[N][N] is 0, then this function will return true alue otherwise it will     return false.
2.bool ifSafe(int grid[N][N], int r,int c, int num); 
  It will depend on other three functions and this function will check whether the number assigned at that position or index is safe or not.and these three functions are as       
  follows:
3.bool InRow(int grid[N][N], int r, int num)
  this function will check whether the number to be assigned is already present in that entire row or not.vif that particular number is present there then it will return true 
  otherwise false.
4.bool InCol(int grid[N][N], int c, int num)
  this function will check whether the number to be assigned is already present in that entire column or not.vif that particular number is present there then it will return true     otherwise false.
5.bool InBox(int grid[N][N], int boxStartRow,int boxStartCol, int num)
  this function will check whether the number to be assigned is already present in that entire 3X3 box/grid or not.vif that particular number is present there then it will return 
  true otherwise false.
  If all three functions return false then the function,bool ifSafe(int grid[N][N], int r,int c, int num); ,will return true.
6.bool Solvegame(int grid[N][N])
  this condition will check allthe conditions till there is any unassigned value in the grid is present and at the last it returns the value as true or false. 
7.void displayGrid(int grid[N][N])
  In main function, in the grid the values of rows and the columns are assigned as 0 and are reffered to as unassigned position/index.if solvegame(grid) is true then the solved sudoku will be displayed on the screen using void displayGrid(int grid[N][N]) function,And if there is no solution of the given sudoku then it will display a message on the screen as "No solution exits".
