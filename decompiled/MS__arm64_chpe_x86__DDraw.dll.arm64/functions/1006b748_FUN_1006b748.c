/*
 * FUN_1006b748 at 1006b748
 * undefined FUN_1006b748(void)
 * Address ranges: 1006b748-1006b803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b748(int param_1,int param_2,undefined8 param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  
  param_1 = param_1 + param_2 * 0x1510;
  uVar3 = 0;
  uVar2 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      iVar1 = *(int *)(param_5 + uVar4 * 4);
      if (*(int *)(param_1 + 0x604 + uVar4 * 4) != iVar1) {
        *(int *)(param_1 + uVar4 * 4 + 0x604) = iVar1;
        if ((int)uVar3 == 0) {
          uVar3 = 1;
          uVar2 = uVar4;
        }
        else {
          uVar3 = (ulonglong)((uVar4 - uVar2) + 1);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_4);
    if ((int)uVar3 != 0) {
      auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff,uVar3 & 0xffffffff);
    }
  }
  return;
}

