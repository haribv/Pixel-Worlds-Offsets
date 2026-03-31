#pragma once
// ============================================================================
// Pixel Worlds - offsets.h
// Auto-extracted from IL2CPP dump.cs
// Generated: 2026-03-31
// Target: Assembly-CSharp.dll (Image 0)
// ============================================================================

namespace Offsets
{
    // ========================================================================
    // Player : MonoBehaviour  (TypeDefIndex: 1406)
    // The local/remote player MonoBehaviour attached to each player GameObject
    // ========================================================================
    namespace Player
    {
        constexpr auto myGameObject          = 0x20;  // GameObject
        constexpr auto myTransform           = 0x28;  // Transform
        constexpr auto wrapper               = 0x30;  // GameObject
        constexpr auto wrapperDirectionScale = 0x38;  // Transform
        constexpr auto uiWrapper             = 0x40;  // Transform
        constexpr auto myPlayerData          = 0x58;  // PlayerData
        constexpr auto isDeadTimeCounter     = 0x60;  // float
        constexpr auto isLocalPlayer         = 0x64;  // bool
        constexpr auto allowedToResurrect    = 0x65;  // bool
        constexpr auto isDead                = 0x66;  // bool
        constexpr auto isResetDoneAfterDying = 0x67;  // bool
        constexpr auto isWaitingDeath        = 0x68;  // bool
        constexpr auto waitingRespawn        = 0x69;  // bool
        constexpr auto playerNameGameObject  = 0x70;  // GameObject

        // --- Movement ---
        constexpr auto jumpMode              = 0x8C;  // PlayerJumpMode (enum/int)
        constexpr auto isContinuesJumping    = 0x90;  // bool
        constexpr auto isInFog               = 0x93;  // bool
        constexpr auto isSwimming            = 0x94;  // bool
        constexpr auto velocityYDownAdvance  = 0x98;  // float
        constexpr auto maxRocketJumpHeight   = 0xA8;  // float
        constexpr auto maxRocketVelocityY    = 0xAC;  // float
        constexpr auto normalizedHorizSpeed  = 0xC0;  // float
        constexpr auto maxXVelocity          = 0xCC;  // float
        constexpr auto maxFallVelocity       = 0xD0;  // float
        constexpr auto runSpeed              = 0xD4;  // float
        constexpr auto runSpeedPoisonedMult  = 0xD8;  // float
        constexpr auto gravity               = 0xDC;  // float
        constexpr auto groundDamping         = 0xE0;  // float
        constexpr auto jumpNormalHeight      = 0xE4;  // float
        constexpr auto jumpHeight            = 0xE8;  // float
        constexpr auto rocketFuelConsSpeed   = 0xEC;  // float
        constexpr auto inAirDamping          = 0xF0;  // float
        constexpr auto jumpMinHeight         = 0xF4;  // float
        constexpr auto rocketFuel            = 0xF8;  // float
        constexpr auto fullRocketFuel        = 0x120; // float
        constexpr auto rocketFuelRegenSpeed  = 0x130; // float
        constexpr auto airResistance         = 0x140; // float
        constexpr auto jumpCounter           = 0x150; // int
        constexpr auto canUseRocket          = 0x168; // bool
        constexpr auto canUseMountFlying     = 0x169; // bool
        constexpr auto velocity              = 0x170; // Vector3
        constexpr auto deltaMovement         = 0x17C; // Vector3

        // --- Oxygen ---
        constexpr auto oxygenRegenSpeed      = 0x19C; // float
        constexpr auto oxygenConsumSpeed     = 0x1A4; // float
        constexpr auto oxygen                = 0x1A8; // float

        // --- Bounce/Knockback ---
        constexpr auto bounceSphereForce     = 0x1D8; // float
        constexpr auto windYDirection        = 0x200; // float
        constexpr auto windXDirection        = 0x204; // float

        // --- Rocket/Mount ---
        constexpr auto isRocketActive        = 0x20D; // bool
        constexpr auto isMountFlyingActive   = 0x20E; // bool
        constexpr auto isInvertedControls    = 0x20F; // bool

