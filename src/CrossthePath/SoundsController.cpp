#include "SoundsController.h"
#include "Entity.h"
#include "ComponentArguments.h"
#include <AudioManager.h>
#include "CAudioEmitter.h"
#include <SceneManager.h>

const std::string ctp::SoundsController::_id = "SOUND_CONTROLLER";

void ctp::SoundsController::Init(eden_script::ComponentArguments* args)
{
	_sounds.push_back(args->GetValueToString("PLAY"));
	_sounds.push_back(args->GetValueToString("ARROW"));
	_sounds.push_back(args->GetValueToString("EGG"));
	_sounds.push_back(args->GetValueToString("TROPHY"));

}

void ctp::SoundsController::Start() {
	eden::SceneManager::getInstance()->AddEntityToDontDestroyOnLoad(_ent,true);
	_audioEmitter = _ent->GetComponent<eden_ec::CAudioEmitter>();
}

void ctp::SoundsController::PlaySound(Sounds _s)
{
	_audioEmitter->ChangeClip(_sounds[_s]);
	_audioEmitter->Play();
}
