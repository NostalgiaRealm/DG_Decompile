/*
 * FUN_10076cb7 at 10076cb7
 * uint __stdcall FUN_10076cb7(int param_1, uint param_2)
 * Address ranges: 10076cb7-10076d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10076cb7(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x2c;
  uVar1 = FUN_10076aaf(param_1,0,param_2);
  uVar1 = uVar1 & CONCAT31(CONCAT21(CONCAT11((&DAT_100b8a80)[iVar3],(&DAT_100b8a81)[iVar3]),
                                    (&DAT_100b8a82)[iVar3]),(&DAT_100b8a83)[iVar3]);
  uVar2 = uVar1 & 0xff;
  if ((&DAT_100b0758)[param_1] != '\0') {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 & 0xffffff00;
  if ((&DAT_100b04d4)[param_1] != '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}

