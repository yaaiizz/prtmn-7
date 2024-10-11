#include <iostream>
using namespace std;
int main()
{
     // Array Multidimensi
    int arr[2][3][2] = {{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}};
    for (int i = 0; i<2; ++i)
    {
        for (int j =0;j<3;++j)
        {
            for (int k =0;k<2;++j)
            {
            cout<< "arr["<<i<<"]["<<j<<"]["<<k<<"] = "<<arr[i][j][k]<<endl;
            }
        }
    }
    // Array 2 dimensi contoh 2
 //   int matrik[3][2] = {{1,2},{3,4},{5,6}};

 //   for (int i = 0; i<4; ++i)
  //  {
   //     for (int j =0;j<2;++j)
  //      {
   //         cout<< "Matrik["<<i<<"]["<<j<<"] = "<<matrik[i][j]<<endl;
  //      }
   // }
// contoh 1
  //  string alfabet[2][4] = {
  //  {"A", "B", "C", "D"},
  //  {"E", "F", "G", "Y"}};

   // cout << alfabet [1][3];
    return 0;
}
