/*
 * FUN_1800a37f8 at 1800a37f8
 * bool __fastcall FUN_1800a37f8(longlong param_1)
 * Address ranges: 1800a37f8-1800a39f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a37f8(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffff40;
  int local_a8 [6];
  int local_90 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x14);
  puVar5 = FUN_1800ac1a8((undefined8 *)local_a8,*(uint *)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(&DAT_1800fe8f0 + uVar10 * 4);
  local_70 = *(undefined4 *)puVar5;
  uVar12 = *(undefined4 *)((longlong)puVar5 + 4);
  uVar4 = (uint)uVar10;
  if (uVar4 < 8) {
    if ((uVar4 != 7) && (uVar4 != 0)) {
      iVar9 = uVar4 - 1;
      goto LAB_1800a3853;
    }
  }
  else {
    iVar9 = uVar4 - 8;
LAB_1800a3853:
    if ((((iVar9 != 0) && (iVar9 != 1)) && (iVar9 != 2)) &&
       (((iVar9 != 3 && (iVar9 != 4)) && (iVar9 != 5)))) goto LAB_1800a387a;
  }
  local_70 = 0x1b;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  uVar12 = 0x1c;
LAB_1800a387a:
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10);
  lVar11 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x1ac0;
  local_80 = (ulonglong)*(uint *)(param_1 + 8);
  local_78 = *(undefined4 *)(param_1 + 0xc);
  local_74 = *(undefined2 *)(param_1 + 0x10);
  local_72 = *(undefined2 *)(param_1 + 0x18);
  local_a8[0] = 1;
  local_a8[1] = 0;
  local_6c = 1;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_90[0] = 4;
  local_88 = 0;
  local_64 = 0;
  plVar6 = FUN_1800f3050(lVar11 + lVar3 + 0x21b8,local_a8,0,local_90);
  *(longlong **)(param_1 + 0x40) = plVar6;
  if (plVar6 == (longlong *)0x0) {
    lVar7 = FUN_1800f3338(lVar3,(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28),local_a8,
                          0,local_90,in_stack_ffffffffffffff40,0);
    *(longlong *)(param_1 + 0x40) = lVar7;
    if (lVar7 == 0) {
      return false;
    }
  }
  uVar4 = FUN_1800e1704(*(longlong *)(lVar11 + 0x2230 + lVar3),2);
  *(uint *)(param_1 + 0x48) = uVar4;
  if (uVar4 == 0xffffffff) {
    FUN_1800f58f8((longlong *)(lVar11 + lVar3 + 0x21b8),*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    local_38 = 0;
    local_54 = 8;
    uStack_40 = 0;
    local_48 = 0xffffffff00000000;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x28);
    local_58 = uVar12;
    local_50 = uVar1;
    plVar8 = FUN_1800e1d04(*(longlong *)(lVar11 + 0x2230 + lVar3),&local_res8,uVar4,0);
    plVar6 = *(longlong **)((ulonglong)uVar2 * 0x20 + 0x6d0 + lVar3);
    (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x40),&local_58,*plVar8);
  }
  return uVar4 != 0xffffffff;
}

