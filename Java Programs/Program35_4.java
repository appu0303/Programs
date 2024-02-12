import java.util.*;

class Program35_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Number num = new Number();
        int iSize = 0;
        int iStart = 0;
        int iEnd = 0;
        int iCnt = 0;

        System.out.println("How many elements you want to enter : ");
        iSize = sc.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        System.out.println("Enter starting number : ");
        iStart = sc.nextInt();

        System.out.println("Enter ending number : ");
        iEnd = sc.nextInt();

        num.Display(Arr,iStart, iEnd);   
    }
}

class Number
{
    public void Display(int Brr[], int iStart, int iEnd)
    {
        int iCnt = 0;

        System.out.println("Numbers from range "+iStart+" to "+iEnd+" are :");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] >= iStart) && (Brr[iCnt] <= iEnd))
            {
                System.out.print(Brr[iCnt]+"\t");
            }           
        }
      System.out.println();
    }
}
