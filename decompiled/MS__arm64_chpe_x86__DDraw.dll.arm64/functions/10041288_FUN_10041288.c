/*
 * FUN_10041288 at 10041288
 * undefined FUN_10041288(void)
 * Address ranges: 10041288-100412cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041288(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0xf4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x108);
  }
  if (iVar1 == param_1) {
    FUN_10037f30(*(int *)(param_1 + 0xc),*(uint *)(param_1 + 0x10) >> 7 & 1);
    return;
  }
  return;
}

