/*
 * FUN_1000b55c at 1000b55c
 * undefined __fastcall FUN_1000b55c(uint * param_1, int * param_2, ushort param_3)
 * Address ranges: 1000b55c-1000b5e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b55c(uint *param_1,int *param_2,ushort param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  do {
    if (param_1[uVar3 + 6] == (uint)param_3) {
      return;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  uVar3 = 0xffffffff;
  uVar4 = 0;
  do {
    _param_3 = param_1[5];
    uVar2 = uVar3;
    if (((*(byte *)((int)&param_3 + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1) == 0) &&
       (uVar2 = uVar4, param_1[uVar4 + 6] == 0xffffffff)) goto LAB_1000b5d0;
    uVar3 = uVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  uVar4 = 0xffffffff;
  if (uVar3 != 0xffffffff) {
    FUN_10001877(param_2,*param_1 | 0x80000000,0x100100,0x2902,uVar3,param_1[uVar3 + 6] << 4,0);
    uVar4 = 0xffffffff;
  }
LAB_1000b5d0:
  if (uVar4 != 0xffffffff) {
    uVar3 = uVar4;
  }
  param_1[uVar3 + 6] = 0xffffffff;
  pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x9c);
  *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  return;
}

