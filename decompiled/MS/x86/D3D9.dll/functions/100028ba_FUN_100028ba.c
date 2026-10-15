/*
 * FUN_100028ba at 100028ba
 * int __stdcall FUN_100028ba(void)
 * Address ranges: 100028ba-100028d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100028ba(void)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(DAT_100dea74 + 0x7e0);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

