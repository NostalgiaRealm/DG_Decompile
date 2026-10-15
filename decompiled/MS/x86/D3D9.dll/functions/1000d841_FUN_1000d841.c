/*
 * FUN_1000d841 at 1000d841
 * uint __fastcall FUN_1000d841(uint * param_1, int * param_2, uint param_3)
 * Address ranges: 1000d841-1000dac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000d841(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  void *this;
  void *this_00;
  uint uVar7;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  uint *local_10;
  int *local_c;
  
  local_10 = param_1;
  local_c = param_2;
  local_14 = FUN_1000b55c(param_1,param_2,0xffff);
  FUN_1000b9b4((int)param_1,local_14);
  local_1c = FUN_1000b9c3(this,-1,'\x01');
  uVar6 = (uint)local_1c;
  local_24 = FUN_1000b9c3(this_00,-1,'\x01');
  piVar5 = local_c;
  uVar7 = (uint)local_24;
  FUN_10001877(local_c,uVar6,0x1400500,0x7e02,param_3,0,0);
  FUN_10001877(piVar5,uVar7,0x210,0x8902,local_10[2] | 0x80000000,8,0);
  uVar6 = (uint)local_1c;
  FUN_10001877(piVar5,(uint)local_1c,0x30010,0x28c102,0xffffffff,0,0x17);
  FUN_10001877(piVar5,uVar6,0x12010,0x208102,0xffffffff,0,0xff);
  FUN_10001877(piVar5,local_14,0x100700,0x5702,local_14,0,0);
  FUN_10001877(piVar5,uVar6,0x12010,0x288102,0xffffffff,0,0x7f);
  piVar5 = local_c;
  FUN_10001877(local_c,uVar6,0,0x8d02,uVar6 & 0xff | 0x80000000,1,0);
  FUN_10001877(piVar5,0xffffffff,0x30000,0x7201,0xffffffff,0,0);
  iVar1 = piVar5[1];
  iVar2 = *piVar5;
  FUN_10001877(piVar5,local_14,0x1300700,0x2a02,(uint)local_1c,0,0);
  uVar7 = (uVar6 & 0xff | 0xffc00200) << 8 | (uint)local_24 & 0xff;
  FUN_10001877(local_c,param_3,0x1300700,0x5e02,uVar7,0,0);
  piVar5 = local_c;
  *(char *)(*local_c + -1 + (iVar1 - iVar2)) =
       ((char)local_c[1] - (char)*local_c) - (char)(iVar1 - iVar2);
  FUN_10001877(local_c,param_3,0x1300700,0x5902,local_10[1] | 0x80000000,0x1a0,0);
  FUN_10001877(piVar5,(uint)local_24,0x210,0x8902,local_10[2] | 0x80000000,0,0);
  FUN_10001877(piVar5,(uint)local_1c,0x1300700,0x2d02,param_3,0,0);
  uVar6 = local_14;
  FUN_10001877(piVar5,local_14,0x1300700,0x5802,uVar7,0,0);
  FUN_10001877(piVar5,uVar6,0x130700,0xc602,uVar6,0,0);
  puVar4 = local_10;
  FUN_1000ba3d((int)local_10,piVar5,(uint *)&local_1c);
  FUN_1000ba3d((int)puVar4,piVar5,(uint *)&local_24);
  if (-1 < (int)uVar6) {
    pbVar3 = (byte *)((int)puVar4 + ((int)uVar6 >> 3) + 0x14);
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
  }
  return uVar6;
}