        // --- Input Buttons ---
        constexpr auto fishingState          = 0x210; // FishingState (int)
        constexpr auto leftButtonDown        = 0x222; // bool
        constexpr auto leftButton            = 0x223; // bool
        constexpr auto leftButtonUp          = 0x224; // bool
        constexpr auto rightButton           = 0x225; // bool
        constexpr auto rightButtonDown       = 0x226; // bool
        constexpr auto rightButtonUp         = 0x227; // bool
        constexpr auto jumpButtonDown        = 0x228; // bool
        constexpr auto jumpButton            = 0x229; // bool
        constexpr auto jumpButtonUp          = 0x22A; // bool
        constexpr auto useButtonDown         = 0x22B; // bool
        constexpr auto useButton             = 0x22C; // bool
        constexpr auto useButtonUp           = 0x22D; // bool
        constexpr auto isWarping             = 0x234; // bool
        constexpr auto justWarped            = 0x235; // bool
        constexpr auto isClickToUseFist      = 0x236; // bool

        // --- Collider ---
        constexpr auto playerBoxCollider2D   = 0x248; // BoxCollider2D
        constexpr auto playerBoxColliderSize = 0x250; // Vector2
        constexpr auto playerCharCtrl2D      = 0x258; // CharacterController2D

        // --- Map Position ---
        constexpr auto currentPlayerPosition      = 0x26C; // Vector3
        constexpr auto currentPlayerMapPoint       = 0x288; // Vector2i
        constexpr auto currentServerPlayerMapPoint = 0x290; // Vector2i

        // --- Health Bar ---
        constexpr auto healthBarParentGO     = 0xAC8; // GameObject
        constexpr auto healthBarTransform    = 0xAE0; // Transform

        // --- Oxygen Bar ---
        constexpr auto oxygenBarParentGO     = 0xB08; // GameObject

        // --- Battle ---
        constexpr auto battleStateInLastMP   = 0xCE0; // World.BattleState

        // --- Player Name ---
        constexpr auto playerNameTMP         = 0xA58; // TextMeshPro
        constexpr auto activeSpeechBubble    = 0xA68; // SpeechBubble

        // --- Misc ---
        constexpr auto isAwakeDone           = 0xDD8; // bool
        constexpr auto isStartDone           = 0xDD9; // bool
        constexpr auto setPlayerRenderOrder  = 0xE50; // bool
        constexpr auto playerRenderOrderLvl  = 0xE54; // int

        // --- RVA Methods ---
        namespace Methods
        {
            constexpr auto GetTransform       = 0x333830; // Transform GetTransform()
            constexpr auto SetIsLocalPlayer   = 0x658330; // void SetIsLocalPlayer(bool)
            constexpr auto GetIsLocalPlayer   = 0x658340; // bool GetIsLocalPlayer()
            constexpr auto GetVelocity        = 0x658350; // Vector3 GetVelocity()
            constexpr auto SetVelocity        = 0x658370; // void SetVelocity(Vector3)
            constexpr auto GetRunSpeed        = 0x673DE0; // float GetRunSpeed()
            constexpr auto GetRocketFuel      = 0x673DF0; // float GetRocketFuel()
            constexpr auto GetRocketFuelMax   = 0x673E10; // float GetRocketFuelMax()
            constexpr auto IsRocketActive     = 0x673E20; // bool IsRocketActive()
            constexpr auto IsGrounded         = 0x6792A0; // bool IsGrounded()
            constexpr auto GetPlayerCenter    = 0x6793A0; // Vector3 GetPlayerCenterPoint()
            constexpr auto GetPlayerMapPoint  = 0x6794D0; // Vector2i GetPlayerMapPoint()
            constexpr auto IsInvertedControls = 0x679C00; // bool IsInvertedControls()
            constexpr auto StopPlayer         = 0x67A990; // void StopPlayer()
            constexpr auto DeathHelper        = 0x6729F0; // void DeathHelper()
            constexpr auto SetPlayerRenderOrd = 0x67B570; // void SetPlayerRenderOrder(int)
            constexpr auto DropItems          = 0x678A70; // int DropItems(InventoryKey, short)
            constexpr auto TrashItems         = 0x678BA0; // int TrashItems(InventoryKey, short)
            constexpr auto Awake              = 0x65E560; // void Awake()
            constexpr auto Start              = 0x65E7E0; // void Start()
            constexpr auto Update             = 0x6638C0; // void Update()
            constexpr auto FixedUpdate        = 0x66A500; // void FixedUpdate()
            constexpr auto CheckMapPointChange = 0x6725F0; // void CheckMapPointChange()
            constexpr auto SendMovementOrPing  = 0x672850; // void SendMovementOrPingToServerIfNeeded()
        }
    }

