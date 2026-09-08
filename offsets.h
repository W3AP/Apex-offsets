#include <cstdint>
namespace offsets {
constexpr uintptr_t LocalPlayer  = 0x26781f8;
constexpr uintptr_t EntityList   = 0x5d5b618;
constexpr uintptr_t ViewMatrix   = 0x11a390;
constexpr uintptr_t ViewRender   = 0x44580a0;
constexpr uintptr_t ViewMatrixSub = 0x1b3bd0;
constexpr uintptr_t NameList     = 0x87dd320;
constexpr uintptr_t ObserverList         = 0x5d5d638;
constexpr uintptr_t ObserverSpecIdxOffset= 0x974;
constexpr uintptr_t EntityStride = 0x20;
constexpr uintptr_t EntityMax    = 1024;
namespace entity {
    constexpr uintptr_t m_iHealth           = 0x324;
    constexpr uintptr_t m_iMaxHealth        = 0x470;
    constexpr uintptr_t m_shieldHealth      = 0x190;
    constexpr uintptr_t m_shieldHealthMax   = 0x194;
    constexpr uintptr_t m_iTeamNum          = 0x334;
    constexpr uintptr_t m_teamMemberIndex   = 0x33c;
    constexpr uintptr_t m_vecAbsOrigin      = 0x16c;
    constexpr uintptr_t m_lifeState         = 0x698;
    constexpr uintptr_t m_iName             = 0x481;
    constexpr uintptr_t m_ModelName         = 0x30;
    constexpr uintptr_t m_nameIndex         = 0x38;
    constexpr uintptr_t NameListStride      = 24;
    constexpr uintptr_t m_iSignifierName    = 0x478;
    constexpr uintptr_t m_nModelIndex       = 0x60;
    constexpr uintptr_t m_playerIndex       = 0x38;
    constexpr uintptr_t m_customScriptInt   = 0x15e4;
    constexpr uintptr_t m_weaponNameIndex   = 0x15f0;
    constexpr uintptr_t m_itemFlavorGUID    = 0xd74;
    constexpr uintptr_t studioHdr           = 0x1000;
    constexpr uintptr_t m_bClientSideRagdoll= 0x1f;
    constexpr uintptr_t camera_origin       = 0x1fac;
    constexpr uintptr_t m_viewangle         = 0x25f0;
    constexpr uintptr_t m_bZooming          = 0x1cc1;
    constexpr uintptr_t m_primaryWeaponHandle = 0x1998;
    constexpr uintptr_t m_selectedWeapons     = 0x19d0;
    constexpr uintptr_t lastVisibleTime      = 0x1a74;
    constexpr uintptr_t m_bleedoutState      = 0x27d0;
    constexpr uintptr_t m_flProjectileSpeed = 0x28e0;
    constexpr uintptr_t bone_array          = 0xe18;
}
namespace hitbox {
    enum Type : int {
        Head          = 0,
        Neck          = 1,
        UpperChest    = 2,
        LowerChest    = 3,
        Stomach       = 4,
        Hip           = 5,
        Leftshoulder  = 6,
        Leftelbow     = 7,
        Lefthand      = 8,
        Rightshoulder = 9,
        RightelbowBone= 10,
        Righthand     = 11,
        LeftThighs    = 12,
        Leftknees     = 13,
        Leftleg       = 14,
        RightThighs   = 16,
        Rightknees    = 17,
        Rightleg      = 18,
        MaxHitbox     = 20,
    };
}
namespace bones {
    constexpr int Head          = 10;
    constexpr int Neck          = 9;
    constexpr int UpperChest    = 8;
    constexpr int LowerChest    = 7;
    constexpr int Spine         = 6;
    constexpr int Pelvis        = 0;
    constexpr int LShoulder = 46, LElbow = 16, LHand = 17;
    constexpr int RShoulder = 28, RElbow = 32, RHand = 37;
    constexpr int LHip = 25, LKnee = 26, LFoot = 43;
    constexpr int RHip = 27, RKnee = 28, RFoot = 44;
    constexpr int Count         = 72;
}
}
