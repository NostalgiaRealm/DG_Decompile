/*
 * FUN_100b23d0 at 100b23d0
 * undefined FUN_100b23d0(void)
 * Address ranges: 100b23d0-100b2493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100b23d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  int local_50;
  int local_4c;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((*(int *)(iVar1 + 0x18) == 1) && (*(int *)(iVar1 + 0x1c) == 1)) {
    if (*(int *)(iVar1 + 0x28) == 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 0x28) == 1) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2,&local_50);
      iVar1 = *(int *)(param_1 + 0x24);
      if ((*(int *)(iVar1 + 0x10) == local_50) && (*(int *)(iVar1 + 0x14) == local_4c)) {
        return 1;
      }
    }
  }
  return 0;
}

