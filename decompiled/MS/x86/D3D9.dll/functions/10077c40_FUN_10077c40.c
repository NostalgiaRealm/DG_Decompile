/*
 * FUN_10077c40 at 10077c40
 * int __fastcall FUN_10077c40(int param_1)
 * Address ranges: 10077c40-10077c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10077c40(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((((iVar1 != 0x17) && (iVar1 != 0x18)) && (iVar1 != 0x19)) &&
       ((iVar1 != 0x16 && (iVar1 != 0x1a)))) &&
      ((iVar1 != 0x1b && ((iVar1 != 0x1c && (iVar1 != 0x1d)))))) &&
     ((iVar1 != 0x1e && ((iVar1 != 0x1f && (iVar1 != 0x15)))))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

