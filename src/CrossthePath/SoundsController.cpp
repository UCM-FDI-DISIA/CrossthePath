#include "SoundsController.h"
#define _CRTDBG_MAP_ALLOC
#include "Entity.h"
#include "ComponentArguments.h"
#include <AudioManager.h>
#include "CAudioEmitter.h"
#include <SceneManager.h>

const std::string eden_ec::SoundsController::_id = "SOUND_CONTROLLER";

void eden_ec::SoundsController::Init(eden_script::ComponentArguments* args)
{
	_sounds.push_back(args->GetValueToString("PLAY"));
	_sounds.push_back(args->GetValueToString("ARROW"));
	_sounds.push_back(args->GetValueToString("EGG"));
	_sounds.push_back(args->GetValueToString("TROPHY"));

}

void eden_ec::SoundsController::Start() {
	eden::SceneManager::getInstance()->AddEntityToDontDestroyOnLoad(_ent,true);
	_audioEmitter = _ent->GetComponent<CAudioEmitter>();
}

void eden_ec::SoundsController::PlaySound(Sounds _s)
{
	_audioEmitter->ChangeClip(_sounds[_s]);
	_audioEmitter->Play();
}
