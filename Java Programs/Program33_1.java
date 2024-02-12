import java.util.*;

class Program33_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayDemo ad = new ArrayDemo();
        int iSize = 0;
        int iCnt = 0;
        int bRet = 0;

        System.out.println("How many elements you want to enter : ");
        iSize = sc.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        bRet = ad.Difference(Arr);
        System.out.println("Difference between Summation of odd elements and summation of even elements is : "+bRet);
    }
}

class ArrayDemo
{
    public int Difference(int Brr[])
    {
        int iCnt = 0;
        int iSumOdd = 0;
        int iSumEven = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] % 2) == 0)
            {
                iSumEven = iSumEven + Brr[iCnt];
            }
            else 
            {
                iSumOdd = iSumOdd + Brr[iCnt];
            }
        }
        return iSumEven - iSumOdd;
    }
}