    // ========================================================================
    // PlayerData (TypeDefIndex: 1005)
    // Stores player inventory, gems, health, admin status, XP, etc.
    // ========================================================================
    namespace PlayerData
    {
        constexpr auto cameraZoomLevel       = 0x10;  // CameraZoomLevel (enum)
        constexpr auto cameraZoomValue       = 0x14;  // float
        constexpr auto pendingBC             = 0x18;  // int (ByteCoins pending)
        constexpr auto bc                    = 0x1C;  // int (ByteCoins)
        constexpr auto gems                  = 0x20;  // int
        constexpr auto worldClientSpecial    = 0x28;  // WorldClientSpecialData
        constexpr auto isPlayerBanned        = 0x30;  // bool
        constexpr auto countryCode           = 0x32;  // short
        constexpr auto banEndDate            = 0x38;  // DateTime
        constexpr auto banUniversalReason    = 0x40;  // string
        constexpr auto playerId              = 0x70;  // string
        constexpr auto timeNextPlaceBlock    = 0x78;  // DateTime
        constexpr auto timeNextHit           = 0x80;  // DateTime
        constexpr auto gender                = 0x68;  // PlayerData.Gender (enum)
        constexpr auto accountAge            = 0x58;  // DateTime
        constexpr auto vipEndTime            = 0x60;  // DateTime

        // --- Statistics ---
        constexpr auto statisticsList        = 0xE8;  // List<int>
        constexpr auto nameChangeCounter     = 0xF0;  // int
        constexpr auto playerBuffType        = 0xF4;  // int
        constexpr auto passiveEffects        = 0xFC;  // int
        constexpr auto playerBuffEndTime     = 0x100; // DateTime
        constexpr auto activePerks           = 0x108; // List<int>

        // --- Cosmetics ---
        constexpr auto skinColorIndex        = 0x1A8; // int
        constexpr auto skinColorBeforeOverrd = 0x1AC; // int
        constexpr auto defaultFaceAnimIndex  = 0x1B0; // int
        constexpr auto currentWorldType      = 0x1C8; // WorldType (enum)
        constexpr auto familiarBlockType     = 0x2E0; // World.BlockType
        constexpr auto familiarName          = 0x2E8; // string
        constexpr auto playerCostumeType     = 0x2F4; // PlayerCostumeType (enum)
        constexpr auto hotSpotsBlockTypes    = 0x300; // World.BlockType[]

        // --- Admin / Mod ---
        constexpr auto showOnlineStatus      = 0x1CC; // bool
        constexpr auto showLocation          = 0x1CD; // bool
        constexpr auto isTrustedPlayer       = 0x1CE; // bool
        constexpr auto modGoThroughDoors     = 0x1CF; // bool
        constexpr auto adminGoThroughDoors   = 0x1D0; // bool
        constexpr auto adminWantsSummoned    = 0x1D1; // bool
        constexpr auto adminWantsEditWorld   = 0x1D2; // bool
        constexpr auto adminGhostMode        = 0x1D3; // bool
        constexpr auto adminIgnorePortals    = 0x1D4; // bool
        constexpr auto adminUndercoverMode   = 0x1D5; // bool
        constexpr auto adminNoobMode         = 0x1D6; // bool
        constexpr auto adminShowKickBanInfo  = 0x1D7; // bool
        constexpr auto playerAdminStatus     = 0x288; // PlayerData.AdminStatus (enum)

        // --- Health ---
        constexpr auto health                = 0x320; // int
        constexpr auto healTime              = 0x328; // DateTime
        constexpr auto amountHealedThisLife  = 0x330; // int
        constexpr auto tempMaxHitPointsAdd   = 0x334; // int

        // --- Clan ---
        constexpr auto clanMemberRank        = 0x338; // ClanMemberRank (enum)
        constexpr auto clanFaction           = 0x33C; // ClanFaction (enum)
        constexpr auto clanName              = 0x340; // string
        constexpr auto clanTag               = 0x348; // string
        constexpr auto clanId                = 0x350; // int
        constexpr auto currentClanLevel      = 0x358; // int
        constexpr auto clanMemberLevel       = 0x35C; // int
        constexpr auto clanMemberXP          = 0x360; // int

        // --- XP / Level ---
        constexpr auto xpAmount              = 0x36C; // int
        constexpr auto xpLevel               = 0x370; // int

