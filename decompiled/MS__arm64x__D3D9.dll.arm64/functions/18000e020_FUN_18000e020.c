/*
 * FUN_18000e020 at 18000e020
 * undefined FUN_18000e020(void)
 * Address ranges: 18000e020-18000e087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18000e020(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 1;
  if (*(char *)(param_1 + 0xf9) == '\0') {
    if ((*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0x90)) ||
       (bVar2 = 1, *(int *)(param_1 + 0xac) != *(int *)(param_1 + 0x94))) {
      bVar2 = 0;
    }
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x50))();
    bVar1 = bVar1 & bVar2;
  }
  return bVar1;
}

