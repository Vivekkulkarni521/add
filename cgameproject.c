#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user, comp;
	int toss, tossR;
	int choice;
	int uruns = 0, cruns = 0;
	int bat;

	srand(time(0));

	printf("=== HAND CRICKET GAME ===\n");

	do
	{
		printf("Toss: 1.Head  2.Tail : ");
		scanf("%d", &toss);

		if (toss != 1 && toss != 2)
			printf("Invalid choice! Please enter 1 or 2.\n");

	} while (toss != 1 && toss != 2);

	tossR = rand() % 2 + 1;

	if (toss == tossR)
	{
		printf("You won toss\n");

		do
		{
			printf("Choose: 1.Bat  2.Bowl : ");
			scanf("%d", &choice);

			if (choice != 1 && choice != 2)
				printf("Invalid choice! Enter 1 or 2.\n");

		} while (choice != 1 && choice != 2);

		bat = (choice == 1) ? 1 : 2;
	}
	else
	{
		printf("Computer won toss\n");

		if (rand() % 2 + 1 == 1)
		{
			printf("Computer chooses Bowl\n");
			bat = 1;
		}
		else
		{
			printf("Computer chooses Bat\n");
			bat = 2;
		}
	}

	printf("\n--- First Innings ---\n");

	if (bat == 1)
	{
		printf("You Batting\n");

		while (1)
		{
			do
			{
				printf("Enter run (1-6): ");
				scanf("%d", &user);

				if (user < 1 || user > 6)
					printf("Invalid run! Enter 1 to 6 only.\n");

			} while (user < 1 || user > 6);

			comp = rand() % 6 + 1;
			printf("Computer bowled: %d\n", comp);

			if (user == comp)
			{
				printf("You are OUT!\n");
				break;
			}

			uruns += user;
			printf("Current Score: %d\n", uruns);
		}

		printf("Your score: %d\n", uruns);
	}
	else
	{
		printf("Computer Batting\n");

		while (1)
		{
			do
			{
				printf("Enter bowl (1-6): ");
				scanf("%d", &user);

				if (user < 1 || user > 6)
					printf("Invalid bowl! Enter 1 to 6 only.\n");

			} while (user < 1 || user > 6);

			comp = rand() % 6 + 1;
			printf("Computer played: %d\n", comp);

			if (user == comp)
			{
				printf("Computer OUT!\n");
				break;
			}

			cruns += comp;
		}

		printf("Computer score: %d\n", cruns);
	}

	printf("\n--- Second Innings ---\n");

	if (bat == 1)
	{
		printf("Computer Batting\n");

		while (cruns <= uruns)
		{
			do
			{
				printf("Enter bowl (1-6): ");
				scanf("%d", &user);

				if (user < 1 || user > 6)
					printf("Invalid bowl! Enter 1 to 6 only.\n");

			} while (user < 1 || user > 6);

			comp = rand() % 6 + 1;
			printf("Computer played: %d\n", comp);

			if (user == comp)
			{
				printf("Computer OUT!\n");
				break;
			}

			cruns += comp;
		}
	}
	else
	{
		printf("You Batting\n");

		while (uruns <= cruns)
		{
			do
			{
				printf("Enter run (1-6): ");
				scanf("%d", &user);

				if (user < 1 || user > 6)
					printf("Invalid run! Enter 1 to 6 only.\n");

			} while (user < 1 || user > 6);

			comp = rand() % 6 + 1;
			printf("Computer bowled: %d\n", comp);

			if (user == comp)
			{
				printf("You are OUT!\n");
				break;
			}

			uruns += user;
			printf("Current Score: %d\n", uruns);
		}
	}

	printf("\n--- Match Result ---\n");
	printf("Your Score     : %d\n", uruns);
	printf("Computer Score : %d\n", cruns);

	if (uruns > cruns)
		printf("🏆 You Win!\n");
	else if (uruns < cruns)
		printf("😢 Computer Wins!\n");
	else
		printf("🤝 Match Draw!\n");

	return 0;
}

