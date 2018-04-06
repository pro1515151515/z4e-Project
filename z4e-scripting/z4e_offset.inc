#if defined _z4e_offset_included
  #endinput
#endif
#define _z4e_offset_included

#define PDATA_SAFE 2
#define OFFSET_LINUX_WEAPONS 4
#define OFFSET_LINUX 5

// CBaseEntity
stock current_ammo = 8 // int
stock currentammo = 9 // int
stock maxammo_buckshot = 10 // int
stock ammo_buckshot = 11 // int
stock maxammo_9mm = 12 // int
stock ammo_9mm = 13 // int
stock maxammo_556nato = 14 // int
stock ammo_556nato = 15 // int
stock maxammo_556natobox = 16 // int
stock ammo_556natobox = 17 // int
stock maxammo_762nato = 18 // int
stock ammo_762nato = 19 // int
stock maxammo_45acp = 20 // int
stock ammo_45acp = 21 // int
stock maxammo_50ae = 22 // int
stock ammo_50ae = 23 // int
stock maxammo_338mag = 24 // int
stock ammo_338mag = 25 // int
stock maxammo_57mm = 26 // int
stock ammo_57mm = 27 // int
stock maxammo_357sig = 28 // int
stock ammo_357sig = 29 // int
stock m_flStartThrow = 30 // float
stock m_flReleaseThrow = 31 // float
stock m_iSwing = 32 // int
stock has_disconnected = 132 // bool

// CBaseDelay
stock m_flDelay = 34 // float
stock m_iszKillTarget = 35 // int

// CBaseAnimating
stock m_flFrameRate = 36 // float
stock m_flGroundSpeed = 37 // float
stock m_flLastEventCheck = 38 // float
stock m_fSequenceFinished = 39 // BOOL
stock m_fSequenceLoops = 40 // BOOL

// CBaseMonster
stock m_Activity = 73 // Activity
stock m_IdealActivity = 74 // Activity
stock m_LastHitGroup = 75 // int
stock m_bitsDamageType = 76 // int
stock m_rgbTimeBasedDamage[] = { 308, 309, 310, 311, 312, 313, 314, 315 } // BYTE
stock m_MonsterState = 79 // MONSTERSTATE
stock m_IdealMonsterState = 80 // MONSTERSTATE
stock m_afConditions = 81 // int
stock m_afMemory = 82 // int
stock m_flNextAttack = 83 // float
stock m_hEnemy = 84 // EHANDLE
stock m_hTargetEnt = 86 // EHANDLE
stock m_flFieldOfView = 88 // float
stock m_bloodColor = 89 // int
stock m_HackedGunPos[3] = { 90, 91, 92 } // Vector
stock m_vecEnemyLKP[3] = { 93, 94, 95 } // Vector

