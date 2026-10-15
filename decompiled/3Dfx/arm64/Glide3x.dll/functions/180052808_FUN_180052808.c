/*
 * FUN_180052808 at 180052808
 * undefined __cdecl FUN_180052808(longlong param_1, undefined8 * param_2, ulonglong param_3, ulonglong param_4, longlong param_5)
 * Address ranges: 180052808-1800529b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052808(longlong param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  float local_58 [3];
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = (float)(param_3 >> 1 & 0x7fffffff);
  local_48 = 0;
  fStack_4c = (float)(param_4 >> 1 & 0x7fffffff);
  local_44 = 0x3f800000;
  FUN_180054160(param_1,(ulonglong)*(uint *)(*(longlong *)(param_5 + 0x10) + 0x10),local_58);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1800544c0(param_1,(ulonglong)*(uint *)(*(longlong *)(param_5 + 0x10) + 0x10),4,
                (longlong)&local_40,0);
  local_88 = *(undefined8 *)(param_5 + 0x20);
  uStack_80 = 0;
  FUN_180054258(param_1,(ulonglong)*(uint *)(*(longlong *)(param_5 + 0x10) + 0x10),0,2,
                (longlong)&local_88);
  lVar1 = *(longlong *)(param_5 + 0x10) + (ulonglong)*(uint *)(param_5 + 0x28) * 8;
  local_90 = *(undefined8 *)(lVar1 + 0xd98);
  *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(lVar1 + 0xd88);
  *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(lVar1 + 0xda8);
  *(uint *)(param_5 + 0x28) = *(uint *)(param_5 + 0x28) - 1 & 1;
  FUN_1800544c0(param_1,(ulonglong)*(uint *)(*(longlong *)(param_5 + 0x10) + 0x10),1,
                (longlong)&local_90,0);
  local_78 = 0;
  uStack_70 = 0;
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 8) + 8);
  (**(code **)(*plVar6 + 400))(plVar6,local_90,&local_78);
  uVar4 = *(uint *)(*(longlong *)(param_5 + 8) + 0x7f0);
  uVar3 = 0;
  if (uVar4 + 4 < 0x401) {
    uVar3 = uVar4;
  }
  *(uint *)(*(longlong *)(param_5 + 8) + 0x7f0) = uVar3 + 4;
  uVar7 = 4;
  if (uVar3 != 0) {
    uVar7 = 5;
  }
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 8) + 8);
  iVar5 = (**(code **)(*plVar6 + 0x70))
                    (plVar6,*(undefined8 *)(*(longlong *)(param_5 + 8) + 0x7e8),0,uVar7,0,local_68);
  if (-1 < iVar5) {
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar2 = (undefined8 *)(local_68[0] + (ulonglong)uVar3 * 0x10);
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    puVar2[3] = uVar9;
    puVar2[2] = uVar8;
    uVar10 = param_2[4];
    uVar9 = param_2[7];
    uVar8 = param_2[6];
    puVar2[5] = param_2[5];
    puVar2[4] = uVar10;
    puVar2[7] = uVar9;
    puVar2[6] = uVar8;
    plVar6 = *(longlong **)(*(longlong *)(param_5 + 8) + 8);
    (**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(*(longlong *)(param_5 + 8) + 0x7e8),0);
  }
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 8) + 8);
  (**(code **)(*plVar6 + 0x68))(plVar6,4,uVar3);
  return;
}

