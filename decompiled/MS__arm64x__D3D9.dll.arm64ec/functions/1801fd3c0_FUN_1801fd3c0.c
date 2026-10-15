/*
 * FUN_1801fd3c0 at 1801fd3c0
 * undefined FUN_1801fd3c0(void)
 * Address ranges: 1801fd3c0-1801fd5a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fd3c0(undefined8 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_58 = 0;
  local_50 = (float)(param_3 >> 1 & 0x7fffffff);
  local_48 = 0;
  fStack_4c = (float)(param_4 >> 1 & 0x7fffffff);
  local_44 = 0x3f800000;
  FUN_1801ffba8(param_1,*(undefined4 *)(*(longlong *)(param_5 + 0x10) + 0x10),&local_58);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1802000e0(param_1,*(undefined4 *)(*(longlong *)(param_5 + 0x10) + 0x10),4,&local_40,0);
  local_88 = *(undefined8 *)(param_5 + 0x20);
  uStack_80 = 0;
  FUN_1801ffd80(param_1,*(undefined4 *)(*(longlong *)(param_5 + 0x10) + 0x10),0,2,&local_88);
  lVar7 = *(longlong *)(param_5 + 0x10) + (ulonglong)*(uint *)(param_5 + 0x28) * 8;
  local_90 = *(undefined8 *)(lVar7 + 0xd98);
  *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(lVar7 + 0xd88);
  *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(lVar7 + 0xda8);
  *(uint *)(param_5 + 0x28) = *(uint *)(param_5 + 0x28) - 1 & 1;
  FUN_1802000e0(param_1,*(undefined4 *)(*(longlong *)(param_5 + 0x10) + 0x10),1,&local_90,0);
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  local_78 = 0;
  uStack_70 = 0;
  uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar6,local_90,&local_78);
  uVar3 = *(uint *)(*(longlong *)(param_5 + 8) + 0x7f0);
  uVar2 = 0;
  if (uVar3 + 4 < 0x401) {
    uVar2 = uVar3;
  }
  *(uint *)(*(longlong *)(param_5 + 8) + 0x7f0) = uVar2 + 4;
  lVar7 = *(longlong *)(param_5 + 8);
  uVar6 = (*(code *)puVar4)(0x180224000);
  iVar5 = (*extraout_x11_00)(uVar6,*(undefined8 *)(lVar7 + 0x7e8),0);
  if (-1 < iVar5) {
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar1 = (undefined8 *)(local_68 + (ulonglong)uVar2 * 0x10);
    puVar1[1] = param_2[1];
    *puVar1 = uVar6;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    uVar6 = param_2[4];
    uVar9 = param_2[7];
    uVar8 = param_2[6];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    lVar7 = *(longlong *)(param_5 + 8);
    uVar6 = (*(code *)puVar4)(0x180224000);
    (*extraout_x11_01)(uVar6,*(undefined8 *)(lVar7 + 0x7e8),0);
  }
  uVar6 = (*(code *)puVar4)(0x180224000);
  (*extraout_x11_02)(uVar6,4,uVar2);
  return;
}

