/*
 * FUN_1000b716 at 1000b716
 * uint __fastcall FUN_1000b716(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000b716-1000bb8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000b716(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  void *this;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_28;
  undefined8 local_20;
  int *local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  uVar8 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01');
  local_28._4_4_ = (undefined4)(uVar8 >> 0x20);
  uVar4 = (uint)uVar8;
  FUN_1000a457((int)param_1,uVar4);
  local_c = FUN_1000a049(extraout_ECX,param_2,0xffff);
  FUN_1000a457((int)param_1,local_c);
  local_10 = FUN_1000a049(extraout_ECX_00,param_2,0xffff);
  FUN_1000a457((int)param_1,local_10);
  uVar5 = FUN_1000a049(extraout_ECX_01,param_2,0xffff);
  local_28 = FUN_1000a466(param_1,-1,'\x01');
  uVar6 = (uint)local_28;
  local_20 = FUN_1000a466(this,-1,'\x01');
  FUN_1000199d(param_2,local_c,0x100100,0x2902,uVar4,0,0);
  FUN_1000199d(param_2,(uint)local_20,0x210,0x8902,local_14[2] | 0x80000000,8,0);
  FUN_1000199d(param_2,uVar6,0x1300700,0x2d02,uVar4,0,0);
  FUN_1000199d(param_2,local_c,0x130700,0xc602,local_14[1] | 0x80000000,0x170,0);
  FUN_1000199d(param_2,local_10,0x1300700,0x2a02,uVar6,0,0);
  FUN_1000199d(param_2,local_c,0x1300700,0x5c02,local_10,0,0);
  FUN_1000199d(param_2,local_10,0x100700,0x5702,local_10,0,0);
  FUN_1000199d(param_2,local_10,0x1330700,0xc202,uVar4,0,6);
  FUN_1000199d(param_2,uVar4,0x100700,0x5402,local_14[1] | 0x80000000,0x100,0);
  FUN_1000199d(param_2,uVar6,0x1300700,0x2d02,uVar4,0,0);
  FUN_1000199d(param_2,local_c,0x130700,0xc602,local_c,0,0xe1);
  FUN_1000199d(param_2,uVar6,0x12010,0xf88102,0xffffffff,0,0x400);
  FUN_1000199d(param_2,local_c,0x1300700,0x2a02,uVar6,0,0);
  FUN_1000199d(param_2,uVar6,0x100000,0x4702,local_14[1] | 0x80000000,0x1d0,0);
  FUN_1000199d(param_2,uVar4,0x1300700,0x5c02,local_c,0,0);
  uVar7 = (uVar6 & 0xff | 0xffc00200) << 8 | (uint)local_20 & 0xff;
  FUN_1000199d(local_18,uVar5,0x1300100,0x1102,uVar7,0,0);
  piVar2 = local_18;
  FUN_1000199d(local_18,local_c,0x1300100,0x1102,uVar5,0,0);
  FUN_1000199d(piVar2,uVar4,0x1300700,0x5902,local_14[1] | 0x80000000,0x1a0,0);
  FUN_1000199d(piVar2,local_c,0x130700,0xc602,local_c,0,0xc4);
  FUN_1000199d(piVar2,uVar6,0x1300700,0x2d02,uVar4,0,0);
  puVar3 = local_14;
  FUN_1000199d(piVar2,(uint)local_20,0x210,0x8902,local_14[2] | 0x80000000,4,0);
  uVar5 = local_c;
  FUN_1000199d(piVar2,local_c,0x1300700,0x5902,uVar7,0,0);
  FUN_1000199d(piVar2,uVar5,0x130700,0xc602,uVar5,0,0xc6);
  FUN_1000199d(piVar2,uVar4,0x100700,0x5302,uVar5,0,0);
  FUN_1000199d(piVar2,local_10,0x130700,0xc602,local_10,0,0x44);
  FUN_1000199d(piVar2,uVar4,0x100700,0x5402,local_10,0,0);
  FUN_1000199d(piVar2,local_10,0x100700,0x5502,uVar5,0,0);
  FUN_1000199d(piVar2,uVar5,0x100700,0x5602,local_10,0,0);
  FUN_1000a4e0((int)puVar3,piVar2,(uint *)&local_28);
  FUN_1000a4e0((int)puVar3,piVar2,(uint *)&local_20);
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((int)puVar3 + ((int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
  if (-1 < (int)local_10) {
    pbVar1 = (byte *)((int)puVar3 + ((int)local_10 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (local_10 & 7));
  }
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)puVar3 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  return uVar5;
}

