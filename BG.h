#pragma once
#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
class BG {
private:
	uint32_t textureHandle_ = 0;
	Sprite* sprite_ = nullptr;

public:
	~BG();
	void Initialize();
	void Draw();
};
