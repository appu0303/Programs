import java.util.*;

class Program35_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Number num = new Number();
        int iSize = 0;
        int iNo = 0;
        int iCnt = 0;
        int iRet = 0;

        System.out.println("How many elements you want to enter : ");
        iSize = sc.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        iRet = num.Product(Arr);
        
        System.out.println("Product of all odd elements is : "+iRet);
    }
}

class Number
{
    public int Product(int Brr[])
    {
        int iMult = 1;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] % 2) != 0)
            {
                iMult = iMult * Brr[iCnt];
            }           
        }
      return iMult;
    }
}
