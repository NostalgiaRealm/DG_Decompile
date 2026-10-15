/*
 * FUN_10019700 at 10019700
 * undefined FUN_10019700(void)
 * Address ranges: 10019700-1001971f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019700(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1dd0) != 0xa000) {
    uVar1 = param_2;
  }
  *(undefined1 *)(param_1 + 0x78) = uVar1;
  return;
}

