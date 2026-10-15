/*
 * FUN_10072bb0 at 10072bb0
 * undefined FUN_10072bb0(void)
 * Address ranges: 10072bb0-10072d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072bb0(int param_1,uint param_2,int param_3)

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
      piVar1 = (int *)(param_3 + uVar4 * 0x18);
      if ((((*(int *)(param_1 + 0x4cc + uVar4 * 0x18) != *piVar1) ||
           (iVar2 = param_1 + uVar4 * 0x18, *(int *)(iVar2 + 0x4d0) != piVar1[1])) ||
          (*(int *)(iVar2 + 0x4d4) != piVar1[2])) ||
         (((*(int *)(iVar2 + 0x4d8) != piVar1[3] || (*(int *)(iVar2 + 0x4dc) != piVar1[4])) ||
          (*(int *)(param_1 + (uVar4 + 0x34) * 0x18) != piVar1[5])))) {
        iVar2 = param_1 + uVar4 * 0x18;
        uVar6 = *(undefined8 *)piVar1;
        iVar5 = uVar4 + 1;
        *(undefined8 *)(iVar2 + 0x4d4) = *(undefined8 *)(piVar1 + 2);
        *(undefined8 *)(iVar2 + 0x4cc) = uVar6;
        *(undefined8 *)(iVar2 + 0x4dc) = *(undefined8 *)(piVar1 + 4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
    if (iVar5 != 0) {
      FUN_10071d50(param_1);
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3,iVar5,param_3);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

