/*
 * FUN_10047330 at 10047330
 * undefined FUN_10047330(void)
 * Address ranges: 10047330-1004735b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10047330(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_2 + 0x108) == 0) ||
     ((*(uint *)(*(int *)(param_2 + 0x108) + 0x10) >> 10 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

