/*
 * FUN_10012c02 at 10012c02
 * int __fastcall FUN_10012c02(int param_1)
 * Address ranges: 10012c02-10012c1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10012c02(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((iVar1 != 0x17) && (iVar1 != 0x18)) && (iVar1 != 0x14)) && (iVar1 != 0x16)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

