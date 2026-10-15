/*
 * FUN_1007a1c0 at 1007a1c0
 * undefined FUN_1007a1c0(void)
 * Address ranges: 1007a1c0-1007a1f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1007a1c0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(int *)(param_1 + 8) + 0x2ac) == 0) ||
     (*(int *)(*(int *)(param_1 + 8) + 0x2b0) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

