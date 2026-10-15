/*
 * FUN_180014f4c at 180014f4c
 * undefined1 __fastcall FUN_180014f4c(undefined8 * param_1)
 * Address ranges: 180014f4c-180015229
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180014f4c(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 uVar18;
  uint local_res10;
  uint local_res18;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar21;
  undefined8 local_90;
  int local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  tagRECT local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  local_res18 = *(uint *)(param_1 + 0xc);
  uVar18 = 0;
  lVar2 = param_1[6];
  iVar17 = *(int *)((longlong)param_1 + 0x4c);
  iVar8 = *(int *)(param_1 + 0xb);
  uVar15 = *(uint *)((longlong)param_1 + 0x5c);
  local_res10 = *(uint *)((longlong)param_1 + 100);
  if ((lVar2 != 0) && (*(short *)(lVar2 + 0x3c) != 0)) {
    lVar3 = **(longlong **)(lVar2 + 0x40);
    local_res18 = *(uint *)(lVar3 + 0x60);
    iVar17 = *(int *)(lVar3 + 0x4c);
    iVar8 = *(int *)(lVar3 + 0x58);
    uVar15 = *(uint *)(lVar3 + 0x5c);
    local_res10 = *(uint *)(lVar3 + 100);
  }
  lVar3 = param_1[5];
  lVar12 = lVar3;
  FUN_1800083fc(lVar3,(undefined4 *)&local_90);
  uVar16 = (ulonglong)local_res18;
  uVar6 = (local_res18 * (int)local_90) / local_90._4_4_;
  *(uint *)((longlong)param_1 + 0x74) = uVar6;
  uVar7 = (local_res10 * local_88) / local_84;
  *(uint *)(param_1 + 0xf) = uVar7;
  iVar8 = FUN_180003a20(lVar12,(ulonglong)*(uint *)(lVar3 + 0xea8),*(int *)(lVar3 + 0xe68),iVar8,
                        uVar15);
  uVar15 = 1;
  if (*(int *)((longlong)param_1 + 0x54) == 1) {
    uVar14 = 2;
  }
  else {
    uVar14 = 0;
    if (*(int *)((longlong)param_1 + 0x54) == 2) {
      uVar14 = uVar15;
    }
  }
  uVar9 = uVar15;
  if (iVar17 == 5) {
    uVar9 = 6;
  }
  if (lVar2 != 0) {
    uVar15 = (uint)*(ushort *)(lVar2 + 0x3c);
  }
  uVar13 = *(uint *)(param_1 + 10) & 2;
  local_90 = *(longlong **)(param_1[1] + 0x68);
  bVar11 = -(uVar13 != 0) & 3;
  if (*(int *)((longlong)param_1 + 0x4c) == 3) {
    bVar11 = (-(uVar13 != 0) & 3U) + 1;
  }
  else if (*(int *)((longlong)param_1 + 0x4c) == 5) {
    bVar11 = (-(uVar13 != 0) & 3U) + 2;
  }
  plVar10 = (longlong *)
            (**(code **)(*local_90 + 0x50))
                      (local_90,uVar6,uVar7,uVar16 & 0xffffffff,local_res10,CONCAT44(uVar19,iVar8),
                       CONCAT44(uVar20,*(undefined4 *)(param_1 + 0xe)),CONCAT44(uVar21,uVar15),
                       bVar11,uVar14);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)*param_1)(param_1);
    *(undefined1 *)(param_1[1] + 0xee) = 0;
    (**(code **)(*plVar10 + 0x88))(plVar10);
    plVar4 = *(longlong **)(param_1[1] + 0x70);
    puVar1 = (uint *)(param_1[1] + 0x100);
    *puVar1 = *puVar1 | 1;
    uVar6 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 1;
    local_80 = 0;
    uStack_78 = 0;
    local_70.left = 0;
    local_70.top = 0;
    local_70.right = 0;
    local_70.bottom = 0;
    do {
      uVar7 = 0;
      if (uVar15 != 0) {
        do {
          bVar11 = (byte)uVar7 & 0x1f;
          bVar5 = (byte)uVar7 & 0x1f;
          uVar14 = 1;
          if (local_res10 >> bVar5 != 0) {
            uVar14 = local_res10 >> bVar5;
          }
          uVar13 = 1;
          if (local_res18 >> bVar11 != 0) {
            uVar13 = local_res18 >> bVar11;
          }
          SetRect(&local_70,0 >> bVar11,0,uVar13,uVar14);
          (**(code **)(*local_90 + 0x108))
                    (local_90,uVar7,uVar6,uVar7,uVar6,plVar10,plVar4,&local_80);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar15);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar9);
    lVar2 = param_1[6];
    if (lVar2 == 0) {
      *(longlong **)(param_1[1] + 0x70) = plVar10;
    }
    else {
      uVar15 = 0;
      *(longlong **)(lVar2 + 0x58) = plVar10;
      if (*(int *)(lVar2 + 0x80) != 0) {
        do {
          uVar6 = 0;
          if (*(short *)(lVar2 + 0x3c) != 0) {
            do {
              FUN_180014e88(*(longlong *)
                             (*(longlong *)(lVar2 + 0x40) + (ulonglong)(uVar6 + uVar15 * 0x10) * 8),
                            plVar10);
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(ushort *)(lVar2 + 0x3c));
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(lVar2 + 0x80));
      }
    }
    FUN_180007f2c(param_1[5],(longlong)param_1);
    (**(code **)(*plVar4 + 0x20))(plVar4);
    uVar18 = 1;
  }
  return uVar18;
}

