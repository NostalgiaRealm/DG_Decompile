/*
 * FUN_10064430 at 10064430
 * undefined FUN_10064430(void)
 * Address ranges: 10064430-10064573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10064430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  uint local_50;
  undefined1 auStack_4c [12];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_4c);
  iVar1 = -0x7ff8ffa9;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    iVar1 = -0x7ffbfef0;
    if (param_5 == 0) {
      iVar1 = -0x7ff8fff2;
      uVar2 = FUN_1004f170(param_3,*(undefined4 *)(param_1 + 0x90));
      local_50 = uVar2;
      if (uVar2 != 0) {
        iVar1 = FUN_10066140(uVar2,uVar2);
        if ((iVar1 < 0) || (iVar1 = FUN_10065e40(uVar2,param_2,param_4), iVar1 < 0)) {
          FUN_10081d50(uVar2,0xd8);
        }
        else {
          uVar4 = FUN_100059f0(param_1 + 0xc0,&local_50);
          if ((uVar4 & 1) == 0) {
            iVar1 = -0x7ff8fff2;
            uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar3);
            *param_4 = 0;
          }
          else {
            iVar1 = 0;
          }
        }
      }
    }
  }
  FUN_10096790(auStack_4c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar1;
}

