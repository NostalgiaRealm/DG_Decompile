/*
 * FUN_1001a8f0 at 1001a8f0
 * undefined FUN_1001a8f0(void)
 * Address ranges: 1001a8f0-1001a98f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1001a8f0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  code *extraout_w11;
  byte bVar3;
  
  bVar1 = 1;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if ((*(int *)(param_1 + 100) != *(int *)(param_1 + 0x4c)) ||
       (bVar3 = 1, *(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x50))) {
      bVar3 = 0;
    }
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    bVar1 = (*extraout_w11)(uVar2);
    bVar1 = bVar1 & bVar3;
  }
  return bVar1;
}

