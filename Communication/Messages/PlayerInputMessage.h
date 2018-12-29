#pragma once

#include "../Message.h"
#include "../../Input/Recorders/InputRecorder.h"

class Player;

class PlayerInputMessage : public Message
{
public:
	PlayerInputMessage() : Message("", DUMMY_TYPE) {}
	PlayerInputMessage(const std::string& destinationName, Player* player, ButtonInputData data);
	~PlayerInputMessage();

	Player* player;
	ButtonInputData data;
};

