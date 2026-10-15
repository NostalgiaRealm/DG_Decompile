/*
 * FUN_1000bd63 at 1000bd63
 * uint __fastcall FUN_1000bd63(uint * param_1, int * param_2, uint * param_3, uint * param_4, char param_5)
 * Address ranges: 1000bd63-1000be9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000bd63(uint *param_1,int *param_2,uint *param_3,uint *param_4,char param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *extraout_ECX;
  
  uVar2 = FUN_1000b55c(param_1,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar2);
  uVar3 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_10001877(param_2,uVar3,0x100100,0x2902,*param_3,param_3[1],0);
  FUN_10001877(param_2,uVar3,0x100700,0x5902,*param_4,param_4[1],0);
  FUN_10001877(param_2,uVar2,0x100700,0x1202,uVar3,0,0);
  uVar4 = 0x100700;
  if (param_5 == '\0') {
    uVar4 = 0x1300700;
  }
  FUN_10001877(param_2,uVar3,uVar4,0x5802,uVar2,0,0);
  FUN_10001877(param_2,uVar2,0x100100,0x2902,uVar3,0,0x55);
  FUN_10001877(param_2,uVar2,0x130700,0xc602,uVar3,0,0x55);
  FUN_10001877(param_2,uVar3,0x1300700,0x5802,uVar2,0,0);
  FUN_10001877(param_2,uVar3,0x130700,0xc602,uVar3,0,0);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar3;
}

