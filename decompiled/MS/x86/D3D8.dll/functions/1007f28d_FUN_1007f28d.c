/*
 * FUN_1007f28d at 1007f28d
 * undefined4 __stdcall FUN_1007f28d(int param_1, undefined4 * param_2)
 * Address ranges: 1007f28d-1007f2b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f28d(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + -0x20) == '\0') {
    uVar1 = FUN_100091df((void *)(param_1 + -0x58e0),param_2);
  }
  else {
    uVar1 = 0x8876086b;
  }
  return uVar1;
}

