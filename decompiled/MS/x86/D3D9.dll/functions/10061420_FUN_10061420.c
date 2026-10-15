/*
 * FUN_10061420 at 10061420
 * undefined __stdcall FUN_10061420(uint * param_1, uint param_2, uint param_3, int param_4, uint * param_5, int * param_6, char param_7, char param_8)
 * Address ranges: 10061420-10061602
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061420(uint *param_1,uint param_2,uint param_3,int param_4,uint *param_5,int *param_6,
                 char param_7,char param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined1 extraout_DL;
  undefined1 uVar4;
  uint *extraout_EDX;
  uint *puVar5;
  uint *puVar6;
  uint local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint *local_18;
  uint local_14;
  
  param_5[200] = *param_1 >> 7 & 0x2000;
  puVar5 = param_5 + 0xcc;
  uVar1 = *param_1;
  local_18 = (uint *)(uVar1 & 0x7ff);
  local_14 = (uVar1 & param_2) >> 0x10 & 0xffffff0f;
  if (*puVar5 != 0) goto LAB_10061507;
  uVar1 = FUN_1005da5e(uVar1);
  if (uVar1 == 0) {
    uVar1 = FUN_1005e39a((int)param_5,(int)local_18);
LAB_100614f0:
    uVar4 = (undefined1)local_14;
    *puVar5 = uVar1;
  }
  else {
    if (uVar1 != 8) {
      if (uVar1 == 9) {
        *puVar5 = 0x20000c00;
        *(undefined1 *)(param_5 + 0xcd) = 0;
        param_5[0xd0] = 0xffffffff;
        param_5[0xd3] = 0xffffffff;
        param_5[0xd2] = 0xffffffff;
        param_5[0xd1] = 0xffffffff;
        goto LAB_10061507;
      }
      if (uVar1 != 0x13) goto LAB_10061507;
      uVar1 = FUN_100612b3((int)param_5);
      goto LAB_100614f0;
    }
    uVar1 = param_5[(int)local_18 + 0xb0];
    uVar4 = extraout_DL;
    if (uVar1 == 0) {
      uVar1 = FUN_100c2e34((int)param_5,4,'\x01');
      uVar4 = (undefined1)local_14;
      param_5[(int)local_18 + 0xb0] = uVar1;
    }
    *puVar5 = uVar1;
  }
  param_5[0xd1] = 0xffffffff;
  param_5[0xd2] = 0xffffffff;
  param_5[0xd3] = 0xffffffff;
  param_5[0xd0] = 0xffffffff;
  *(undefined1 *)(param_5 + 0xcd) = uVar4;
LAB_10061507:
  local_18 = param_1 + 1;
  uVar1 = FUN_1005da5e(*local_18);
  if (uVar1 == 0x13) {
    if (param_5[0x138] == 0xffffffff) {
      puVar6 = param_5 + 0xd8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_5[0xec] = param_5[0xd4];
      puVar5 = param_5 + 0xcc;
      puVar6 = param_5 + 0xe4;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_5[0xed] = param_5[0xd5];
      local_40 = FUN_100c2e34((int)param_5,4,'\x01');
      local_3c = (char)local_14;
      local_30 = 0xffffffff;
      local_2c = 0xffffffff;
      local_28 = 0xffffffff;
      local_24 = 0xffffffff;
      puVar5 = &local_40;
      puVar6 = param_5 + 0xcc;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = param_5 + 0xcc;
      puVar6 = param_5 + 0xf0;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar2 = 0;
      puVar5 = param_5;
    }
    else {
      *(byte *)(param_5 + 0xd9) = (byte)param_5[0xd9] | (byte)extraout_EDX;
      uVar2 = extraout_ECX;
      puVar5 = extraout_EDX;
    }
    param_1 = local_18;
    param_5[0x138] = *local_18;
    uVar2 = FUN_100c40de(CONCAT31((int3)((uint)uVar2 >> 8),0xe4),
                         CONCAT31((int3)((uint)puVar5 >> 8),(char)param_5[0xd9]));
    *(char *)(param_5 + 0xf1) = (char)uVar2;
    *(char *)(param_5 + 0xe5) = (char)uVar2;
  }
  FUN_100617f1(param_1 + 1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

