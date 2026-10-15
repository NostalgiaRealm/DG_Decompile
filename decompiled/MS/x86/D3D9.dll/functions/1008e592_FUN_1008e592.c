/*
 * FUN_1008e592 at 1008e592
 * uint __stdcall FUN_1008e592(uint param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1008e592-1008e602
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1008e592(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_1008cc6c(param_2,param_4,param_1);
  uVar3 = 0;
  iVar2 = param_3 * 0x2c;
  if (param_3 != 0) {
    uVar3 = (uVar1 >> ((&DAT_100dcda2)[iVar2] + 0x18 & 0x1f)) << ((&DAT_100dcda3)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_100dcd9c)[iVar2] + 0x18 & 0x1f)) << ((&DAT_100dcd9d)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_100dcd9e)[iVar2] + 0x10 & 0x1f)) << ((&DAT_100dcd9f)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_100dcda0)[iVar2] + 8 & 0x1f)) << ((&DAT_100dcda1)[iVar2] & 0x1f);
  }
  return uVar3;
}

