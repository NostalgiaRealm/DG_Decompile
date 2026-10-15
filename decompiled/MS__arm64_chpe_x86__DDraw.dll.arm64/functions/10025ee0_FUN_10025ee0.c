/*
 * FUN_10025ee0 at 10025ee0
 * undefined FUN_10025ee0(void)
 * Address ranges: 10025ee0-10025f03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10025ee0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1bd) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x138);
  }
  return uVar1;
}

