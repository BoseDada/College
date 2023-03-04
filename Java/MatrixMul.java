class MatrixMul
{
    public static void main(String args[])
    {
        int A1[][] = {{1,2,3},{4,5,6}};
        int A2[][] = {{7,8},{9,10},{11,12}};
        int pro[][];
        pro = new int[2][2];

        for (int i=0; i<2; i++)
        {
            for (int j=0; j<2; j++)
            {
                pro[i][j] = 0;
                for (int k=0; k<3; k++)
                {
                    pro[i][j] += (A1[i][k] * A2[k][j]);  
                }
            }
        }
        for (int i=0; i<2; i++)
        {
            for (int j=0; j<2; j++)
            {
                System.out.print(pro[i][j] + " "); 
            }
            System.out.println();
        }
    }
}