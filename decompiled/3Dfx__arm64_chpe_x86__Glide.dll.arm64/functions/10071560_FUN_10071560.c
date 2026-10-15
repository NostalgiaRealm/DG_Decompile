/*
 * FUN_10071560 at 10071560
 * undefined FUN_10071560(void)
 * Address ranges: 10071560-1007158b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10071560(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x3a4) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 0xc + 0x194);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

