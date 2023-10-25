#pragma once
#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
class Stage {
private:
	uint32_t textureHandle_ = 0;
	Model* model_ = nullptr;
	WorldTransform worldTransform_; 
	uint32_t GoaltextureHandle_ = 0;
	Model* Goalmodel_ = nullptr;
	WorldTransform GoalworldTransform_; 

public:
	~Stage();
	void Initialize();
	void Draw(const ViewProjection &viewProjection);
};
