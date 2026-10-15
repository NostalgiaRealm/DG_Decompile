/*
 * FUN_1003f683 at 1003f683
 * int __fastcall FUN_1003f683(int param_1)
 * Address ranges: 1003f683-1003f6a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1003f683(int param_1)

{
  int iVar1;
  uint3 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0xa58) + 0x10 + iVar3 * 4);
    uVar2 = (uint3)((uint)iVar1 >> 8);
    if (iVar1 != (&DAT_1005d170)[iVar3]) {
      return (uint)uVar2 << 8;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return CONCAT31(uVar2,1);
}

