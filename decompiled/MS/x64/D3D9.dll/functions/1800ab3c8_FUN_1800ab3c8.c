/*
 * FUN_1800ab3c8 at 1800ab3c8
 * uint __fastcall FUN_1800ab3c8(undefined8 param_1, int param_2, uint param_3)
 * Address ranges: 1800ab3c8-1800ab452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800ab3c8(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  lVar3 = lVar4 * 0x2c;
  uVar2 = FUN_1800a9828(param_1,param_2,0,param_3);
  uVar2 = uVar2 & CONCAT31(CONCAT21(CONCAT11((&DAT_18010ff38)[lVar3],(&DAT_18010ff39)[lVar3]),
                                    (&DAT_18010ff3a)[lVar3]),(&DAT_18010ff3b)[lVar3]);
  uVar1 = uVar2 & 0xff;
  if ((&DAT_1800fec50)[lVar4] != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 & 0xffffff00;
  if ((&DAT_1800ff0a8)[lVar4] != '\0') {
    uVar2 = uVar1;
  }
  return uVar2;
}

