#pragma once

#define REGISTER_MESSAGE_SENDER(MESSAGE_TYPE) \
		_##MESSAGE_TYPE.sendMessages(messageStorage);

#define REGISTER_OUTGOING_MESSAGE_CANCEL(MESSAGE_TYPE) \
		_##MESSAGE_TYPE.clearOutgoingMessages();

#define REGISTER_MESSAGE_CLEARER(MESSAGE_TYPE) \
		_##MESSAGE_TYPE.clearSentMessages();

#define REGISTER_MESSAGE(MESSAGE_TYPE) \
private: \
	MessageBuffer<##MESSAGE_TYPE> _##MESSAGE_TYPE; \
public: \
	void insertMessage(##MESSAGE_TYPE message) \
	{ \
		_##MESSAGE_TYPE.insertOutgoingMessage(message); \
	}

#define REGISTER_THREAD_SAFE_MESSAGE(MESSAGE_TYPE) \
private: \
	ThreadSafeMessageBuffer<##MESSAGE_TYPE> _##MESSAGE_TYPE; \
public: \
	void insertMessage(##MESSAGE_TYPE message) \
	{ \
		_##MESSAGE_TYPE.insertOutgoingMessage(message); \
	}

#define REGISTER_ALL_SENDER()\
	REGISTER_MESSAGE_SENDER(Message)\
	REGISTER_MESSAGE_SENDER(PlayerInputMessage)\
	REGISTER_MESSAGE_SENDER(TextMessage)\
	REGISTER_MESSAGE_SENDER(RelativeTransformMessage)\
	REGISTER_MESSAGE_SENDER(PlaySoundMessage)\
	REGISTER_MESSAGE_SENDER(PlayMovingSoundMessage)\
	REGISTER_MESSAGE_SENDER(StopSoundMessage)\
	REGISTER_MESSAGE_SENDER(ToggleGraphicsModuleMessage)\
	REGISTER_MESSAGE_SENDER(ApplyForceMessage)\
	REGISTER_MESSAGE_SENDER(MoveCameraRelativeToGameObjectMessage)\
	REGISTER_MESSAGE_SENDER(CollisionMessage)\
	REGISTER_MESSAGE_SENDER(PreparePaintSurfaceMessage)\
	REGISTER_MESSAGE_SENDER(PaintTrailForGameObjectMessage)\
	REGISTER_MESSAGE_SENDER(UpdatePositionMessage)\
	REGISTER_MESSAGE_SENDER(TextMeshMessage)\
	REGISTER_MESSAGE_SENDER(AddScoreHolderMessage)\
	REGISTER_MESSAGE_SENDER(ApplyImpulseMessage)\
	REGISTER_MESSAGE_SENDER(AbsoluteTransformMessage)\
	REGISTER_MESSAGE_SENDER(MoveGameObjectMessage)\
	REGISTER_MESSAGE_SENDER(ScaleGameObjectMessage)\
	REGISTER_MESSAGE_SENDER(RotateGameObjectMessage)\
	REGISTER_MESSAGE_SENDER(ToggleGameObjectMessage)\
	REGISTER_MESSAGE_SENDER(PlayAnimationMessage)\
	REGISTER_MESSAGE_SENDER(DebugLineMessage)\
	REGISTER_MESSAGE_SENDER(DebugSphereMessage)

#define REGISTER_ALL_CANCEL()\
	REGISTER_OUTGOING_MESSAGE_CANCEL(Message)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(PlayerInputMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(TextMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(RelativeTransformMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(PlaySoundMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(PlayMovingSoundMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(StopSoundMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(ToggleGraphicsModuleMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(ApplyForceMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(MoveCameraRelativeToGameObjectMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(CollisionMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(PreparePaintSurfaceMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(PaintTrailForGameObjectMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(UpdatePositionMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(TextMeshMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(AddScoreHolderMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(ApplyImpulseMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(AbsoluteTransformMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(MoveGameObjectMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(ScaleGameObjectMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(RotateGameObjectMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(ToggleGameObjectMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(PlayAnimationMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(DebugLineMessage)\
	REGISTER_OUTGOING_MESSAGE_CANCEL(DebugSphereMessage)

#define REGISTER_ALL_CLEAR()\
	REGISTER_MESSAGE_CLEARER(Message)\
	REGISTER_MESSAGE_CLEARER(PlayerInputMessage)\
	REGISTER_MESSAGE_CLEARER(TextMessage)\
	REGISTER_MESSAGE_CLEARER(RelativeTransformMessage)\
	REGISTER_MESSAGE_CLEARER(PlaySoundMessage)\
	REGISTER_MESSAGE_CLEARER(PlayMovingSoundMessage)\
	REGISTER_MESSAGE_CLEARER(StopSoundMessage)\
	REGISTER_MESSAGE_CLEARER(ToggleGraphicsModuleMessage)\
	REGISTER_MESSAGE_CLEARER(ApplyForceMessage)\
	REGISTER_MESSAGE_CLEARER(MoveCameraRelativeToGameObjectMessage)\
	REGISTER_MESSAGE_CLEARER(CollisionMessage)\
	REGISTER_MESSAGE_CLEARER(PreparePaintSurfaceMessage)\
	REGISTER_MESSAGE_CLEARER(PaintTrailForGameObjectMessage)\
	REGISTER_MESSAGE_CLEARER(UpdatePositionMessage)\
	REGISTER_MESSAGE_CLEARER(TextMeshMessage)\
	REGISTER_MESSAGE_CLEARER(AddScoreHolderMessage)\
	REGISTER_MESSAGE_CLEARER(ApplyImpulseMessage)\
	REGISTER_MESSAGE_CLEARER(AbsoluteTransformMessage)\
	REGISTER_MESSAGE_CLEARER(MoveGameObjectMessage)\
	REGISTER_MESSAGE_CLEARER(ScaleGameObjectMessage)\
	REGISTER_MESSAGE_CLEARER(RotateGameObjectMessage)\
	REGISTER_MESSAGE_CLEARER(ToggleGameObjectMessage)\
	REGISTER_MESSAGE_CLEARER(PlayAnimationMessage)\
	REGISTER_MESSAGE_CLEARER(DebugLineMessage)\
	REGISTER_MESSAGE_CLEARER(DebugSphereMessage)

#define REGISTER_ALL_MESSAGES()\
	REGISTER_MESSAGE(Message)\
	REGISTER_MESSAGE(PlayerInputMessage)\
	REGISTER_MESSAGE(TextMessage)\
	REGISTER_MESSAGE(RelativeTransformMessage)\
	REGISTER_MESSAGE(PlaySoundMessage)\
	REGISTER_MESSAGE(PlayMovingSoundMessage)\
	REGISTER_MESSAGE(StopSoundMessage)\
	REGISTER_MESSAGE(ToggleGraphicsModuleMessage)\
	REGISTER_MESSAGE(ApplyForceMessage)\
	REGISTER_MESSAGE(MoveCameraRelativeToGameObjectMessage)\
	REGISTER_MESSAGE(CollisionMessage)\
	REGISTER_MESSAGE(PreparePaintSurfaceMessage)\
	REGISTER_MESSAGE(PaintTrailForGameObjectMessage)\
	REGISTER_MESSAGE(UpdatePositionMessage)\
	REGISTER_THREAD_SAFE_MESSAGE(TextMeshMessage)\
	REGISTER_MESSAGE(AddScoreHolderMessage)\
	REGISTER_MESSAGE(ApplyImpulseMessage)\
	REGISTER_MESSAGE(AbsoluteTransformMessage)\
	REGISTER_MESSAGE(MoveGameObjectMessage)\
	REGISTER_MESSAGE(ScaleGameObjectMessage)\
	REGISTER_MESSAGE(RotateGameObjectMessage)\
	REGISTER_MESSAGE(ToggleGameObjectMessage)\
	REGISTER_MESSAGE(PlayAnimationMessage)\
	REGISTER_MESSAGE(DebugLineMessage)\
	REGISTER_MESSAGE(DebugSphereMessage)