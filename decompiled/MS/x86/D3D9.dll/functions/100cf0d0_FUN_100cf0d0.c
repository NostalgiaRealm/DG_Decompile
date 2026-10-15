/*
 * FUN_100cf0d0 at 100cf0d0
 * int __fastcall FUN_100cf0d0(int param_1)
 * Address ranges: 100cf0d0-100cf0e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100cf0d0(int param_1)

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

