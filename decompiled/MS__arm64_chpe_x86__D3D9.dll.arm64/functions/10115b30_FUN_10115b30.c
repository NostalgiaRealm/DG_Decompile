/*
 * FUN_10115b30 at 10115b30
 * undefined FUN_10115b30(void)
 * Address ranges: 10115b30-10115c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115b30(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *extraout_w11;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      piVar1 = (int *)(param_3 + uVar4 * 0x10);
      if ((((*(int *)(param_1 + 0x58c + uVar4 * 0x10) != *piVar1) ||
           (*(int *)(param_1 + (uVar4 + 0x59) * 0x10) != piVar1[1])) ||
          (iVar2 = param_1 + uVar4 * 0x10, *(int *)(iVar2 + 0x594) != piVar1[2])) ||
         (*(int *)(iVar2 + 0x598) != piVar1[3])) {
        iVar2 = param_1 + uVar4 * 0x10;
        uVar6 = *(undefined8 *)piVar1;
        iVar5 = uVar4 + 1;
        *(undefined8 *)(iVar2 + 0x594) = *(undefined8 *)(piVar1 + 2);
        *(undefined8 *)(iVar2 + 0x58c) = uVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
    if (iVar5 != 0) {
      FUN_10113218(param_1);
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3,iVar5,param_3);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

