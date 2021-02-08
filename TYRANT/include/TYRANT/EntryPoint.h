#pragma once
extern Tyrant::GameApp* Tyrant::CreateGameApp();
int main()
{
	Tyrant::GameApp* gameApp = Tyrant::CreateGameApp();
	gameApp->Run();
	delete gameApp;
	return 0;
}