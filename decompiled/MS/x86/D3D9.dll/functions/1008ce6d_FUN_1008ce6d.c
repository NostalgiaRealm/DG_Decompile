/*
 * FUN_1008ce6d at 1008ce6d
 * uint __stdcall FUN_1008ce6d(int param_1, uint param_2)
 * Address ranges: 1008ce6d-1008cecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1008ce6d(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x2c;
  uVar1 = FUN_1008cc6c(param_1,0,param_2);
  uVar1 = uVar1 & CONCAT31(CONCAT21(CONCAT11((&DAT_100dcda8)[iVar3],(&DAT_100dcda9)[iVar3]),
                                    (&DAT_100dcdaa)[iVar3]),(&DAT_100dcdab)[iVar3]);
  uVar2 = uVar1 & 0xff;
  if ((&DAT_100d2a28)[param_1] != '\0') {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 & 0xffffff00;
  if ((&DAT_100d2700)[param_1] != '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}

