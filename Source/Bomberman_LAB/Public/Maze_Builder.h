#pragma once  

#include "CoreMinimal.h"  
#include "UObject/Interface.h"  
#include "Maze_Builder.generated.h"  

UINTERFACE(MinimalAPI)  
class UMaze_Builder : public UInterface  
{  
  GENERATED_BODY()  
};  

class BOMBERMAN_LAB_API IMaze_Builder  
{  
	GENERATED_BODY()  

public:  
	// Pure virtual methods for the Builder  
	virtual void BuildWoods() = 0;  
	virtual void BuildConcrete() = 0;  
	virtual void BuildSteel() = 0;  
	virtual void BuildBrick() = 0;  
	virtual void FullMaze() = 0;
	virtual void BuildPuertas() = 0;
	virtual void BuildVidrios() = 0;
};