/*
 * FUN_10082974 at 10082974
 * int __fastcall FUN_10082974(int param_1)
 * Address ranges: 10082974-10082990
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10082974(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((iVar1 != 0x24) && (iVar1 != 0x25)) && (iVar1 != 0x28)) && (iVar1 != 0x29)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

