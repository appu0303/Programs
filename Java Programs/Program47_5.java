import java.util.*;
import LB.Matrix;

class Program47_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iNum = 0;
        boolean bRet = false;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

         bRet = mobj.ChkSparse();

         if(bRet == true)
         {
            System.out.println("Matrix is Sparse Matrix.");
         }
         else
          {
            System.out.println("Matrix is not Sparse Matrix.");
         }

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
    public boolean ChkSparse()
    {
        int i = 0, j = 0, cntNonZero = 0;
        int cntZero = 0;
        boolean bRet = false;

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == 0)
                {
                    cntZero++;
                }
                else
                {
                    cntNonZero++;
                }
                }
            }

            if(cntZero > cntNonZero)
            {
                return true;
            }
            else
            {
                return false;
            }
        }        
}


