/*
 * FUN_1000ac4e at 1000ac4e
 * undefined __fastcall FUN_1000ac4e(uint * param_1, int * param_2, int param_3, char param_4, char param_5)
 * Address ranges: 1000ac4e-1000b078
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000ac4e(uint *param_1,int *param_2,int param_3,char param_4,char param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *extraout_ECX;
  int iVar7;
  uint extraout_EDX;
  ulonglong uVar8;
  
  uVar2 = FUN_1000a049(param_1,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar2);
  uVar3 = FUN_1000a049(extraout_ECX,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar3);
  uVar8 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),param_5);
  iVar7 = (int)(uVar8 >> 0x20);
  uVar4 = (uint)uVar8;
  if (param_5 != '\0') {
    FUN_1000199d(param_2,uVar4,0x100700,0x5402,param_1[1] | 0x80000000,0x70,0);
  }
  FUN_1000a457((int)param_1,uVar4);
  uVar8 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
  FUN_1000199d(param_2,uVar2,0x100100,0x2902,(uint)uVar8,(int)(uVar8 >> 0x20),0);
  FUN_1000199d(param_2,uVar2,0x100700,0x5902,uVar4,iVar7,0);
  uVar8 = FUN_1000a138(param_1,param_2,*(short *)(param_3 + 3) + 1,*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
  FUN_1000199d(param_2,uVar3,0x100100,0x2902,(uint)uVar8,(int)(uVar8 >> 0x20),0);
  FUN_1000199d(param_2,uVar3,0x100700,0x5902,uVar4,iVar7,0);
  uVar5 = FUN_1000a049(param_1,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar5);
  FUN_1000199d(param_2,extraout_EDX,0x100100,0x2902,uVar2,0,0);
  FUN_1000199d(param_2,uVar5,0x130700,0xc602,uVar3,0,0x44);
  uVar6 = FUN_1000a049(param_1,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar6);
  uVar8 = FUN_1000a138(param_1,param_2,*(short *)(param_3 + 3) + 2,*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
  FUN_1000199d(param_2,uVar6,0x100100,0x2902,(uint)uVar8,(int)(uVar8 >> 0x20),0);
  FUN_1000199d(param_2,uVar6,0x100700,0x5902,uVar4,iVar7,0);
  if ((param_4 == '\0') && (-1 < (int)uVar4)) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  FUN_1000199d(param_2,uVar2,0x130700,0xc602,uVar3,0,0xee);
  if (param_4 == '\0') {
    FUN_1000199d(param_2,uVar3,0x100700,0x5702,uVar3,0,0);
  }
  else {
    uVar8 = FUN_1000a138(param_1,param_2,*(short *)(param_3 + 3) + 3,*(byte *)(param_3 + 8),
                         *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
    FUN_1000199d(param_2,uVar3,0x100100,0x2902,(uint)uVar8,(int)(uVar8 >> 0x20),0);
    FUN_1000199d(param_2,uVar3,0x100700,0x5902,uVar4,iVar7,0);
    if (-1 < (int)uVar4) {
      pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
    }
  }
  FUN_1000199d(param_2,uVar2,0x100700,0x5802,uVar5,0,0);
  FUN_1000199d(param_2,uVar5,0x100100,0x2902,uVar6,0,0);
  FUN_1000199d(param_2,uVar5,0x130700,0xc602,uVar3,0,0x44);
  FUN_1000199d(param_2,uVar6,0x130700,0xc602,uVar3,0,0xee);
  FUN_1000199d(param_2,uVar5,0x100700,0x5802,uVar6,0,0);
  FUN_1000199d(param_2,uVar6,0x100100,0x2902,uVar2,0,0);
  FUN_1000199d(param_2,uVar6,0x130700,0xc602,uVar5,0,0x88);
  FUN_1000199d(param_2,uVar2,0x130700,0xc602,uVar5,0,0xdd);
  FUN_1000199d(param_2,uVar2,0x100700,0x5802,uVar6,0,0);
  if (-1 < (int)uVar6) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar6 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
  }
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return;
}

