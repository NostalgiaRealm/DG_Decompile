/*
 * FUN_10068080 at 10068080
 * undefined FUN_10068080(void)
 * Address ranges: 10068080-10068183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068080(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *extraout_w11;
  int iVar4;
  
  param_1 = param_1 + param_2 * 0x1510;
  iVar4 = 0;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *(int *)(param_4 + uVar3 * 4);
      if (*(int *)(param_1 + 0x7fc + uVar3 * 4) != iVar1) {
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + uVar3 * 4 + 0x7fc) = iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
    if (3 < param_3) goto LAB_10068118;
  }
  FUN_1007ac30(param_1 + 0x7fc + param_3 * 4,0,(ulonglong)(4 - param_3) << 2);
LAB_10068118:
  if ((iVar4 != 0) || (param_5 != *(int *)(param_1 + 0x80c))) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_3,param_4,param_5);
    *(int *)(param_1 + 0x80c) = param_5;
  }
  return;
}