// CBasePlayer
stock random_seed = 96 // int
stock m_usPlayerBleed = 97 // unsigned short
stock m_hObserverTarget = 98 // EHANDLE
stock m_flNextObserverInput = 100 // float
stock m_iObserverWeapon = 101 // int
stock m_iObserverC4State = 102 // int
stock m_bObserverHasDefuser = 412 // bool
stock m_iObserverLastMode = 104 // int
stock m_flFlinchTime = 105 // float
stock m_flAnimTime = 106 // float
stock m_bHighDamage = 428 // bool
stock m_flVelocityModifier = 108 // float
stock m_iLastZoom = 109 // int
stock m_bResumeZoom = 440 // bool
stock m_flEjectBrass = 111 // float
stock m_iKevlar = 112 // int
stock m_bNotKilled = 452 // bool
stock m_iTeam = 114 // int
stock m_iAccount = 115 // int
stock m_bHasPrimary = 464 // bool
stock m_flDeathThrowTime = 117 // float 
stock m_iThrowDirection = 118 // int
stock m_flLastTalk = 119 // float
stock m_bJustConnected = 480 // bool
stock m_bContextHelp = 481 // bool
stock m_iJoiningState = 121 // JoinState
stock m_pIntroCamera = 122 // CBaseEntity *
stock m_fIntroCamTime = 123 // float
stock m_fLastMovement = 124 // float
stock m_bMissionBriefing = 500 // bool
stock m_bTeamChanged = 501 // bool
stock m_iModelName = 126 // int
stock m_iTeamKills = 127 // int
stock m_iIgnoreGlobalChat = 128 // int
stock m_bHasNightVision = 516 // bool
stock m_bNightVisionOn = 517 // bool
stock m_flIdleCheckTime = 190 // float
stock m_flRadioTime = 191 // float
stock m_iRadioMessages = 192 // int
stock m_bIgnoreRadio = 772 // bool
stock m_bHasC4 = 773 // bool
stock m_bHasDefuser = 774 // bool
stock m_bKilledByBomb = 775 // bool
stock m_vBlastVector[3] = { 194, 195, 196 } // Vector
stock m_bKilledByGrenade = 788 // bool
stock m_flDisplayHistory = 204 // int
stock m_iMenu = 205 // int
stock m_iChaseTarget = 206 / int
stock m_pChaseTarget = 207 // CBaseEntity *
stock m_fCamSwitch = 208 // BOOL
stock m_bEscaped = 836 // bool
stock m_bIsVIP = 837 // bool
stock m_tmNextRadarUpdate = 210 // float
stock m_vLastOrigin[3] = { 211, 212, 213 } // Vector
stock m_iCurrentKickVote = 214 // int
stock m_flNextVoteTime = 215 // float
stock m_bJustKilledTeammate = 864 // bool
stock m_iHostagesKilled = 217 // int
stock m_iMapVote = 218 // int
stock m_bCanShoot = 876 // bool
stock m_flLastFired = 220 // float
stock m_flLastAttackedTeammate = 221 // float
stock m_bHeadshotKilled = 888 // bool
stock m_bPunishedForTK = 889 // bool
stock m_bReceivesNoMoneyNextRound = 890 // bool
stock m_iTimeCheckAllowed = 223 // int
stock m_bHasChangedName = 896 // bool
stock m_szNewName = 225 // char [MAX_PLAYER_NAME_LENGTH]
stock m_bIsDefusing = 928 // bool
stock m_tmHandleSignals = 233 / float
stock m_signals[2] = { 234, 235 } // CUnifiedSignals
stock m_pentCurBombTarget = 236 // edict_t *
stock m_iPlayerSound = 237 // int
stock m_iTargetVolume = 238 // int
stock m_iWeaponVolume = 239 // int
stock m_iExtraSoundTypes = 240 // int
stock m_iWeaponFlash = 241 // int
stock m_flStopExtraSoundTime = 242 // float
stock m_flFlashLightTime = 243 // float
stock m_iFlashBattery = 244 // int
stock m_afButtonLast = 245 // int
stock m_afButtonPressed = 246 // int
stock m_afButtonReleased = 247 // int
stock m_pentSndLast = 248 // edict_t *
stock m_flSndRoomtype = 249 // float
stock m_flSndRange = 250 // float
stock m_flFallVelocity = 251 // float
stock m_rgItems[4] = { 252, 253, 254, 255 } // CBasePlayerItem *
stock m_fNewAmmo = 256 // int
stock m_afPhysicsFlags = 257 // unsigned int
stock m_fNextSuicideTime = 258 // float
stock m_flTimeStepSound = 259 // float
stock m_flSwimTime = 261 // float
stock m_flDuckTime = 262 // float
stock m_flWallJumpTime = 263 // float
stock m_flSuitUpdate = 264 // float
stock m_rgSuitPlayList[4] = { 265, 266, 267, 268 } // int [CSUITPLAYLIST]
stock m_iSuitPlayNext = 269 // int
stock m_rgiSuitNoRepeat[32] = { 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301 } // int [CSUITNOREPEAT]
stock m_rgflSuitNoRepeatTime[32] = { 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333 } // int [CSUITNOREPEAT]
stock m_lastDamageAmount = 334 // int
stock m_tbdPrev = 335 // float
stock m_flgeigerRange = 336 // float
stock m_flgeigerDelay = 337 // float
stock m_igeigerRangePrev = 338 // int
stock m_iStepLeft = 339 // int
stock m_szTextureName = 340 // char [CBTEXTURENAMEMAX]
stock m_chTextureType = 1364 // char
stock m_idrowndmg = 345 // int
stock m_idrownrestored = 346 // int
stock m_bitsHUDDamage = 347 // int
stock m_fInitHUD = 348 // BOOL
stock m_fGameHUDInitialized = 349 // BOOL
stock m_iTrain = 350 // int
stock m_fWeapon = 351 // BOOL
stock m_pTank = 352 // EHANDLE
stock m_fDeadTime = 354 // float
stock m_fNoPlayerSound = 355 // BOOL
stock m_fLongJump = 356 // BOOL
stock m_tSneaking = 357 // float
stock m_iUpdateTime = 358 // int
stock m_iClientHealth = 359 // int
stock m_iClientBattery = 360 // int
stock m_iHideHUD = 361 // int
stock m_iClientHideHUD = 362 // int
stock m_iFOV = 363 // int
stock m_iClientFOV = 364 // int
stock m_iNumSpawns = 365 // int
stock m_pObserver = 366 // CBaseEntity *
stock m_rgpPlayerItems[6] = { 367, 368, 369, 370, 371, 372 } // CBasePlayerItem *
stock m_pActiveItem = 373 // CBasePlayerItem *
stock m_pClientActiveItem = 374 // CBasePlayerItem *
stock m_pLastItem = 375 // CBasePlayerItem *
stock m_rgAmmo[] = { 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407 } // int
stock m_rgAmmoLast[] = { 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439} // int
stock m_vecAutoAim[3] = { 440, 441, 442 } // Vevctor
stock m_fOnTarget = 443 // BOOL
stock m_iDeaths = 444 // int
stock m_izSBarState[3] = { 446, 447, 448, 449 } // int [SBAR_END]
stock m_flNextSBarUpdateTime = 449 // float
stock m_flStatusBarDisappearDelay = 450 // float
stock m_SbarString0 = 452 // char [SBAR_STRING_SIZE]
stock m_lastx = 483 // int
stock m_lasty = 484 // int
stock m_nCustomSprayFrames = 485 // int
stock m_flNextDecalTime = 486 // float
stock m_szTeamName = 487 // char [TEAM_NAME_LENGTH]
stock m_modelIndexPlayer = 491 // int
stock m_szAnimExtention = 492 // char [32]
stock m_iGaitsequence = 493 // int
stock m_flGaitframe = 494 // float
stock m_flGaityaw = 495 // float
stock m_prevgaitorigin[3] = { 496, 497, 495 } // vec3_t
stock m_flPitch = 496 // float
stock m_flYaw = 497 // float
stock m_flGaitMovement = 498 // float
stock m_iAutoWepSwitch = 499 // int
stock m_bVGUIMenus = 2000 // bool
stock m_bShowHints = 2001 // bool
stock m_bShieldDrawn = 2002 // bool
stock m_bOwnsShield = 2003 // bool
stock m_bWasFollowing = 2004 // bool
stock m_flNextFollowTime = 502 // float
stock m_flYawModifier = 503 // float
stock m_blindUntilTime = 504 // float
stock m_blindStartTime = 505 // float
stock m_blindHoldTime = 506 // float
stock m_blindFadeTime = 507 // float
stock m_blindAlpha = 508 // float
stock m_allowAutoFollowTime = 509 // float

