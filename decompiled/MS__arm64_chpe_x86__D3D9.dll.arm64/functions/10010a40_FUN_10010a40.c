/*
 * FUN_10010a40 at 10010a40
 * undefined FUN_10010a40(void)
 * Address ranges: 10010a40-10010a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10010a40(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 4) == 0) && (*(int *)(param_1 + 26000) != 0)) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 26000) + 100);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

