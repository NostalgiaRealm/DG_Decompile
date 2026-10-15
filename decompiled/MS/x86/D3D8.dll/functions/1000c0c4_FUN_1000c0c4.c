/*
 * FUN_1000c0c4 at 1000c0c4
 * uint __fastcall FUN_1000c0c4(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000c0c4-1000c412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000c0c4(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint extraout_EDX;
  ulonglong uVar4;
  undefined8 local_20;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  uVar4 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01');
  local_20._4_4_ = (undefined4)(uVar4 >> 0x20);
  local_c = (uint)uVar4;
  FUN_1000a457((int)param_1,local_c);
  local_10 = FUN_1000a049(extraout_ECX,param_2,0xffff);
  FUN_1000a457((int)param_1,local_10);
  uVar2 = FUN_1000a049(extraout_ECX_00,param_2,0xffff);
  FUN_1000a457((int)param_1,uVar2);
  FUN_1000c973(extraout_ECX_01,param_2,'\0');
  local_20 = FUN_1000a466(param_1,-1,'\x01');
  uVar3 = (uint)local_20;
  FUN_1000199d(param_2,uVar2,0x100700,0x5702,uVar2,0,0);
  FUN_1000199d(param_2,local_10,0x100100,0x2902,param_1[1] | 0x80000000,0x170,0);
  FUN_1000199d(param_2,uVar2,0x1330700,0xc202,local_c,0,1);
  FUN_1000199d(param_2,uVar3,0x100700,0x5002,uVar2,0,0);
  FUN_1000199d(param_2,uVar2,0x100100,0x2902,local_c,0,0);
  FUN_1000199d(param_2,uVar3,0x10010,0xf702,0xffffffff,0,1);
  FUN_1000199d(param_2,uVar2,0x130700,0xc602,uVar2,0,0xff);
  FUN_1000199d(param_2,0xffffffff,0x110000,0x8401,0xffffffff,0,0);
  local_14 = param_2[1] - *param_2;
  FUN_1000199d(param_2,local_10,0x1300100,0x1102,local_c,0,0);
  FUN_1000199d(param_2,uVar3,0x10010,0xf702,0xffffffff,0,2);
  uVar3 = local_10;
  FUN_1000199d(param_2,local_10,0x130700,0xc602,local_10,0,0xe3);
  FUN_1000199d(param_2,0xffffffff,0x110000,0x8401,0xffffffff,0,0);
  local_18 = param_2[1] - *param_2;
  FUN_1000199d(param_2,uVar2,0x100700,0x5f02,param_1[1] | 0x80000000,400,0);
  FUN_1000199d(param_2,uVar2,0x100700,0x5d02,param_1[1] | 0x80000000,0x180,0);
  FUN_1000199d(param_2,local_c,0x130700,0xc602,local_c,0,0x55);
  FUN_1000a4e0((int)param_1,param_2,(uint *)&local_20);
  local_10 = FUN_1000bb8d(param_1,param_2,local_c);
  FUN_1000a457((int)param_1,local_10);
  FUN_1000199d(param_2,extraout_EDX,0x100700,0x5902,uVar2,0,0);
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  uVar2 = FUN_1000b40d(param_1,param_2,local_10);
  if (-1 < (int)local_10) {
    pbVar1 = (byte *)((int)param_1 + ((int)local_10 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (local_10 & 7));
  }
  FUN_1000199d(param_2,uVar3,0x1300100,0x1102,uVar2,0,0);
  FUN_1000199d(param_2,uVar3,0x130700,0xc602,uVar3,0,199);
  *(int *)(*param_2 + -4 + local_14) = (param_2[1] - *param_2) - local_14;
  *(int *)(*param_2 + -4 + local_18) = (param_2[1] - *param_2) - local_18;
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  if (-1 < (int)local_c) {
    pbVar1 = (byte *)((int)param_1 + ((int)local_c >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (local_c & 7));
  }
  return uVar3;
}

