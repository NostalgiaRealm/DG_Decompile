/*
 * FUN_10075d1d at 10075d1d
 * uint __fastcall FUN_10075d1d(int * param_1, undefined4 * param_2, int param_3, uint param_4, int param_5)
 * Address ranges: 10075d1d-10075e51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10075d1d(int *param_1,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar1 = param_2 + 3;
  uVar2 = FUN_100a05ed((int)piVar1,4,'\x01');
  uVar3 = 1;
  if (((byte)*param_2 & 0xf) == 5) {
    uVar3 = 5;
  }
  param_2[*(byte *)((int)param_2 + 0x61) + 0x1f] = uVar3;
  if ((param_4 == 0) || (uVar4 = param_4, param_5 != param_3)) {
    uVar4 = uVar2;
  }
  *(byte *)(param_2 + 0x1d) = *(byte *)(param_2 + 0x1d) | 3;
  FUN_100a138c(piVar1,param_1,0x36);
  FUN_100a138c(piVar1,param_1,0x36);
  FUN_100a138c(piVar1,param_1,0x48);
  if (param_5 != param_3) {
    uVar4 = uVar2;
    if (param_4 != 0) {
      uVar4 = param_4;
    }
    FUN_1007324a(param_1,(int)param_2);
  }
  if (uVar4 != uVar2) {
    FUN_100a068b((int)piVar1,uVar2);
  }
  return uVar4;
}

