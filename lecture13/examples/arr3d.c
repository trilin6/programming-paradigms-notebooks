int main(){
    
    int arr3d[2][3][4] = {
        {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
        {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}
    };

    //What are the types of the following?
    //How would you create a variable to store them?
    int zerod = arr3d[0][0][0];
    int *oned = arr3d[0][0];
    int (*twod)[4] = arr3d[0];
    int (*threed)[3][4] = arr3d;
}
