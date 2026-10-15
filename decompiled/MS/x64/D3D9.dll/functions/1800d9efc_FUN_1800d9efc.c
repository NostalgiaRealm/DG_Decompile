/*
 * FUN_1800d9efc at 1800d9efc
 * undefined __fastcall FUN_1800d9efc(longlong param_1, undefined8 * param_2, uint param_3, uint param_4, longlong param_5)
 * Address ranges: 1800d9efc-1800da0f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d9efc(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,longlong param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  float local_68 [3];
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar9 = param_5;
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_68[2] = (float)(param_3 >> 1);
  local_58 = 0;
  local_54 = 0x3f800000;
  local_5c = (float)(param_4 >> 1);
  FUN_1800dc004(param_1,(ulonglong)*(uint *)(*(longlong *)(param_5 + 0x10) + 0x10),local_68);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1800dc4ec(param_1,(ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x10) + 0x10),4,
                (longlong)&local_50,0);
  local_98 = *(undefined8 *)(lVar9 + 0x20);
  local_90 = 0;
  FUN_1800dc1e8(param_1,(ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x10) + 0x10),0,2,
                (longlong)&local_98);
  uVar11 = (ulonglong)*(uint *)(lVar9 + 0x28);
  lVar3 = *(longlong *)(lVar9 + 0x10);
  uVar13 = 0;
  param_5 = *(longlong *)(lVar3 + 0xd98 + uVar11 * 8);
  *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar3 + 0xd88 + uVar11 * 8);
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar3 + 0xda8 + uVar11 * 8);
  *(uint *)(lVar9 + 0x28) = *(uint *)(lVar9 + 0x28) - 1 & 1;
  FUN_1800dc4ec(param_1,(ulonglong)*(uint *)(lVar3 + 0x10),1,(longlong)&param_5,0);
  local_88 = 0;
  uStack_80 = 0;
  plVar4 = *(longlong **)(*(longlong *)(lVar9 + 8) + 8);
  (**(code **)(*plVar4 + 400))(plVar4,param_5,&local_88);
  uVar12 = *(uint *)(*(longlong *)(lVar9 + 8) + 0x7f0);
  if (0x400 < uVar12 + 4) {
    uVar12 = 0;
  }
  *(uint *)(*(longlong *)(lVar9 + 8) + 0x7f0) = uVar12 + 4;
  plVar4 = *(longlong **)(*(longlong *)(lVar9 + 8) + 8);
  iVar10 = (**(code **)(*plVar4 + 0x70))
                     (plVar4,*(undefined8 *)(*(longlong *)(lVar9 + 8) + 0x7e8),0,
                      (uVar12 != 0) + '\x04',uVar13 & 0xffffffff00000000,local_78);
  if (-1 < iVar10) {
    uVar8 = param_2[1];
    uVar11 = (ulonglong)uVar12;
    puVar1 = (undefined8 *)(local_78[0] + uVar11 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar8;
    uVar8 = param_2[3];
    puVar1 = (undefined8 *)(local_78[0] + 0x10 + uVar11 * 0x10);
    *puVar1 = param_2[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar6 = *(undefined4 *)(param_2 + 5);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
    puVar2 = (undefined4 *)(local_78[0] + 0x20 + uVar11 * 0x10);
    *puVar2 = *(undefined4 *)(param_2 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = *(undefined4 *)(param_2 + 7);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
    puVar2 = (undefined4 *)(local_78[0] + 0x30 + uVar11 * 0x10);
    *puVar2 = *(undefined4 *)(param_2 + 6);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    plVar4 = *(longlong **)(*(longlong *)(lVar9 + 8) + 8);
    (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(*(longlong *)(lVar9 + 8) + 0x7e8),0);
  }
  plVar4 = *(longlong **)(*(longlong *)(lVar9 + 8) + 8);
  (**(code **)(*plVar4 + 0x68))(plVar4,4,uVar12);
  return;
}

