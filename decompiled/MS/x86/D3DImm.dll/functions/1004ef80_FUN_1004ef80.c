/*
 * FUN_1004ef80 at 1004ef80
 * undefined __stdcall FUN_1004ef80(int param_1)
 * Address ranges: 1004ef80-1004efa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ef80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x484);
  if (0x400 < iVar1 + 4U) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x484) = iVar1 + 4;
  return;
}

