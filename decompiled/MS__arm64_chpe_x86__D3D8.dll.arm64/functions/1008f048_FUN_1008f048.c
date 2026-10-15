/*
 * FUN_1008f048 at 1008f048
 * undefined FUN_1008f048(void)
 * Address ranges: 1008f048-1008f073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1008f048(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x151) == '\0') || (*(char *)(param_1 + 0x152) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

