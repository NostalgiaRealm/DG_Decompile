/*
 * Direct3DCreate9Ex_native at 100d17e0
 * undefined Direct3DCreate9Ex_native(void)
 * Address ranges: 100d17e0-100d193f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Direct3DCreate9Ex_native(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined1 auStack_30 [16];
  
  *param_2 = 0;
  if ((DAT_10175b38 != 0) ||
     (DAT_10175b38 = FUN_100cfd50(s_Direct3DCreate9Ex_10162de0), DAT_10175b38 != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(param_1,param_2);
    return iVar2;
  }
  iVar2 = -0x7fffbffb;
  FUN_1003ad48();
  FUN_10157b40(auStack_30);
  uVar3 = FUN_1003a038();
  if ((uVar3 & 1) != 0) {
    iVar1 = FUN_1012e248();
    if (iVar1 != 0) {
      _DAT_101701e8 = *(undefined8 *)(iVar1 + 0xa4);
      DAT_101701e0 = *(undefined8 *)(iVar1 + 0x9c);
      DAT_101701f0 = *(undefined8 *)(iVar1 + 0xac);
      FUN_1012ec50(iVar1);
    }
    FUN_100d1c38();
    FUN_10022d80();
    iVar1 = FUN_101321c0(0xc0);
    if (iVar1 != 0) {
      iVar1 = FUN_100cff40(iVar1,param_1,1);
      if (iVar1 != 0) {
        uVar3 = FUN_100d0580(iVar1);
        if ((uVar3 & 1) != 0) {
          iVar2 = FUN_100d14a0(iVar1 + 0x74,&DAT_1015e530,param_2,0);
          if (-1 < iVar2) goto LAB_100d18bc;
          FUN_10001910(iVar1);
          FUN_100d0340(iVar1);
          FUN_100060e0(iVar1);
        }
        FUN_100d0040(iVar1);
        FUN_10132260(iVar1,0xc0);
      }
    }
    uVar3 = FUN_10002c58();
    if ((uVar3 & 1) != 0) {
      FUN_100d1d70();
    }
  }
LAB_100d18bc:
  FUN_10157a90(auStack_30);
  return iVar2;
}

