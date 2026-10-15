/*
 * FUN_100372b8 at 100372b8
 * undefined __stdcall FUN_100372b8(uint * param_1, undefined4 param_2, uint param_3, uint param_4, int * param_5, undefined4 param_6, undefined4 param_7, uint param_8, uint param_9)
 * Address ranges: 100372b8-100378eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100372b8(uint *param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,uint param_9)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint local_34;
  uint local_18;
  
  bVar5 = (param_9 >> 0xf & 1) != 0;
  uVar4 = (uint)bVar5;
  param_1[0x8e] = param_4;
  param_1[0x91] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x90] = 0;
  param_1[0x8c] = 0x437f0000;
  param_1[0x8d] = 0x437f0000;
  uVar3 = uVar4 * 2 | 1;
  uVar6 = 1;
  if (*param_1 == 0x40) {
    param_4 = FUN_10056ee5((int)param_1,uVar3,'\x01');
    if (bVar5) {
      FUN_10057c8a((int *)param_1,param_5,0);
    }
    local_34 = param_9 >> 0xe & 1;
    local_18 = param_9 >> 0xd & 1;
    if (local_34 != local_18) {
      uVar3 = FUN_10056ee5((int)param_1,uVar4 + 1,'\x01');
      param_1[0x90] = uVar3;
      FUN_10057c8a((int *)param_1,param_5,0x31);
    }
    FUN_10057c8a((int *)param_1,param_5,0x34);
  }
  else {
    param_4 = FUN_10056ee5((int)param_1,uVar3,'\x01');
    FUN_10056ea8(param_1,param_3,uVar6,param_3);
    FUN_10056e65(param_1,param_3,0,param_3);
    FUN_10057c8a((int *)param_1,param_5,0x6c);
    uVar6 = FUN_10031989(param_8,param_9,(char)param_3);
    FUN_100583a6((int)(param_1 + 2),param_3,'\x01' << ((byte)uVar6 & 0x1f));
    if (bVar5) {
      FUN_10057c8a((int *)param_1,param_5,0);
    }
    local_34 = param_9 >> 0xe & 1;
    local_18 = param_9 >> 0xd & 1;
    if (local_34 != local_18) {
      uVar3 = FUN_10056ee5((int)param_1,uVar4 + 1,'\x01');
      param_1[0x90] = uVar3;
      FUN_10057c8a((int *)param_1,param_5,0x31);
    }
    FUN_10057c8a((int *)param_1,param_5,0x34);
  }
  FUN_10057c8a((int *)param_1,param_5,0x33);
  FUN_10057c8a((int *)param_1,param_5,0x1c);
  if (local_34 != local_18) {
    FUN_10057c8a((int *)param_1,param_5,0x37);
    FUN_10057c8a((int *)param_1,param_5,0x27);
  }
  uVar3 = param_8 >> 0x1a & 3;
  if (((uVar3 == 0) || (uVar3 == 1)) || (uVar2 = 7, (param_9 >> 8 & 1) != 0)) {
    uVar2 = 0xf;
  }
  *(undefined1 *)(param_1 + 0x93) = uVar2;
  param_1[0x8f] = param_4;
  uVar3 = FUN_10035976((int *)param_1);
  FUN_1003680c(param_1,param_3,uVar3,param_4,0,param_5,param_8,param_9);
  if (bVar5) {
    uVar3 = FUN_10035976((int *)param_1);
    uVar3 = FUN_1003680c(param_1,param_3,uVar3,param_4,1,param_5,param_8,param_9);
    FUN_10057c8a((int *)param_1,param_5,0x1a);
    FUN_1003591b((int *)param_1,param_5);
    FUN_10056fd9((int)param_1,uVar3);
  }
  if ((param_9 >> 4 & 0xf) == 0) {
    FUN_10057c8a((int *)param_1,param_5,0x38);
  }
  else {
    FUN_10057c8a((int *)param_1,param_5,0x32);
  }
  if (((char)param_1[0x93] == '\a') && ((param_9 >> 0x10 & 1) == 0)) {
    FUN_10057c8a((int *)param_1,param_5,0x36);
  }
  uVar3 = param_1[0x90];
  if (uVar3 != 0) {
    pbVar1 = (byte *)((uVar3 & 0xff) + param_1[0xc]);
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar3 >> 0x14) & 7)) + -1 <<
                         ((byte)(param_1[0x90] >> 0x12) & 3));
  }
  FUN_10056fd9((int)param_1,param_4);
  return;
}

