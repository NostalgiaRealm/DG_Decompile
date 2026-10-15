/*
 * FUN_1802170a8 at 1802170a8
 * undefined FUN_1802170a8(void)
 * Address ranges: 1802170a8-180217173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802170a8(void)

{
  code *extraout_x11;
  undefined1 auVar1 [16];
  uint uStack_1c;
  undefined8 uStack_18;
  uint uStack_4;
  
  if ((DAT_180258cf0 & 1) == 0) {
    DAT_180258cf0 = DAT_180258cf0 | 1;
    uStack_18 = CONCAT44(uStack_18._4_4_,1);
    _DAT_180258a70 = (ulonglong)uStack_1c << 0x20;
    lRam0000000180258a88 = (ulonglong)uStack_4 << 0x20;
    uRam0000000180258a78 = uStack_18;
    _DAT_180258a80 = &DAT_18024c808;
    _DAT_180258a90 = CONCAT44(uStack_1c,3);
    lRam0000000180258aa8 = (ulonglong)uStack_4 << 0x20;
    uRam0000000180258a98 = 1;
    _DAT_180258aa0 = &DAT_18024c808;
    _DAT_180258ab0 = CONCAT44(uStack_1c,3);
    lRam0000000180258ac8 = (ulonglong)uStack_4 << 0x20;
    uRam0000000180258ab8 = 2;
    _DAT_180258ac0 = &DAT_18024c808;
    _DAT_180258ad0 = CONCAT44(uStack_1c,4);
    lRam0000000180258ae8 = (ulonglong)uStack_4 << 0x20;
    uRam0000000180258ad8 = 0;
    _DAT_180258ae0 = &DAT_18024c808;
  }
  auVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(auVar1._0_8_ + 0x6b0,auVar1._8_8_,1,&DAT_18024c6a8,0);
  return;
}

