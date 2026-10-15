/*
 * FUN_10106a20 at 10106a20
 * undefined FUN_10106a20(void)
 * Address ranges: 10106a20-10106a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10106a20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x3ac) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

