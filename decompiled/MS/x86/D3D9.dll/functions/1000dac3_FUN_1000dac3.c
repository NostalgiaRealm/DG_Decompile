/*
 * FUN_1000dac3 at 1000dac3
 * uint __fastcall FUN_1000dac3(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000dac3-1000dd78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000dac3(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *extraout_ECX;
  void *this;
  ulonglong uVar6;
  undefined8 local_1c;
  undefined8 local_14;
  int *local_c;
  
  local_c = param_2;
  uVar6 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),'\x02',
                       *(byte *)(param_3 + 0xd),'\x01','\0');
  local_1c._4_4_ = (undefined4)(uVar6 >> 0x20);
  local_14._4_4_ = (uint)uVar6;
  FUN_1000b9b4((int)param_1,local_14._4_4_);
  uVar3 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar3);
  local_1c = FUN_1000b9c3(this,-1,'\x01');
  FUN_10001877(param_2,uVar3,0x100700,0x5702,uVar3,0,0);
  FUN_10001877(param_2,(uint)local_1c,0x1400500,0x7e02,local_14._4_4_,0,0);
  FUN_10001877(param_2,uVar3,0x130700,0xc202,local_14._4_4_,0,1);
  uVar4 = FUN_1000d841(param_1,param_2,local_14._4_4_);
  if (-1 < (int)local_14._4_4_) {
    pbVar1 = (byte *)((int)param_1 + ((int)local_14._4_4_ >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (local_14._4_4_ & 7));
  }
  local_14 = FUN_1000b9c3(param_1,-1,'\x01');
  uVar5 = (uint)local_14;
  FUN_10001877(local_c,uVar4,0x130700,0xc602,param_1[1] | 0x80000000,0x170,0x10);
  FUN_10001877(local_c,uVar5,0x210,0x8902,(uint)local_1c,0,0);
  FUN_10001877(local_c,(uint)local_1c,0x30010,0x28c102,0xffffffff,0,0x17);
  FUN_10001877(local_c,uVar5,0x12010,0x208102,0xffffffff,0,0x7fffff);
  FUN_10001877(local_c,(uint)local_1c,0x12010,0x288102,0xffffffff,0,0x7f);
  FUN_10001877(local_c,uVar5,0x12010,0x88102,0xffffffff,0,0x3f800000);
  FUN_10001877(local_c,uVar4,0x130700,0xc602,uVar4,0,0xda);
  piVar2 = local_c;
  FUN_10001877(local_c,uVar4,0x1400700,0x6e02,uVar5,0,0);
  FUN_10001877(piVar2,uVar4,0x130700,0xc602,uVar4,0,0xe1);
  FUN_10001877(piVar2,uVar4,0x1300700,0x2a02,(uint)local_1c,0,0);
  FUN_10001877(piVar2,uVar4,0x100700,0x5402,uVar3,0,0);
  FUN_10001877(piVar2,uVar3,0x100700,0x5502,param_1[1] | 0x80000000,0x140,0);
  FUN_10001877(piVar2,uVar3,0x100700,0x5602,uVar4,0,0);
  FUN_1000ba3d((int)param_1,piVar2,(uint *)&local_14);
  FUN_1000ba3d((int)param_1,piVar2,(uint *)&local_1c);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  return uVar3;
}

