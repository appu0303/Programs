import java.util.*;
import LB.Matrix;


class Program47_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iNum = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        // Function calls
         mobj.Transpose();

       // System.out.println("Maximum element from both the diagonal is : "+iRet);

        mobj = null;
        System.gc();
    }
}
class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void Transpose()
    {
        int i = 0, j = 0;
        int T[][] = new int[j][i];


        System.out.println("Transpose of the matrix is : ");
        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                System.out.print(Arr[j][i]+"\t");
            }
            System.out.println();

        }

    }
}


