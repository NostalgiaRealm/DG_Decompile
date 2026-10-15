/*
 * FUN_1006fcf0 at 1006fcf0
 * undefined FUN_1006fcf0(void)
 * Address ranges: 1006fcf0-1006fd9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fcf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  
  iVar1 = param_1 + param_2 * 0x1510;
  (*(code *)PTR_FUN_100a803c)(param_1 + 0x4a0);
  uVar2 = 0;
  do {
    if (param_3 == *(int *)(iVar1 + 0x7fc + uVar2 * 4)) {
      *(undefined4 *)(iVar1 + uVar2 * 4 + 0x7fc) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*(code *)PTR_FUN_100a8090)(param_1 + 0x4a0);
  return;
}