        // --- Inventory ---
        constexpr auto inventorySlots        = 0x374; // short
        constexpr auto inventory             = 0x378; // Dictionary<int, short>
        constexpr auto inventoryData         = 0x380; // Dictionary<int, InventoryItemBase>
        constexpr auto beltItem1             = 0x388; // PlayerData.InventoryKey
        constexpr auto bankSlots             = 0x398; // short
        constexpr auto deathCounter          = 0x39C; // int

        // --- Quests ---
        constexpr auto currentQuests         = 0x1C0; // List<PlayerData.Quest>
        constexpr auto favoriteWorldList     = 0x290; // List<string>
    }

    // ========================================================================
    // World (TypeDefIndex: 1528)
    // Contains the world map, blocks, collectables, etc.
    // ========================================================================
    namespace World
    {
        constexpr auto worldLock             = 0x10;  // object
        constexpr auto worldBackground       = 0x28;  // World.LayerBackgroundType
        constexpr auto worldWeatherType      = 0x2C;  // World.WeatherType
        constexpr auto worldLightingType     = 0x30;  // World.LightingType
        constexpr auto worldBlockBGLayer     = 0x38;  // LayerBlockBackground[][]
        constexpr auto worldBlockLayer       = 0x40;  // LayerBlock[][]
        constexpr auto worldBlockWaterLayer  = 0x48;  // LayerBlock[][]
        constexpr auto worldBlockWiringLayer = 0x50;  // LayerWiring[][]
        constexpr auto worldItemsData        = 0x60;  // WorldItemBase[][]
        constexpr auto lockWorldDataHelper   = 0x68;  // ILockWorld
        constexpr auto worldID               = 0xD0;  // string
        constexpr auto worldName             = 0xD8;  // string
        constexpr auto worldSizeX            = 0xE0;  // int
        constexpr auto worldSizeY            = 0xE4;  // int
        constexpr auto bedrockRows           = 0xE8;  // int
        constexpr auto playerStartPosition   = 0xF0;  // Vector2i
        constexpr auto playerSpawnPoint      = 0xF8;  // Vector2i
        constexpr auto musicIndex            = 0x100; // int
        constexpr auto worldLayoutType       = 0x110; // World.WorldLayoutType
        constexpr auto worldType             = 0x114; // WorldType
        constexpr auto backgroundPosX        = 0x118; // float
        constexpr auto backgroundPosY        = 0x11C; // float
        constexpr auto worldBoundsTopX       = 0x120; // float
        constexpr auto worldBoundsTopY       = 0x124; // float
        constexpr auto worldBoundsRightX     = 0x128; // float
        constexpr auto worldBoundsRightY     = 0x12C; // float
        constexpr auto worldBoundsBottomX    = 0x130; // float
        constexpr auto worldBoundsBottomY    = 0x134; // float
        constexpr auto worldBoundsLeftX      = 0x138; // float
        constexpr auto worldBoundsLeftY      = 0x13C; // float
        constexpr auto currentActiveEvent    = 0x144; // WorldRandomEventType
        constexpr auto inventoryId           = 0x148; // int
        constexpr auto worldItemId           = 0x14C; // int
        constexpr auto collectables          = 0x150; // List<CollectableData>
        constexpr auto worldRatings          = 0x160; // List<World.RatingPair>
        constexpr auto currentWorldTag       = 0x190; // WorldTag
        constexpr auto reviveList            = 0x198; // Dictionary<ReviveKey, ReviveData>
        constexpr auto playerMaxDeathsCount  = 0x214; // int
        constexpr auto gravityMode           = 0x218; // GravityMode (enum)

        // --- RVA Methods ---
        namespace Methods
        {
            constexpr auto GetBlockType      = 0x7964D0; // World.BlockType GetBlockType(Vector2i)
            constexpr auto GetBlockWaterType = 0x796650; // World.BlockType GetBlockWaterType(Vector2i)
            constexpr auto GetBlockBGType    = 0x796110; // World.BlockType GetBlockBackgroundType(Vector2i)
            constexpr auto IsBattleOn        = 0x7920C0; // bool IsBattleOn(Vector2i)
            constexpr auto GetBattleState    = 0x792370; // World.BattleState GetBattleState(Vector2i)
            constexpr auto GetBackgroundType = 0x796110; // World.BlockType (via enum cast)
            constexpr auto SetBlock          = 0x798900; // bool SetBlock(BlockType, int, int, ...)
            constexpr auto SetBlockBG        = 0x7981D0; // bool SetBlockBackground(...)
            constexpr auto SetBlockWater     = 0x79C7A0; // bool SetBlockWater(...)
            constexpr auto IsMapPointInWorld = 0x79E3E0; // bool IsMapPointInWorld(Vector2i)
            constexpr auto InitWorld         = 0x78A930; // void InitWorld(...)
            constexpr auto ReviveObjects     = 0x7A4140; // void ReviveObjects()
            constexpr auto GetPlayerSpawnPos = 0x796950; // Vector2i GetPlayerSpawnPosition()
            constexpr auto HitBlock          = 0x79F550; // bool HitBlock(...)
            constexpr auto AddCollectable    = 0x7A51E0; // CollectableData AddCollectable(...)
        }
    }

