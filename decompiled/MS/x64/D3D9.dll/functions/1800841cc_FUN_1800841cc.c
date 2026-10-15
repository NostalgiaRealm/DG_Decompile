/*
 * FUN_1800841cc at 1800841cc
 * undefined __fastcall FUN_1800841cc(longlong * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 1800841cc-180084698
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800841cc(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint local_res18 [4];
  byte bVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  lVar6 = param_3;
  FUN_180083f2c(param_1,param_3);
  FUN_18007ed88(param_1,param_2,lVar6);
  uVar3 = *(uint *)(param_3 + 0x15c);
  uVar10 = 0x12345678;
  uVar9 = 0xe4;
  bVar8 = 0xf;
  FUN_18007e5fc(param_1,param_3,param_2,0x36,1,0xf,uVar3);
  uVar7 = 0;
  local_res18[0] = *(uint *)(param_3 + 8) & 0x3f;
  uVar4 = 0;
  if (local_res18[0] != 0) {
    for (; (local_res18[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  uVar2 = 0;
  if (local_res18[0] != 0) {
    pbVar1 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar4 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
    while( true ) {
      uVar10 = *(undefined4 *)(param_3 + 0xd0);
      bVar8 = '\x01' << ((byte)uVar7 & 3);
      uVar3 = *(uint *)(param_3 + 0x15c);
      uVar9 = 0xe4;
      FUN_18007e5fc(param_1,param_3,param_2,0x11,(int)(uVar7 >> 2) + 0xd,bVar8,uVar3);
      *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) | 1 << ((byte)uVar4 & 0x1f);
      uVar4 = 0;
      if (local_res18[0] != 0) {
        for (; (local_res18[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (local_res18[0] == 0) break;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      pbVar1 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar4 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
    }
  }
  uVar4 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if (((uVar4 & 0x3000000) != 0 && (uVar4 >> 0x1a & 1) != 0) && (uVar4 >> 0x1b & 1) != 0) {
    uVar2 = FUN_1800ec8c0(param_3 + 0x20,1,'\x01');
  }
  FUN_1800800fc(param_1,param_2,param_3,uVar2);
  plVar5 = param_1;
  FUN_1800806f0(param_1,param_2,param_3,uVar2);
  FUN_18007e6dc(plVar5,param_3,2);
  if ((*(uint *)(param_3 + 0x1ac) & 0x80000) != 0) {
    uVar3 = (**(code **)*param_1)(param_1,param_2,param_3,4,1);
    uVar10 = 0x12345678;
    uVar9 = 0;
    bVar8 = 0xe;
    FUN_18007e5fc(param_1,param_3,param_2,0x36,4,0xe,uVar3);
    *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 0xe;
  }
  if (*(byte *)(param_3 + 0x1c7) != 0xf) {
    uVar3 = *(uint *)(param_3 + 0xbc);
    bVar8 = *(byte *)(param_3 + 0x1c7) ^ 0xf;
    uVar10 = 0x3f800000;
    uVar9 = 0xe4;
    FUN_18007e5fc(param_1,param_3,param_2,0x36,4,bVar8,uVar3);
  }
  if (*(char *)(param_3 + 0x1c9) == '\0') {
    if ((*(byte *)(param_3 + 0x1ac) & 1) == 0) {
      FUN_18007e5fc(param_1,param_3,param_2,0x36,2,0xf,*(uint *)(param_3 + 0xbc));
    }
    else {
      uVar4 = *(uint *)(param_3 + 0x1a4);
      if (uVar4 == 0) {
        uVar4 = (**(code **)*param_1)
                          (param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5),bVar8,uVar3,
                           uVar9,uVar10);
        *(uint *)(param_3 + 0x1a4) = uVar4;
      }
      FUN_18007e5fc(param_1,param_3,param_2,0x36,2,0xf,uVar4);
    }
    if ((*(byte *)(param_3 + 0x1ac) & 2) == 0) {
      FUN_18007e5fc(param_1,param_3,param_2,0x36,3,(-(*(char *)(param_3 + 0x1c8) != '\0') & 8U) + 7,
                    *(uint *)(param_3 + 0xbc));
    }
    else {
      uVar3 = FUN_180084194(param_1,param_2,param_3);
      FUN_18007e5fc(param_1,param_3,param_2,0x36,3,7,uVar3);
    }
    pbVar1 = (byte *)(param_3 + 0x1c5);
    *pbVar1 = *pbVar1 & 0xf0;
    if ((*pbVar1 == 0) && (*(int *)(param_3 + 0x1a4) != 0)) {
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a4) = 0;
    }
    pbVar1 = (byte *)(param_3 + 0x1c6);
    *pbVar1 = *pbVar1 & 0xf0;
    if ((*pbVar1 == 0) && (*(int *)(param_3 + 0x1a8) != 0)) {
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a8) = 0;
    }
  }
  plVar5 = param_1;
  FUN_180081b8c(param_1,param_2,param_3);
  FUN_18007e6dc(plVar5,param_3,1);
  if (*(char *)(param_3 + 0x1c9) != '\0') {
    plVar5 = param_1;
    FUN_1800821c0(param_1,param_2,param_3);
    pbVar1 = (byte *)(param_3 + 0x1c5);
    *pbVar1 = *pbVar1 & 0xf0;
    if ((*pbVar1 == 0) && (*(int *)(param_3 + 0x1a4) != 0)) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a4) = 0;
    }
    pbVar1 = (byte *)(param_3 + 0x1c6);
    *pbVar1 = *pbVar1 & 0xf0;
    if ((*pbVar1 == 0) && (*(int *)(param_3 + 0x1a8) != 0)) {
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a8) = 0;
      plVar5 = param_1;
    }
    FUN_18007e6dc(plVar5,param_3,4);
  }
  return;
}

