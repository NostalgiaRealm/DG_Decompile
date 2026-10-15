/*
 * FUN_180038610 at 180038610
 * undefined __cdecl FUN_180038610(longlong param_1, uint param_2, undefined4 param_3, ulonglong param_4)
 * Address ranges: 180038610-180038bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038610(longlong param_1,uint param_2,undefined4 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong extraout_x0;
  longlong *plVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar14;
  undefined ****ppppuVar15;
  longlong extraout_x8;
  int extraout_w11;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined4 *local_b0 [2];
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  RECT local_88;
  float local_78 [3];
  float fStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar5 = *(uint *)(param_1 + 0x2a94);
  uVar6 = (uint)param_4;
  uVar11 = FUN_180038ea8(param_1 + 0x3ae0,0,0);
  uVar11 = FUN_180023af0(uVar11,*(int *)(*(longlong *)(param_1 + 0x3560) + 0x2984));
  uVar12 = FUN_180023af0(uVar11,*(int *)(extraout_x8 + 0x2988));
  iVar10 = 0;
  lVar21 = 0;
  local_b0[0] = (undefined4 *)(param_1 + 0x3000);
  local_a0 = (int)uVar11;
  local_9c = param_2;
  local_98 = param_3;
  local_94 = uVar6;
  local_90 = uVar5;
  do {
    if (iVar10 == local_a0 || iVar10 == (int)uVar12) {
      lVar18 = lVar21 * 0x180;
      lVar1 = param_1 + 0x3602;
      if ((*(byte *)(lVar1 + lVar18) & 1) != 0) {
        lVar2 = param_1 + 0x3568;
        if ((*(int *)(param_1 + 0x35dc + lVar18) == 0) && (*(int *)(param_1 + lVar18 + 0x35e0) == 0)
           ) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        lVar3 = param_1 + 0x358c;
        if (bVar9) {
          FUN_18001e6a0(*(longlong *)(param_1 + 0x3560));
          FUN_180023938((longlong *)(param_1 + 0x3420),iVar10,1,0,0,
                        *(LONG *)(param_1 + 0x3588 + lVar18),*(LONG *)(lVar3 + lVar18),0);
          FUN_1800354d0((longlong *)(param_1 + 0x3420),(longlong *)(lVar18 + lVar2),1,
                        (undefined ****)0x0);
          uVar5 = *(uint *)(param_1 + 0x35d8 + lVar18);
          param_4 = (ulonglong)uVar5;
          FUN_180023770((longlong *)(param_1 + 0x3420),iVar10,*(uint *)(param_1 + 0x35d4 + lVar18),
                        uVar5,*(char *)(param_1 + 0x35fd + lVar18),
                        (uint)*(byte *)(param_1 + 0x3601 + lVar18),'\0',0,
                        *(undefined1 *)(param_1 + 0x35ff + lVar18),
                        *(undefined4 *)(param_1 + 0x35f4 + lVar18),
                        *(undefined4 *)(param_1 + 0x35f8 + lVar18));
          FUN_18002aab0(lVar18 + lVar2,(ulonglong)*(uint *)(lVar3 + lVar18));
          LeaveCriticalSection
                    ((LPCRITICAL_SECTION)
                     (*(longlong *)(*(longlong *)(param_1 + 0x3560) + 0x31b0) + 0x620));
        }
        else {
          local_88.right = *(LONG *)(param_1 + 0x3588 + lVar18);
          local_88.left = 0;
          local_88.top = 0;
          local_88.bottom = *(LONG *)(param_1 + lVar18 + 0x358c);
          UnionRect((LPRECT)(lVar18 + param_1 + 0x359c),(RECT *)(lVar18 + param_1 + 0x359c),
                    &local_88);
          param_4 = 0;
          FUN_1800354d0((longlong *)(param_1 + 0x3420),(longlong *)(lVar18 + lVar2),1,
                        (undefined ****)0x0);
          FUN_18002aab0(lVar18 + lVar2,(ulonglong)*(uint *)(lVar3 + lVar18));
          *(byte *)(lVar1 + lVar18) = *(byte *)(lVar1 + lVar18) & 0xfe;
        }
      }
      *(byte *)(lVar1 + lVar18) = *(byte *)(lVar1 + lVar21 * 0x180) | 2;
    }
    uVar17 = local_90;
    uVar6 = local_94;
    uVar8 = local_98;
    uVar5 = local_9c;
    puVar7 = local_b0[0];
    iVar10 = iVar10 + 1;
    lVar21 = lVar21 + 1;
  } while (iVar10 < 3);
  FUN_18001e6a0(param_1);
  FUN_18001d148(param_1);
  if ((*(int *)(param_1 + 0x2a60) == 0) || (bVar9 = true, *(int *)(param_1 + 0x2a64) != 1)) {
    bVar9 = false;
  }
  DAT_18006c5f4 = *(byte *)(param_1 + 0x2abc);
  if ((bVar9) || (DAT_18006c614 = '\0', (*(uint *)(param_1 + 0x2c0c) & 0xff0000) == 0)) {
    DAT_18006c614 = '\x0f';
  }
  DAT_18006c554 = *(undefined4 *)(param_1 + 0x2afc);
  DAT_18006c560 = *(undefined4 *)(param_1 + 0x2a60);
  DAT_18006c564 = *(undefined4 *)(param_1 + 0x2a64);
  FUN_1800509c0(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                (int *)&DAT_18006c5d0,param_4,*(int *)(param_1 + 0x2a9c));
  FUN_180050c70(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                &DAT_18006c560,uVar17 & 0xff);
  uVar11 = FUN_180050f48(*(ulonglong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                         (uint *)&DAT_18006c538);
  uVar11 = FUN_180023af0(uVar11,*(int *)(param_1 + 0x2984));
  uVar11 = FUN_180023af0(uVar11,*(int *)(param_1 + 0x2988));
  lVar21 = param_1 + (longlong)extraout_w11 * 0x180;
  lVar1 = lVar21 + 0x3568;
  if (extraout_w11 == -1) {
    lVar1 = 0;
  }
  lVar18 = param_1 + (longlong)(int)uVar11 * 0x180 + 0x3568;
  if ((int)uVar11 == -1) {
    lVar18 = 0;
  }
  if (lVar1 == 0) {
    uVar17 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar16 = 0;
  }
  else {
    puVar4 = (uint *)(lVar21 + 0x3590);
    bVar9 = extraout_w11 == -1;
    if (bVar9) {
      puVar4 = (uint *)&DAT_00000028;
    }
    uVar17 = *puVar4;
    puVar4 = (uint *)(lVar21 + 0x3594);
    if (bVar9) {
      puVar4 = (uint *)&DAT_0000002c;
    }
    uVar16 = *puVar4;
    puVar4 = (uint *)(lVar21 + 0x3588);
    if (bVar9) {
      puVar4 = (uint *)&DAT_00000020;
    }
    uVar19 = *puVar4;
    puVar4 = (uint *)(lVar21 + 0x358c);
    if (bVar9) {
      puVar4 = (uint *)&DAT_00000024;
    }
    uVar20 = *puVar4;
  }
  fStack_6c = (float)uVar16;
  local_78[2] = (float)uVar17;
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_68 = 0;
  local_64 = 0x3f800000;
  FUN_180051420(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),local_78);
  fVar22 = FUN_180023c28(param_1,uVar5,(byte)uVar8,uVar6 & 0xffff);
  *(byte *)(puVar7 + 0x2c6) = *(byte *)(puVar7 + 0x2c6) | 1;
  FUN_18001ca78(extraout_x0);
  FUN_18001d0b8(*(longlong *)(param_1 + 0x3560),5,*(longlong *)(param_1 + 0x3ac0),
                *(longlong *)(param_1 + 0x3aa8),*(longlong *)(param_1 + 0x3a88));
  uVar14 = 4;
  uVar12 = 0;
  plVar13 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3560) + 0x31c0) + 8);
  iVar10 = (**(code **)(*plVar13 + 0x70))(plVar13,*(undefined8 *)(param_1 + 0x3ad0),0,4,0,local_b0);
  uVar11 = extraout_x1;
  if (-1 < iVar10) {
    uVar12 = 0;
    *local_b0[0] = 0;
    local_b0[0][1] = 0;
    local_b0[0][2] = fVar22;
    local_b0[0][3] = 0;
    local_b0[0][4] = (float)uVar19;
    local_b0[0][5] = 0;
    local_b0[0][6] = fVar22;
    local_b0[0][7] = 0;
    local_b0[0][8] = 0;
    local_b0[0][9] = (float)uVar20;
    local_b0[0][10] = fVar22;
    local_b0[0][0xb] = 0;
    local_b0[0][0xc] = (float)uVar19;
    local_b0[0][0xd] = (float)uVar20;
    local_b0[0][0xe] = fVar22;
    local_b0[0][0xf] = 0;
    plVar13 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3560) + 0x31c0) + 8);
    (**(code **)(*plVar13 + 0x78))(plVar13,*(undefined8 *)(param_1 + 0x3ad0));
    uVar11 = extraout_x1_00;
  }
  FUN_180034ba8(*(longlong *)(param_1 + 0x3560) + 0x3ae0,uVar11,uVar12,uVar14);
  plVar13 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3560) + 0x31c0) + 8);
  (**(code **)(*plVar13 + 0x68))(plVar13,4,0);
  ppppuVar15 = (undefined ****)(ulonglong)DAT_18006c5f4;
  FUN_180023ce8(param_1,lVar1,lVar18,DAT_18006c5f4,DAT_18006c614);
  FUN_180036cd0((longlong *)(param_1 + 0x3420),extraout_x1_01,lVar18,ppppuVar15);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  *(undefined4 *)(param_1 + 0x2be0) = 0x1010101;
  return;
}

