/*
 * FUN_1000b079 at 1000b079
 * uint __fastcall FUN_1000b079(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000b079-1000b2f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000b079(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  int iVar5;
  uint extraout_EDX;
  ulonglong uVar6;
  
  uVar6 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01');
  iVar5 = (int)(uVar6 >> 0x20);
  uVar4 = (uint)uVar6;
  FUN_1000199d(param_2,uVar4,0x100700,0x5402,param_1[1] | 0x80000000,0x70,0);
  FUN_1000a457((int)param_1,uVar4);
  uVar2 = FUN_1000a049(extraout_ECX,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar2);
  uVar3 = FUN_1000a049(extraout_ECX_00,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar3);
  uVar6 = FUN_1000a138(extraout_ECX_01,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
  FUN_1000199d(param_2,uVar2,0x100100,0x2902,(uint)uVar6,(int)(uVar6 >> 0x20),0);
  FUN_1000199d(param_2,uVar2,0x100700,0x5902,uVar4,iVar5,0);
  uVar6 = FUN_1000a138(param_1,param_2,*(short *)(param_3 + 3) + 1,*(byte *)(param_3 + 8),
                       *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0');
  FUN_1000199d(param_2,uVar3,0x100100,0x2902,(uint)uVar6,(int)(uVar6 >> 0x20),0);
  FUN_1000199d(param_2,uVar3,0x100700,0x5902,uVar4,iVar5,0);
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  uVar4 = FUN_1000a049(param_1,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar4);
  FUN_1000199d(param_2,extraout_EDX,0x100100,0x2902,uVar2,0,0);
  FUN_1000199d(param_2,uVar4,0x130700,0xc602,uVar3,0,0x44);
  FUN_1000199d(param_2,uVar2,0x130700,0xc602,uVar3,0,0xee);
  FUN_1000199d(param_2,uVar4,0x100700,0x5802,uVar2,0,0);
  FUN_1000199d(param_2,uVar2,0x100100,0x2902,uVar4,0,0);
  FUN_1000199d(param_2,uVar4,0x130700,0xc602,uVar4,0,0x31);
  FUN_1000199d(param_2,uVar4,0x100700,0x5802,uVar2,0,0);
  FUN_1000199d(param_2,uVar4,0x130700,0xc602,uVar4,0,8);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  return uVar4;
}

