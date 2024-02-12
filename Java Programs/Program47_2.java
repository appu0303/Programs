import java.util.*;
import LB.Matrix;


class Program47_2
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
         mobj.ReverseRow();

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

    public void ReverseRow()
    {
        int i = 0, j = 0;

        System.out.println("Reverse matrix is : ");
        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = Arr[i].length - 1 ; j >= 0; j--)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();

        }
    }
}


