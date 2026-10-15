/*
 * FUN_10005020 at 10005020
 * int __fastcall FUN_10005020(int param_1)
 * Address ranges: 10005020-10005031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10005020(int param_1)

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

