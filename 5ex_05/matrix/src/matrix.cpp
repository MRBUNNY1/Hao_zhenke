#include "matrix.h"
#include <iomanip>
using namespace std;

ostream &operator<<(ostream &output,const Matrix &matrix)

{
    output <<a<<setw(3)<<b<<setw(3)<<c<<setw(3)<<d<<setw(3)<<e<<setw(3)
    <<f<<setw(3)<<g<<setw(3)<<h<<setw(3)<<i<<setw(3)<<endl;
    return output ;

}
istream &operator>>(istream &input ,Matrix &matrix)
{
    input>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    return input;
}
