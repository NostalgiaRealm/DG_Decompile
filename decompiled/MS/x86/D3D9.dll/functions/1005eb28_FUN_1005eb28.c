/*
 * FUN_1005eb28 at 1005eb28
 * undefined __stdcall FUN_1005eb28(int * param_1, int * param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 1005eb28-1005ece4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005eb28(int *param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  byte local_14;
  undefined3 uStack_13;
  void *local_10;
  byte local_9;
  
  local_2c = param_4 >> 0x10;
  uVar1 = FUN_1005e375((byte)(param_4 >> 0x10));
  bVar4 = (byte)(param_5 >> 0x10);
  local_1c = CONCAT31((int3)(uVar1 >> 8),bVar4);
  local_9 = (byte)uVar1;
  uVar2 = FUN_1005e375(bVar4);
  _local_14 = CONCAT31(uStack_13,(byte)uVar2);
  local_18 = 1;
  local_28 = param_3 & 0xff00ffff;
  uVar7 = param_4 & 0xff00ffff;
  bVar4 = (local_28 == (param_5 & 0xff00ffff)) - 1U & 2;
  if (uVar7 == (param_5 & 0xff00ffff)) {
    bVar4 = 1;
  }
  local_20 = 0;
  if (local_28 == uVar7) {
    local_20 = uVar1 & 0xff;
  }
  bVar5 = 0;
  if (bVar4 == 0) {
    bVar5 = (byte)uVar2;
  }
  uVar1 = FUN_1005e375((byte)(param_3 >> 0x10));
  FUN_1005e47e(&local_24,(int)param_1,param_3,(byte)uVar1 | bVar5 | (byte)local_20);
  FUN_1005e4d8(local_10,param_1,param_2,0,param_3,0,0,'\0',local_24,(char)local_20);
  if ((local_28 == uVar7) && (local_24 != 0)) {
    iVar6 = 0;
    param_1[0xdc] = local_24;
    *(char *)(param_1 + 0xdd) = (char)local_2c;
    param_1[0xe0] = -1;
    param_1[0xe3] = -1;
    param_1[0xe2] = -1;
    param_1[0xe1] = -1;
  }
  else {
    bVar5 = 0;
    if (bVar4 == 1) {
      bVar5 = local_14;
    }
    piVar3 = (int *)FUN_1005e47e(&local_30,(int)param_1,param_4,bVar5 | local_9);
    iVar6 = *piVar3;
    FUN_1005e4d8(local_10,param_1,param_2,local_18,param_4,0,0,'\0',iVar6,(char)piVar3[1]);
  }
  if (bVar4 == 0) {
    if (local_24 == 0) {
LAB_1005ecb4:
      piVar3 = (int *)FUN_1005e47e(&local_30,(int)param_1,param_5,(char)_local_14);
      FUN_1005e4d8(local_10,param_1,param_2,2,param_5,0,0,'\0',*piVar3,(char)piVar3[1]);
      return;
    }
    param_1[0xe4] = local_24;
  }
  else {
    if ((bVar4 != 1) || (iVar6 == 0)) goto LAB_1005ecb4;
    param_1[0xe4] = iVar6;
  }
  *(char *)(param_1 + 0xe5) = (char)local_1c;
  param_1[0xe8] = -1;
  param_1[0xeb] = -1;
  param_1[0xea] = -1;
  param_1[0xe9] = -1;
  return;
}

