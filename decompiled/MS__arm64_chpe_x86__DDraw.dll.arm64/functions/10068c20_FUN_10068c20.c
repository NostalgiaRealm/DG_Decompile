/*
 * FUN_10068c20 at 10068c20
 * undefined FUN_10068c20(void)
 * Address ranges: 10068c20-10068c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068c20(int param_1,int param_2)

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

