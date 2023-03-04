import java.util.*;

class Election
{
    public static void main(String args[])
    {
        int votes[] = {0,0,0,0,0,0};
        int vote = 10;
        while (vote > 0)
        {
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter vote: ");
            int cvote = sc.nextInt();
            if  (cvote == 1) votes[0] += 1;
            else if (cvote == 2) votes[1] += 1;
            else if (cvote == 3) votes[2] += 1;
            else if (cvote == 4) votes[3] += 1;
            else if (cvote == 5) votes[4] += 1;
            else votes[5] += 1;
            vote--;
        }
        for (int i=0; i<6; i++)
        {
            System.out.print(votes[i] + " ");
        }
    }
}