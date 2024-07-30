#include <iostream>
using namespace std;

const char* isdate(int m, int d,int y){
    
    if((m == 5 ||  m == 3 || m == 1 || m == 7 || m == 8 || m == 10 || m == 12) && (d == 31) ){
        if(m==3 || m== 5)
            return "Spring";
        else if(m== 7 || m== 8)
            return "Summer";
        else if( m == 10)
            return "Fall";
        else
            return "Winter";
    }
    if(m>12 || d>30)
        return "-1";
    else if (m == 2 && d <= 29 && y == 1 ){
 
        return "Winter";
    }
    else if (m == 2 && d > 27){
        return "-1";
    }
    else if (m>=3 && m<= 5)
        return "Spring";
    else if (m>=6 && m<= 8)
        return "Summer";
    else if (m>=9 && m<= 11)
        return "Fall";
    else if ()
        return "Winter";
    return 0;
}

bool isyunneon(int y) {
    if (y % 400 == 0)
        return true;
    if (y % 100 == 0)
        return false;
    if (y % 4 == 0)
        return true;
    return false;
}

int main() {
    int y,m,d;
    cin >> y >> m >> d;
    int is_yunneon;
    is_yunneon = isyunneon(y);

    cout << isdate(m,d,is_yunneon);
    

    return 0;
}