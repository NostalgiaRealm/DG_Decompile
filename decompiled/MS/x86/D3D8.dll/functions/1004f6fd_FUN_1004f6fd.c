/*
 * FUN_1004f6fd at 1004f6fd
 * undefined __stdcall FUN_1004f6fd(int * param_1, int * param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 1004f6fd-1004f8b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f6fd(int *param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 extraout_EDX;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  byte local_14;
  undefined3 uStack_13;
  undefined4 local_10;
  byte local_9;
  
  local_2c = param_4 >> 0x10;
  uVar1 = FUN_1004efaf((byte)(param_4 >> 0x10));
  bVar3 = (byte)(param_5 >> 0x10);
  local_1c = CONCAT31((int3)(uVar1 >> 8),bVar3);
  local_9 = (byte)uVar1;
  uVar2 = FUN_1004efaf(bVar3);
  _local_14 = CONCAT31(uStack_13,(byte)uVar2);
  local_18 = 1;
  local_28 = param_3 & 0xff00ffff;
  uVar6 = param_4 & 0xff00ffff;
  bVar3 = (local_28 == (param_5 & 0xff00ffff)) - 1U & 2;
  if (uVar6 == (param_5 & 0xff00ffff)) {
    bVar3 = 1;
  }
  local_20 = 0;
  if (local_28 == uVar6) {
    local_20 = uVar1 & 0xff;
  }
  bVar4 = 0;
  if (bVar3 == 0) {
    bVar4 = (byte)uVar2;
  }
  uVar1 = FUN_1004efaf((byte)(param_3 >> 0x10));
  FUN_1004f0bb(&local_24,(int)param_1,param_3,(byte)uVar1 | bVar4 | (byte)local_20);
  FUN_1004f115(local_10,extraout_EDX,param_1,param_2,0,param_3,0,0,'\0',local_24,(char)local_20);
  if ((local_28 == uVar6) && (local_24 != 0)) {
    iVar5 = 0;
    param_1[0xa0] = local_24;
    *(char *)(param_1 + 0xa1) = (char)local_2c;
    param_1[0xa4] = -1;
    param_1[0xa7] = -1;
    param_1[0xa6] = -1;
    param_1[0xa5] = -1;
  }
  else {
    bVar4 = 0;
    if (bVar3 == 1) {
      bVar4 = local_14;
    }
    uVar7 = FUN_1004f0bb(&local_30,(int)param_1,param_4,bVar4 | local_9);
    iVar5 = *(int *)uVar7;
    FUN_1004f115(local_10,(int)((ulonglong)uVar7 >> 0x20),param_1,param_2,local_18,param_4,0,0,'\0',
                 iVar5,(char)((int *)uVar7)[1]);
  }
  if (bVar3 == 0) {
    if (local_24 == 0) {
LAB_1004f889:
      uVar7 = FUN_1004f0bb(&local_30,(int)param_1,param_5,(char)_local_14);
      FUN_1004f115(local_10,(int)((ulonglong)uVar7 >> 0x20),param_1,param_2,2,param_5,0,0,'\0',
                   *(int *)uVar7,(char)((int *)uVar7)[1]);
      return;
    }
    param_1[0xa8] = local_24;
  }
  else {
    if ((bVar3 != 1) || (iVar5 == 0)) goto LAB_1004f889;
    param_1[0xa8] = iVar5;
  }
  *(char *)(param_1 + 0xa9) = (char)local_1c;
  param_1[0xac] = -1;
  param_1[0xaf] = -1;
  param_1[0xae] = -1;
  param_1[0xad] = -1;
  return;
}

