/*
*		Test_Unit_Servomotor.c
*
*		Fichier contenant les test unitaires partie servomoteur
*
*		Auteur : Rémy Kaloustian
*
*		Dernière modification : 2/04/2015
*/


/*
	============Concernant les fonctions de test ===================================

	- RunAllTests lance tous les tests
	- Les autres fonctions de test renvoient 1 si tous les tests de la fonction marchent , 
			0 si un des tests de la fonction au minumum échoue.
*/

int Test_Servomotor()
{
	int works = 1;// variable qui confirme la validité, prend 0 si un test échoue

//========================Tests avec des int

	if(Servomotor(90) == 0)
	{
		printf("Servomotor --> Angle correct = WORKS\n");
	}
	else 
	{
		printf("Servomotor --> Angle correct = FAILS\n");
		works = 0;
	}

	if(Servomotor(2000000000) == -1)
	{
		printf("Servomotor --> Angle incorrect = WORKS\n");
	}
	else 
	{
		printf("Servomotor --> Angle incorrect = FAILS\n");
		works = 0;
	}

//========================Test avec des strings

	if(Servomotor("half") == 0)
	{
		printf("Servomotor --> String correct = WORKS\n");
	}
	else
	{
		printf("Servomotor --> String correct = FAILS\n");
		works = 0;
	}

	if(Servomotor("yo") == -1)
	{
		printf("Servomotor --> String correcte = WORKS\n");
	}
	else 
	{
		printf("Servomotor --> String incorrect = FAILS\n");
		works = 0;
	}

//========================Test avec des fonctions

	if(Servomotor(unknownFunction()) == -2)
	{
		printf("Servomotor --> Fonction inconnue en argument = WORKS \n");
	}
	else
	{
		printf("Servomotor --> Fonction inconnue en argument = FAILS \n");
		works = 0;
	}

	return works;
}//Test_Servomotor()
	


void RunAllTests()//Appelle toutes les fonctions de tests
{
//========================Test_Servomotor

	if(Test_Servomotor() == 1)
	{
		printf("Test_Servomotor --> All tests = WORKS\n" );
	}
	else if(Test_Servomotor() == 0)
	{
		printf("Test_Servomotor --> All tests = FAILS\n");
	}

}//RunAllTests


int int main(int argc, char const *argv[])
{
	RunAllTests();
	return 0;
}//main()