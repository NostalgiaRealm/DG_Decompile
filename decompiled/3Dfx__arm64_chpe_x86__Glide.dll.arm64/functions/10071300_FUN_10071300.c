/*
 * FUN_10071300 at 10071300
 * undefined FUN_10071300(void)
 * Address ranges: 10071300-10071333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10071300(int param_1)

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