// CBasePlayerItem
stock m_pPlayer = 41 // CBasePlayer *
stock m_pNext = 42 // CBasePlayerItem *
stock m_iId = 43 // int

// CBasePlayerWeapon
stock m_iPlayEmptySound = 44 // int
stock m_fFireOnEmpty = 45 // int
stock m_flNextPrimaryAttack = 46 // float
stock m_flNextSecondaryAttack = 47 // float
stock m_flTimeWeaponIdle = 48 // float
stock m_iPrimaryAmmoType = 49 // int
stock m_iSecondaryAmmoType = 50 // int
stock m_iClip = 51 // int
stock m_iClientClip = 52 // int
stock m_iClientWeaponState = 53 // int
stock m_fInReload = 54 // int
stock m_fInSpecialReload = 55 // int
stock m_iDefaultAmmo = 56 // int
stock m_iShellId = 57 // int
stock m_fMaxSpeed = 58 // float
stock m_bDelayFire = 236 // bool
stock m_iDirection = 60 // int
stock m_bSecondarySilencerOn = 244 // bool
stock m_flAccuracy = 62 // float
stock m_flLastFire = 63 // float
stock m_iShotsFired = 64 // int
stock m_vVecAiming[3] = { 65, 66, 67 } // Vector
stock model_name = 68 // string_t
stock m_flGlock18Shoot = 69 // float
stock m_iGlock18ShotsFired = 70 // int
stock m_flFamasShoot = 71 // float
stock m_iFamasShotsFired = 72 // int
stock m_fBurstSpread = 73 // float
stock m_iWeaponState = 74 // int
stock m_flNextReload = 75 // float
stock m_flDecreaseShotsFired = 76 // float

// CWeaponBox
stock m_rgpPlayerItems2[] = { 34, 35, 36, 37, 38, 39 } // CBasePlayerItem *

/*
// CHalfLifeMultiplay
stock m_fRoundCount = 52 // float
stock m_bCTCantBuy = 180 // bool
stock m_bTCantBuy = 181 // bool
*/

// CGameRules
stock m_fTeamCount = 48 // long (-8 for linux)
stock m_fRoundCount = 56 // long (-8 for linux)
stock m_iRoundTimeSecs = 64 // int (-4 for linux)
stock m_iRoundWinStatus = 116 // int (-8 for linux)
stock m_iNumCTWins = 120 // short (-8 for linux)
stock m_iNumTerroristWins = 122 // short (-8 for linux)
stock m_bRoundTerminating = 169 // byte (-8 for linux)

stock bool:get_pdata_bool(ent, charbased_offset, intbase_linuxdiff = 5) 
{ 
	return !!( get_pdata_int(ent, charbased_offset >> 2, intbase_linuxdiff) & (0xFF<<((charbased_offset & 3) << 3)) )
}

stock set_pdata_bool(ent, charbased_offset, bool:value, intbase_linuxdiff = 5) 
{ 
    set_pdata_char(ent, charbased_offset, _:value, intbase_linuxdiff) 
}

stock set_pdata_char(ent, charbased_offset, value, intbase_linuxdiff = 5) 
{ 
    value &= 0xFF 
    new int_offset_value = get_pdata_int(ent, charbased_offset >> 2, intbase_linuxdiff) 
    new bit_decal = (charbased_offset & 3) << 3
    int_offset_value &= ~(0xFF<<bit_decal) // clear byte 
    int_offset_value |= value<<bit_decal 
    set_pdata_int(ent, charbased_offset >> 2, int_offset_value, intbase_linuxdiff) 
    return 1 
} 