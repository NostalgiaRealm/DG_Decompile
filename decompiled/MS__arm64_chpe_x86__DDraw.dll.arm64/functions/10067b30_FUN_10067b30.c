/*
 * FUN_10067b30 at 10067b30
 * undefined FUN_10067b30(void)
 * Address ranges: 10067b30-10067b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10067b30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x3ac) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

