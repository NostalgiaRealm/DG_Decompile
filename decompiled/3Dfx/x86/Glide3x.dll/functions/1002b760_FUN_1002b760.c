/*
 * FUN_1002b760 at 1002b760
 * int __fastcall FUN_1002b760(int param_1)
 * Address ranges: 1002b760-1002b771
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1002b760(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

