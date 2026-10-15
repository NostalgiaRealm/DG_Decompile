/*
 * FUN_18007c1c0 at 18007c1c0
 * undefined FUN_18007c1c0(void)
 * Address ranges: 18007c1c0-18007c447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18007c1c0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5,uint param_6,undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  uint local_a8;
  uint local_a4;
  uint local_9c;
  uint local_98;
  uint local_94;
  int iStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  uint uStack_7c;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  uint local_68 [6];
  
  (**(code **)(*param_2 + 0x50))(param_2,&local_b8);
  local_78 = 0;
  local_b8 = local_b8 >> (ulonglong)(param_6 & 0x1f);
  if (local_b8 == 0) {
    local_b8 = 1;
  }
  uVar1 = uStack_b4 >> (ulonglong)(param_6 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  local_70 = local_b8;
  uStack_6c = uVar1;
  (*__imp_USER32_dll_IntersectRect)(&local_88,param_8,&local_78);
  uStack_bc = 1;
  local_d0 = 0;
  uStack_cc = 0;
  local_c8 = 0;
  local_c4 = local_b8;
  local_c0 = uVar1;
  if ((local_98 >> 6 & 1) == 0) {
    uVar7 = local_b8 - 1 | local_b8 - 1 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    local_d0 = local_88;
    uStack_cc = uStack_84;
    uVar7 = uVar7 | uVar7 >> 4;
    local_c4 = local_80;
    local_c0 = uStack_7c;
    local_b8 = (uVar7 | uVar7 >> 8) + 1;
    uVar1 = uVar1 - 1 | uVar1 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = (uVar1 | uVar1 >> 8) + 1;
  }
  local_b0 = 1;
  uStack_b4 = uVar1;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x40))(param_3,local_68);
    local_a8 = local_68[0];
  }
  uVar9 = 0;
  uVar5 = ((ulonglong)
           (local_a4 | (local_9c | (local_98 | (local_94 >> 0x10 | iStack_90 << 2) << 8) << 2) << 4)
          & 0x1ffffff) << 7 | ((ulonglong)uStack_b4 | (ulonglong)local_b8 << 0x10) << 0x20 |
          (ulonglong)local_a8;
  uVar1 = *(uint *)(param_1 + 0x1d4d4);
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar2 = uVar6 + uVar7 >> 1;
      uVar9 = (ulonglong)uVar2;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d4c8) + uVar9 * 0x48);
      if (uVar8 <= uVar5) {
        if (uVar5 <= uVar8) break;
        uVar7 = uVar2 + 1;
        uVar9 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
    } while (uVar6 != uVar7);
    if (((uint)uVar9 != uVar1) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x1d4c8) + uVar9 * 0x48) == uVar5))
    goto LAB_18007c3b4;
  }
  FUN_1800828a8(param_1 + 0x1d4c8,uVar9,uVar5,&local_b8,uStack_cc);
LAB_18007c3b4:
  lVar10 = *(longlong *)(param_1 + 0x1d4c8) + uVar9 * 0x48;
  uVar4 = *(undefined8 *)(lVar10 + 0x40);
  lVar10 = *(longlong *)(lVar10 + 0x38);
  if (lVar10 == 0) {
    FUN_180082758(param_1 + 0x1d4c8,&local_b8);
    uVar4 = 0;
  }
  else {
    if (param_4 != (longlong *)0x0) {
      *param_4 = lVar10;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = uVar4;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
    (**(code **)(*plVar3 + 0x170))(plVar3,lVar10,0,local_d0,uStack_cc,0,param_2,param_7,&local_d0);
    uVar4 = 1;
  }
  return uVar4;
}

