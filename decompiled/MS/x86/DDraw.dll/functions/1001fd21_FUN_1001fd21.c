/*
 * FUN_1001fd21 at 1001fd21
 * uint __stdcall FUN_1001fd21(int param_1, uint param_2)
 * Address ranges: 1001fd21-1001fd81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001fd21(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x2c;
  uVar1 = FUN_1001fb19(param_1,0,param_2);
  uVar1 = uVar1 & CONCAT31(CONCAT21(CONCAT11((&DAT_10069418)[iVar3],(&DAT_10069419)[iVar3]),
                                    (&DAT_1006941a)[iVar3]),(&DAT_1006941b)[iVar3]);
  uVar2 = uVar1 & 0xff;
  if ((&DAT_10062a88)[param_1] != '\0') {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 & 0xffffff00;
  if ((&DAT_10062804)[param_1] != '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}

