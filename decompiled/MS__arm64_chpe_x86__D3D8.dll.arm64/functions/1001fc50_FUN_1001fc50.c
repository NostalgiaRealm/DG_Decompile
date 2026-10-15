/*
 * FUN_1001fc50 at 1001fc50
 * undefined FUN_1001fc50(void)
 * Address ranges: 1001fc50-1001fca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001fc50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x7e0) == 1) {
    param_2 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x7dc);
    if ((iVar1 - 0x100U & 0xfffffbff) == 0) {
      param_2 = 1;
    }
    else if ((iVar1 - 0x300U & 0xfffffeff) == 0) {
      param_2 = 2;
    }
  }
  return param_2;
}

