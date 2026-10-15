/*
 * FUN_100677f8 at 100677f8
 * undefined FUN_100677f8(void)
 * Address ranges: 100677f8-100678c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100677f8(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  code *extraout_w11;
  undefined1 auVar6 [16];
  
  uVar4 = 0;
  iVar1 = param_1 + param_2 * 0x1510 + 0x510;
  uVar5 = 0;
  if (param_4 != 0) {
    iVar3 = param_3;
    do {
      iVar2 = *(int *)(param_5 + uVar5 * 4);
      if (*(int *)(iVar1 + (param_3 + 0x3d) * 4 + uVar5 * 4) != iVar2) {
        *(int *)(iVar1 + (uVar5 + param_3) * 4 + 0xf4) = iVar2;
        if ((int)uVar4 == 0) {
          uVar4 = 1;
          iVar3 = uVar5 + param_3;
        }
        else {
          uVar4 = (ulonglong)((uVar5 - iVar3) + param_3 + 1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
    if ((int)uVar4 != 0) {
      auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff,uVar4 & 0xffffffff);
    }
  }
  return;
}

