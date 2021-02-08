#include <TYRANT/Application.h>
extern Tyrant::GameApplication* Tyrant::CreateApplication();
Tyrant::GameApplication* Tyrant::GetApplication()
{
	static Tyrant::GameApplication* Application = Tyrant::CreateApplication();
	return Application;
}
int main()
{
	if (Tyrant::GetApplication())
	{
		Tyrant::GetApplication()->Run();
		delete Tyrant::GetApplication();
	}
	return 0;
}