    // ========================================================================
    // WorldController : MonoBehaviour (TypeDefIndex: 1561)
    // Main controller that ties World + Player + Rendering together
    // ========================================================================
    namespace WorldController
    {
        constexpr auto myTransform           = 0x20;  // Transform
        constexpr auto worldRendering        = 0x30;  // WorldRendering
        constexpr auto world                 = 0x38;  // World
        constexpr auto player                = 0x40;  // Player
        constexpr auto touchIndicatorPrefab  = 0x48;  // GameObject
        constexpr auto playerPrefab          = 0x58;  // GameObject
        constexpr auto collectableBlockPref  = 0x60;  // GameObject
        constexpr auto collectableGemPref    = 0x70;  // GameObject
        constexpr auto fogOfWar              = 0x360; // FogOfWar
        constexpr auto currentSelectedBlock  = 0x4A4; // World.BlockType
        constexpr auto currentInvItemType    = 0x4A8; // PlayerData.InventoryItemType
        constexpr auto currentCollectables   = 0x4C0; // List<Collectable>
        constexpr auto selectedTool          = 0x580; // WorldController.SelectedTool
        constexpr auto spirit                = 0x5B0; // Spirit
        constexpr auto isSpeedHackDetected   = 0x708; // bool
        constexpr auto aiEnemyMonoBehaviours = 0x710; // Dictionary<int, AIEnemyMonoBehaviourBase>
        constexpr auto useFogOfWar           = 0x7C8; // bool
        constexpr auto weatherParticleSystem = 0x7F8; // ParticleSystem

        // --- RVA Methods ---
        namespace Methods
        {
            constexpr auto Awake             = 0x7C9660; // void Awake()
            constexpr auto Start             = 0x7C96D0; // void Start()
            constexpr auto Update            = 0x7CB1C0; // void Update()
            constexpr auto FixedUpdate       = 0x7CBDC0; // void FixedUpdate()
            constexpr auto InitWorld         = 0x7CBDF0; // void InitWorld()
            constexpr auto LocalPlayerReady  = 0x7D02B0; // void LocalPlayerReadyToPlay()
        }
    }

    // ========================================================================
    // CharacterController2D : MonoBehaviour (Namespace: Prime31)
    // Handles 2D physics movement, collision states
    // ========================================================================
    namespace CharacterController2D
    {
        constexpr auto ignoreOneWayPlatforms = 0x40;  // bool
        constexpr auto skinWidth             = 0x44;  // float
        constexpr auto platformMask          = 0x48;  // LayerMask
        constexpr auto triggerMask           = 0x4C;  // LayerMask
        constexpr auto oneWayPlatformMask    = 0x50;  // LayerMask
        constexpr auto slopeLimit            = 0x54;  // float
        constexpr auto jumpingThreshold      = 0x58;  // float
        constexpr auto totalHorizontalRays   = 0x68;  // int
        constexpr auto totalVerticalRays     = 0x6C;  // int
        constexpr auto myTransform           = 0x78;  // Transform
        constexpr auto boxCollider           = 0x80;  // BoxCollider2D
        constexpr auto rigidBody2D           = 0x88;  // Rigidbody2D
        constexpr auto collisionState        = 0x90;  // CharacterCollisionState2D
        constexpr auto velocity              = 0x98;  // Vector3

        // --- CharacterCollisionState2D sub-struct ---
        namespace CollisionState
        {
            constexpr auto right               = 0x10; // bool
            constexpr auto left                = 0x11; // bool
            constexpr auto above               = 0x12; // bool
            constexpr auto below               = 0x13; // bool (isGrounded)
            constexpr auto becameGroundedFrame = 0x14; // bool
            constexpr auto wasGroundedLast     = 0x15; // bool
            constexpr auto movingDownSlope     = 0x16; // bool
            constexpr auto slopeAngle          = 0x18; // float
        }

