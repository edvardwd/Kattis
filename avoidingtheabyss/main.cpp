#include <bits/stdc++.h>

using namespace std;

//could be done a lot easier xD

struct Point{
    int x;
    int y;
};

Point operator-(const Point a, const Point b){
    return {a.x - b.x, a.y - b.y};
}

bool operator<(const Point a, const Point b){
    if ((a.x < b.x) && (a.y < b.y)) return true;
    return false;
}

Point abs(Point a){
    return {abs(a.x), abs(a.y)};
}

bool operator==(Point a, Point b){
    return ((a.x == b.x) && (a.y == b.y));
}

int setDir(int sCoord, int pCoord){
    if (pCoord > sCoord){
        return -1;
    }
    return 1;
}

void printPoint(Point a){
    cout << a.x << " " << a.y << endl;
}

double magnitude(Point vec){
    return sqrt(pow(vec.x, 2) + pow(vec.y, 2));
}


Point findClosestCornerAbs(Point pos, vector<Point> corners){
    Point closest = corners.at(0);
    double shortestDist = magnitude(corners.at(0) - pos);
    for (const Point& corner : corners){
        if (magnitude(corner - pos) < shortestDist){
            shortestDist = magnitude(corner - pos);
            closest = corner;
        }
    }
    return closest;
}

Point findClosestXY(Point t, Point p, vector<Point> corners){
    for (const Point& corner : corners){
        Point tDiff = abs(corner - t);
        Point pDiff = abs(corner - p);
        if (tDiff < pDiff){
            return corner;
        }
    }
    return corners.at(0);
}


int main(){
    int xs, ys, xt, yt, xp, yp;
    cin >> xs >> ys >> xt >> yt >> xp >> yp;

    Point s{xs, ys};
    Point p{xp, yp};
    Point t{xt, yt};

    Point bottomLeft{int(-1e5), int(-1e5)};
    Point bottomRight{int(1e5), int(-1e5)};
    Point topLeft{int(-1e5), int(1e5)};
    Point topRight{int(1e5), int(1e5)};
    
    vector<Point> corners{bottomLeft, bottomRight, topLeft, topRight};
    vector<Point> moves;

    //will move out of the pool bounds
    //determine left/right and up/down to avoid pool
    int xDir = setDir(s.x, p.x);
    
    //want to move to the corner that is closer to t than p in both coordinates
    //find closest corner
    Point closestCorner;
    if (p.x == t.x || p.y == t.y){
        //find closest corner in abs val
        closestCorner = findClosestCornerAbs(t, corners);
    } else{
        //find closest in both x and y
        closestCorner = findClosestXY(t, p, corners);
    }

    Point firstMove{int(xDir * 1e5), s.y};
    moves.emplace_back(firstMove);
    Point secondMove{firstMove.x, closestCorner.y};
    moves.emplace_back(secondMove);

    if (!(secondMove == closestCorner)){
        Point thirdMove = closestCorner;
        moves.emplace_back(thirdMove);
    }

    //print result
    cout << moves.size() << endl;
    for (auto move : moves){
        printPoint(move);
    }

    return 0;
}