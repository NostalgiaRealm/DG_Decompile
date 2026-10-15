/*
 * FUN_100783ba at 100783ba
 * uint __stdcall FUN_100783ba(uint param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100783ba-1007842a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100783ba(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_10076aaf(param_2,param_4,param_1);
  uVar3 = 0;
  iVar2 = param_3 * 0x2c;
  if (param_3 != 0) {
    uVar3 = (uVar1 >> ((&DAT_100b8a7a)[iVar2] + 0x18 & 0x1f)) << ((&DAT_100b8a7b)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_100b8a74)[iVar2] + 0x18 & 0x1f)) << ((&DAT_100b8a75)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_100b8a76)[iVar2] + 0x10 & 0x1f)) << ((&DAT_100b8a77)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_100b8a78)[iVar2] + 8 & 0x1f)) << ((&DAT_100b8a79)[iVar2] & 0x1f);
  }
  return uVar3;
}