        // --- RVA Methods ---
        namespace Methods
        {
            constexpr auto get_isGrounded  = 0x1264300; // bool get_isGrounded()
            constexpr auto get_isHeaded    = 0x1264320; // bool get_isHeaded()
            constexpr auto get_isRighted   = 0x1264340; // bool get_isRighted()
            constexpr auto get_isLefted    = 0x1264360; // bool get_isLefted()
            constexpr auto move            = 0x12645F0; // void move(Vector3, bool)
            constexpr auto warpToGrounded  = 0x12650B0; // void warpToGrounded()
        }
    }

    // ========================================================================
    // ChatClient : MonoBehaviour (TypeDefIndex: 522)
    // Handles chat messaging
    // ========================================================================
    namespace ChatClient
    {
        constexpr auto incomingChatMessages  = 0x20;  // Queue<ChatMessage>
        constexpr auto incomingClanMessages  = 0x28;  // Queue<ChatMessage>

        // Static fields (relative to class static base)
        constexpr auto storedMsgsForWorldChg = 0x0;   // static Queue<ChatMessage>
        constexpr auto storedClanMsgs        = 0x8;   // static Queue<ChatMessage>

        namespace Methods
        {
            constexpr auto IsConnected       = 0x30CAD0; // bool IsConnected()
            constexpr auto Start             = 0x117FE30;
        }
    }

    // ========================================================================
    // ChatMessage (TypeDefIndex: 524)
    // Individual chat message data
    // ========================================================================
    namespace ChatMessage
    {
        constexpr auto channelType           = 0x10;  // int (ChannelTypes enum)
        constexpr auto nick                  = 0x18;  // string
        constexpr auto userID                = 0x20;  // string
        constexpr auto channel               = 0x28;  // string
        constexpr auto message               = 0x30;  // string
        constexpr auto time                  = 0x38;  // DateTime

        // ChannelTypes enum values
        enum ChannelTypes : int
        {
            LOCAL          = 0,
            GLOBAL         = 1,
            FRIEND_MESSAGE = 2,
            FRQ_MESSAGE    = 3,
            CLAN           = 4,
            CHANNEL_COUNT  = 5,
            SERVER_MESSAGE = 6,
            PET_COMMAND    = 7
        };
    }

    // ========================================================================
    // AIEnemyMonoBehaviourBase : MonoBehaviour (TypeDefIndex: 20)
    // Base class for all AI enemy visual representations
    // ========================================================================
    namespace AIEnemyMonoBehaviourBase
    {
        constexpr auto myTransform           = 0x20;  // Transform
        constexpr auto myGameObject          = 0x28;  // GameObject
        constexpr auto myCollider            = 0x30;  // Collider2D
        constexpr auto directionWrapperTfm   = 0x38;  // Transform
        constexpr auto direction             = 0x58;  // Vector3
        constexpr auto healthBarMinScale     = 0x64;  // Vector3
        constexpr auto healthBarOrigScale    = 0x70;  // Vector3
        constexpr auto healthBarMaxScale     = 0x7C;  // Vector3
        constexpr auto healthBarParentGO     = 0x88;  // GameObject
        constexpr auto healthBarTransform    = 0x90;  // Transform
        constexpr auto speedCorrection       = 0x98;  // float
        constexpr auto wantedPosition        = 0xC4;  // Vector3
        constexpr auto serverAccuratePos     = 0xD0;  // Vector3
        constexpr auto wantedAccuratePos     = 0xDC;  // Vector3
        constexpr auto maxDistanceTooFar     = 0x108; // float
        constexpr auto aiBase                = 0x118; // AIBase
        constexpr auto aiEnemyAnimator       = 0x120; // AIEnemyAnimator
        constexpr auto currentAnimation      = 0x128; // AIEnemyAnimationAnimationNames
        constexpr auto spriteGameObjects     = 0x160; // GameObject[]
        constexpr auto spriteRenderers       = 0x170; // SpriteRenderer[]
        constexpr auto isActive              = 0x1BC; // bool
    }

