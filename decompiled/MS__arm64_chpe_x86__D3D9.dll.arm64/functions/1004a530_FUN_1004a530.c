/*
 * FUN_1004a530 at 1004a530
 * undefined FUN_1004a530(void)
 * Address ranges: 1004a530-1004a54f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a530(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xf748) != 0xa000) {
    uVar1 = param_2;
  }
  *(undefined1 *)(param_1 + 0x80) = uVar1;
  return;
}

