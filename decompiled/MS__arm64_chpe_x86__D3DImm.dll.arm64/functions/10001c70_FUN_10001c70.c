/*
 * FUN_10001c70 at 10001c70
 * undefined FUN_10001c70(void)
 * Address ranges: 10001c70-10001cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001c70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x7e0) == 1) {
    param_2 = 1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x7dc);
    if ((iVar1 - 0x100U & 0xfffffbff) == 0) {
      param_2 = 2;
    }
    else if ((iVar1 - 0x300U & 0xfffffeff) == 0) {
      param_2 = 3;
    }
  }
  return param_2;
}