    // ========================================================================
    // AIEnemies (static class) (TypeDefIndex: 10)
    // Static helpers for AI enemy interactions
    // ========================================================================
    namespace AIEnemies
    {
        // Static fields
        constexpr auto hitAIEnemyByBtnMono   = 0x0;   // static AIEnemyMonoBehaviourBase
        constexpr auto hitAIEnemyByBtnPosX   = 0x8;   // static float
        constexpr auto nearEnoughAIEnemyMono = 0x10;  // static AIEnemyMonoBehaviourBase
        constexpr auto nearEnoughAIEnemyDist = 0x18;  // static float

        namespace Methods
        {
            constexpr auto PlayerDyingExplosion = 0x363F50;
            constexpr auto HitAIEnemy           = 0x364440;
            constexpr auto HitAIEnemyByButton   = 0x3648C0;
            constexpr auto SetAIEnemyHealth     = 0x365B40;
            constexpr auto GetAIEnemyWorldPos   = 0x366790;
            constexpr auto GetAIEnemyCenterPos  = 0x366A00;
            constexpr auto FlipAIEnemyRight     = 0x3672A0;
            constexpr auto FlipAIEnemyLeft      = 0x367440;
        }
    }

    // ========================================================================
    // PixelPerfectCamera : MonoBehaviour (TypeDefIndex: 8)
    // Camera controller for pixel-perfect rendering
    // ========================================================================
    namespace PixelPerfectCamera
    {
        constexpr auto fitType               = 0x20;  // PixelPerfectFitType
        constexpr auto targetPixelHeight     = 0x24;  // int
        constexpr auto parallaxLayerCount    = 0x28;  // int
        constexpr auto cameraZoom            = 0x2C;  // int
        constexpr auto pixelatedPostProcess  = 0x30;  // bool
        constexpr auto subpixelOffset        = 0x3C;  // Vector2
        constexpr auto pixelZoomMode         = 0x44;  // PixelPerfectZoomMode
        constexpr auto camera_               = 0x78;  // Camera

        namespace Methods
        {
            constexpr auto get_normalCamera  = 0x361EF0;
            constexpr auto CalcPixelPerfSize = 0x3621E0;
            constexpr auto CalcPixelPerfPos  = 0x362660;
        }
    }

    // ========================================================================
    // PixelPerfect (static class) (TypeDefIndex: 3)
    // Global pixel-perfect settings
    // ========================================================================
    namespace PixelPerfect
    {
        // Static fields
        constexpr auto pixelsPerUnit         = 0x0;   // static float
        constexpr auto mainCamera_           = 0x8;   // static PixelPerfectCamera

        namespace Methods
        {
            constexpr auto get_worldPixelSize = 0x360350;
            constexpr auto get_mainCamera     = 0x3603B0;
            constexpr auto FitToGrid          = 0x360580;
        }
    }

    // ========================================================================
    // FogOfWar : MonoBehaviour (TypeDefIndex: 1592)
    // Fog of war system
    // ========================================================================
    namespace FogOfWar
    {
        // Use WorldController::fogOfWar (0x360) to access
        // Use WorldController::useFogOfWar (0x7C8) to toggle
    }

    // ========================================================================
    // BlockDamage : MonoBehaviour (TypeDefIndex: 530)
    // Visual block damage effect
    // ========================================================================
    namespace BlockDamage
    {
        // Located at line 15662 in dump.cs
    }

    // ========================================================================
    // WearableAnimatorKukouri : MonoBehaviour (TypeDefIndex: 506)
    // Located at line 14451 in dump.cs
    // ========================================================================
    namespace WearableAnimator
    {
        // Player wearable animation controller
    }

    // ========================================================================
    // Useful Type Sizes (for pointer arithmetic)
    // ========================================================================
    namespace TypeSizes
    {
        constexpr auto Il2CppObject  = 0x10; // base Il2Cpp managed object header
        constexpr auto MonoBehaviour = 0x18; // MonoBehaviour base (before fields)
        // Note: MonoBehaviour fields start at 0x18 in metadata,
        // but dump.cs shows first field typically at 0x20
        // This is because Il2Cpp Object header (0x10) + Unity native ptr (0x8) + padding
    }

    // ========================================================================
    // Useful Enums
    // ========================================================================
    namespace Enums
    {
        enum PlayerJumpMode : int
        {
            // Parsed from dump context
        };

        enum AdminStatus : int
        {
            // PlayerData.AdminStatus
        };

        enum GravityMode : int
        {
            // World.GravityMode
        };

        enum WorldLayoutType : int
        {
            // World.WorldLayoutType
        };
    }
}
