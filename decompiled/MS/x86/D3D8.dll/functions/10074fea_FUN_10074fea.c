/*
 * FUN_10074fea at 10074fea
 * uint __fastcall FUN_10074fea(int * param_1, uint * param_2, uint param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 10074fea-1007549d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_10074fea(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_2c;
  uint local_18;
  uint local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_2c = 2;
  param_2[*(byte *)((int)param_2 + 0x61) + 0x1f] = (((byte)*param_2 & 0xf) == 4) + 4;
  bVar4 = 0;
  if (*(char *)((int)param_2 + 6) != '\0') {
    bVar4 = 2;
  }
  bVar4 = bVar4 | *(char *)((int)param_2 + 5) != '\0';
  if ((param_6 == 0) || ((*param_2 & 0x800) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar4 != 0) || (FUN_10073468((int)param_2,param_3,param_4), !bVar2)) ||
     (uVar3 = param_6, param_5 != 2)) {
    uVar3 = FUN_100a05ed((int)(param_2 + 3),4,'\x01');
  }
  uVar7 = 0;
  if (uVar3 != param_6) {
    uVar7 = uVar3;
  }
  FUN_10074d74(param_1,param_2,0);
  uVar6 = 0;
  if (bVar4 != 0) {
    uVar6 = param_3;
  }
  uVar5 = 0;
  if (bVar4 != 0) {
    uVar5 = param_4;
  }
  if ((*param_2 & 0x800) != 0) {
    local_18 = FUN_100a05ed((int)(param_2 + 3),4,'\x01');
    FUN_10074e87(param_1,(int)param_2);
  }
  if (*(char *)((int)param_2 + 5) != '\0') {
    if (bVar4 == 1) {
      FUN_10073468((int)param_2,uVar6,0);
    }
    local_10 = FUN_100a05ed((int)(param_2 + 3),4,'\x01');
    FUN_10074d74(param_1,param_2,1);
    if ((*param_2 & 0x800) != 0) {
      if (local_18 == 0) {
        local_18 = FUN_100a05ed((int)(param_2 + 3),4,'\x01');
      }
      FUN_10074e87(param_1,(int)param_2);
    }
    FUN_100a138c((int *)(param_2 + 3),param_1,0x56);
    FUN_100a138c((int *)(param_2 + 3),param_1,0x56);
    local_2c = 1;
    if (((bVar4 != 1) || (!bVar2)) || (uVar3 = param_6, param_5 != 1)) {
      uVar3 = uVar7;
    }
    FUN_1007340b(param_1,(int)param_2);
    if (bVar4 == 1) {
      FUN_10073468((int)param_2,0,uVar5);
    }
  }
  if (*(char *)((int)param_2 + 6) == '\0') {
LAB_10075318:
    if (*(char *)((int)param_2 + 5) == '\0') goto LAB_10075423;
  }
  else {
    if (bVar4 == 2) {
      FUN_10073468((int)param_2,uVar6,0);
    }
    if (local_10 == 0) {
      local_10 = FUN_100a05ed((int)(param_2 + 3),4,'\x01');
    }
    FUN_10074d74(param_1,param_2,2);
    if ((*param_2 & 0x800) != 0) {
      if (local_18 == 0) {
        local_18 = FUN_100a05ed((int)(param_2 + 3),4,'\x01');
      }
      FUN_10074e87(param_1,(int)param_2);
    }
    if (*(char *)((int)param_2 + 5) == '\0') {
      FUN_100a138c((int *)(param_2 + 3),param_1,0x56);
      FUN_100a138c((int *)(param_2 + 3),param_1,0x56);
      local_2c = 1;
      if ((!bVar2) || (uVar3 = param_6, param_5 != 1)) {
        uVar3 = uVar7;
      }
      FUN_1007340b(param_1,(int)param_2);
      FUN_10073468((int)param_2,0,uVar5);
      goto LAB_10075318;
    }
  }
  if (*(char *)((int)param_2 + 6) != '\0') {
    FUN_10073468((int)param_2,uVar6,0);
    puVar1 = param_2 + 3;
    uVar3 = FUN_100a05ed((int)puVar1,4,'\x01');
    FUN_10074d74(param_1,param_2,3);
    if ((*param_2 & 0x800) != 0) {
      FUN_10074e87(param_1,(int)param_2);
    }
    FUN_100a138c((int *)puVar1,param_1,0x56);
    FUN_100a138c((int *)puVar1,param_1,0x56);
    local_2c = 1;
    FUN_1007340b(param_1,(int)param_2);
    FUN_100a068b((int)puVar1,uVar3);
    if ((!bVar2) || (uVar3 = param_6, param_5 != 1)) {
      uVar3 = uVar7;
    }
    FUN_1007340b(param_1,(int)param_2);
    FUN_10073468((int)param_2,0,uVar5);
  }
LAB_10075423:
  if ((*param_2 & 0x800) != 0) {
    FUN_100737f7(param_1,param_2,local_18,0,uVar5,local_18);
  }
  if ((uVar3 != param_6) && (local_2c != param_5)) {
    uVar3 = uVar7;
    if (param_6 != 0) {
      uVar3 = param_6;
    }
    FUN_1007324a(param_1,(int)param_2);
  }
  if (uVar7 != uVar3) {
    FUN_100a068b((int)(param_2 + 3),uVar7);
  }
  FUN_100a068b((int)(param_2 + 3),local_10);
  FUN_100a068b((int)(param_2 + 3),local_18);
  return uVar3;
}

