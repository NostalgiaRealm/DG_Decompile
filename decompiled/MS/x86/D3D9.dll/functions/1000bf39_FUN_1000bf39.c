/*
 * FUN_1000bf39 at 1000bf39
 * uint __fastcall FUN_1000bf39(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000bf39-1000c0e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000bf39(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar2 = (uint)uVar6;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar7 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  uVar3 = (uint)uVar7;
  FUN_1000b9b4((int)param_1,uVar3);
  uVar4 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar4);
  uVar5 = FUN_1000b55c(extraout_ECX_00,param_2,0xffff);
  FUN_10001877(param_2,uVar4,0x100100,0x2902,uVar2,(int)(uVar6 >> 0x20),0);
  FUN_10001877(param_2,uVar4,0x130700,0xc602,param_1[1] | 0x80000000,0x170,0x19);
  FUN_10001877(param_2,uVar5,0x100100,0x2902,uVar4,0,0);
  FUN_10001877(param_2,uVar4,0x130700,0xc602,uVar4,0,0xe2);
  FUN_10001877(param_2,uVar5,0x130700,0xc602,uVar5,0,0x9b);
  FUN_10001877(param_2,uVar4,0x100700,0x5902,uVar3,(int)(uVar7 >> 0x20),0);
  FUN_10001877(param_2,uVar4,0x100700,0x5802,uVar5,0,0);
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if ((uVar7 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if ((uVar6 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar4;
}

