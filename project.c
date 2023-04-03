#include <stdio.h>
int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
    int total;
    printf("\n Welcome to the game\n");
    printf("> Press 7 for start the game\n");
    printf("> Press 0 for end the game\n\n");
    scanf("%d", &i);
    printf("\nLet's begin the game\n\n");

    if (i == 7)
    {
        
        printf("1. Who is the current Prime Minister of India ?\n");
        printf("  i. Sardar Ballav Vai Pattel\n");
        printf(" ii. Rahl Ghandhi\n");
        printf("iii. Indera Ghandhi\n");
        printf(" iv. Narendra Vai Damodar Das Modi\n");
        printf("> Answer : ");
        scanf("%d", &ans1);

        if (ans1 == 4)
        {
            point1 = point1 + 5;
            printf("Congratulation ! Your score = %d\n", point1);
        }
        else
        {
            printf("Oops !\n");
            point1 = point1 + 0;
            printf("Your score = %d", point1);
        }
        printf("\n");

        printf("2. Who is the Chief Minister of West Bengal ?\n");
        printf("  i. Mamta Banerjee\n");
        printf(" ii. Dev Adhikary\n");
        printf("iii. Partho Chatterjee\n");
        printf(" iv. Abhishek Banerjee\n");
        printf("> Answer : ");
        scanf("%d", &ans2);

        if (ans2 == 1)
        {
            point2 = point1 + 5;
            printf("Congratulation ! Your score = %d\n", point2);
        }
        else
        {
            printf("Oops !\n");
            point2 = point1 + 0;
            printf("Your score = %d", point2);
        }
        printf("\n");
        printf("3. What is the full form of RAM ?\n");
        printf("  i. Random Access Memory\n");
        printf(" ii. Read Only Memory\n");
        printf("iii. Random Anatomy Money\n");
        printf(" iv. Riksha Auto Memory\n");
        printf("> Answer : ");
        scanf("%d", &ans3);

        if (ans3 == 1)
        {
            point3 = point2 + 5;
            printf("Congratulation ! Your score = %d\n", point3);
        }
        else
        {
            printf("Oops !\n");
            point3 = point2 + 0;
            printf("Your score = %d", point3);
        }
        printf("\n");
        
        printf("4. Who is Rabindra Nath Tagore ?\n");
        printf("  i. Writer\n");
        printf(" ii. player\n");
        printf("iii. Sweemer\n");
        printf(" iv. Astrologist\n");
        printf("> Answer : ");
        scanf("%d", &ans4);

        if (ans4 == 1)
        {
            point4 = point3 + 5;
            printf("Congratulation ! Your score = %d\n", point4);
        }
        else
        {
            printf("Oops !\n");
            point4 = point3 + 0;
            printf("Your score = %d", point4);
        }
        printf("\n");
        printf("5. What is the National animal of india ?\n");
        printf("  i. Tiger\n");
        printf(" ii. Lion\n");
        printf("iii. Peacock\n");
        printf(" iv. Royal Bengal Tiger\n");
        printf("> Answer : ");
        scanf("%d", &ans5);

        if (ans5 == 1)
        {
            point5 = point4 + 5;
            printf("Congratulation ! Your score = %d\n", point5);
        }
        else
        {
            printf("Oops !\n");
            point5 = point4 + 0;
            printf("Your score = %d", point5);
        }
        printf("\n");

        total = point5;
        printf("Congratulation ! You have completed the quiz\n");
        printf("Your final Score = %d\n\n", total);
        printf("Thank you for playing the game!");
    }

    else
    {
        printf("You quite the game!\n\n");
        printf("Thank you!");
    }

    return 0;
}
