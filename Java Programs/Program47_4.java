import java.util.*;
import LB.Matrix;

class Program47_4
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

         bRet = mobj.ReverseCol();

         if(bRet == true)
         {
            System.out.println("Matrix is identical.");
         }
         else
          {
            System.out.println("Matrix is not identical.");
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
    public boolean ReverseCol()
    {
        int i = 0, j = 0;
        boolean bRet1 = false, bRet2 = false, bFinal = false;

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i] == Arr[j])
                {
                    if(Arr[i][j] != 1)
                    {
                        bRet1 = true;
                        break;
                    }
                else if(Arr[i] != Arr[j])
                {
                     if(Arr[i][j] != 0)
                    {
                        bRet2 = true;
                        break;
                    }
                }
                }
            }
        }
        if((bRet1 == false) && (bRet2 == false))
        {
            bFinal = true;
        }
        else
        {
            bFinal = false;
        }

        return bFinal;
            
    }
}


