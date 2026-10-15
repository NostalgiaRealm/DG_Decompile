/*
 * Direct3DCreate9_native at 100d1660
 * undefined Direct3DCreate9_native(void)
 * Address ranges: 100d1660-100d17d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Direct3DCreate9_native(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  undefined4 local_30;
  undefined1 auStack_2c [12];
  
  local_30 = 0;
  uVar3 = 0;
  if ((DAT_10175b34 == 0) &&
     (DAT_10175b34 = FUN_100cfd50(s_Direct3DCreate9_10162dd0), DAT_10175b34 == 0)) {
    if ((param_1 & 0x7fffffff) - 0x1f < 2) {
      FUN_1003ad48();
      FUN_10157b40(auStack_2c);
      uVar4 = FUN_1003a038();
      if ((uVar4 & 1) != 0) {
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
        if ((iVar1 != 0) && (iVar1 = FUN_100cff40(iVar1,param_1,0), iVar1 != 0)) {
          uVar4 = FUN_100d0580(iVar1);
          if ((uVar4 & 1) != 0) {
            iVar2 = FUN_100d14a0(iVar1 + 0x74,&DAT_1015e440,&local_30,0);
            if (-1 < iVar2) {
              FUN_10157a90(auStack_2c);
              return local_30;
            }
            FUN_10001910(iVar1);
            FUN_100d0340(iVar1);
            FUN_100060e0(iVar1);
            uVar3 = local_30;
          }
          FUN_100d0040(iVar1);
          FUN_10132260(iVar1,0xc0);
        }
        uVar4 = FUN_10002c58();
        if ((uVar4 & 1) != 0) {
          FUN_100d1d70();
        }
      }
      FUN_10157a90(auStack_2c);
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar3 = (*extraout_w11)(param_1);
  }
  return uVar3;
}

