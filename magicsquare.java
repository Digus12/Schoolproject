ublic class P6_19 {
public static void printMagicSquare(int[][] square) {
for (int i = 0; i < square.length; i++) {
for (int j = 0; j < square[i].length; j++) {
System.out.printf("%3d", square[i][j]);
}
System.out.println();
}
}
public static int[][] makeMagicSquare(int n) {
int[][] square = new int[n][n];
int row = n - 1;
int column = n / 2;
for (int k = 1; k <= (n * n); k++) {
square[row][column] = k;
row = (row + 1) % n;
column = (column + 1) % n;
if (square[row][column] != 0) {
column = (column - 1 + n) % n;
row = (row - 2 + n) % n;
}
}
return square;
}
public static void main(String[] args) {
System.out.println("Enter an odd number: ");
Scanner in = new Scanner(System.in);
int n = in.nextInt();
in.close();
int[][] square = makeMagicSquare(n);
printMagicSquare(square);
}
}
