import java.util.*;
import LB.Matrix;


class Program46_4
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
         mobj.AddColumn();

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

    public void AddColumn()
    {
        int i = 0, iSum = 0, j = 0;
        int len = Arr[j].length;
        int Add[] = new int[len];


        for(int k = 0; k < Add.length; k++)
        {
            iSum = 0;
        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                if(j == k)
                {
                   iSum = iSum + Arr[i][j];
                }  
            }

        }
        System.out.println("Addition of column "+(k+1)+" : "+iSum);
    }
}
}

