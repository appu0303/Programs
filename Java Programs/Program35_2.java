import java.util.*;

class Program35_2
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

        System.out.println("Enter number that you want to check : ");
        iNo = sc.nextInt();

        iRet = num.FirstOcc(Arr,iNo);
        
        System.out.println("Index of first occurence is : "+iRet);
    }
}

class Number
{
    public int FirstOcc(int Brr[], int iNo)
    {
        int iCnt = 0;
        int index = -1;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                index = iCnt;
                break;    
            }
           
        }
      return index;
    }
}
