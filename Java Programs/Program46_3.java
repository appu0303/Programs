import java.util.*;
import LB.Matrix;


class Program46_3
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
        iRet = mobj.MaxDiagonal();

        System.out.println("Maximum element from both the diagonal is : "+iRet);

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

    public int MaxDiagonal()
    {
        int i = 0, j = 0, iMax = Arr[0][0];

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                if((Arr[i] == Arr[j]) || j == (Arr.length+1) - i)
                {
                    if(Arr[i][j] > iMax)
                    {
                        iMax  = Arr[i][j];
                    }
                }
            }
        }
        return iMax;
    }
}

