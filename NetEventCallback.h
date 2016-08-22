#pragma once

#include <raknet/RakNetTypes.h>

class Player;
class ServerToClientHandshakePacket;
class PlayStatusPacket;
class TakeItemEntityPacket;
class SetPlayerGameTypePacket;
class LevelEventPacket;
class CraftingDataPacket;
class UpdateAttributesPacket;
class TelemetryEventPacket;
class ClientboundMapItemDataPacket;
class ChunkRadiusUpdatedPacket;
class ReplaceSelectedItemPacket;
class AddItemPacket;
class RespawnPacket;
class DisconnectPacket;
class SetTimePacket;
class StartGamePacket;
class AddItemEntityPacket;
class AddPaintingPacket;
class AddEntityPacket;
class AddPlayerPacket;
class RemoveEntityPacket;
class UpdateBlockPacket;
class ExplodePacket;
class BlockEventPacket;
class MobEffectPacket;
class SetEntityDataPacket;
class SetEntityMotionPacket;
class SetHealthPacket;
class SetEntityLinkPacket;
class SetSpawnPositionPacket;
class HurtArmorPacket;
class ContainerOpenPacket;
class ContainerSetDataPacket;
class AdventureSettingsPacket;
class FullChunkDataPacket;
class SetDifficultyPacket;
class ChangeDimensionPacket;
class PlayerListPacket;
class LoginPacket;
class ClientToServerHandshakePacket;
class TextPacket;
class MoveEntityPacket;
class MovePlayerPacket;
class RiderJumpPacket;
class RemoveBlockPacket;
class EntityEventPacket;
class MobEquipmentPacket;
class MobArmorEquipmentPacket;
class InteractPacket;
class UseItemPacket;
class PlayerActionPacket;
class DropItemPacket;
class ItemFrameDropItemPacket;
class ContainerClosePacket;
class ContainerSetSlotPacket;
class ContainerSetContentPacket;
class CraftingEventPacket;
class AnimatePacket;
class BlockEntityDataPacket;
class PlayerInputPacket;
class SpawnExperienceOrbPacket;
class RequestChunkRadiusPacket;
class MapInfoRequestPacket;

class NetEventCallback {
public:
	virtual void onPlayerReady(Player &);
	virtual ~NetEventCallback();
};