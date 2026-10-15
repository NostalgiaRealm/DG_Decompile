/*
 * FUN_1003ccc8 at 1003ccc8
 * undefined FUN_1003ccc8(void)
 * Address ranges: 1003ccc8-1003d27b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ccc8(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong extraout_x11;
  int iVar15;
  int extraout_w12;
  ulonglong uVar16;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  int extraout_w13;
  int extraout_w13_00;
  short *extraout_w13_01;
  int extraout_w13_02;
  int extraout_w13_03;
  int extraout_w13_04;
  ulonglong extraout_x13;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  ulonglong extraout_x14_01;
  ulonglong extraout_x14_02;
  short *extraout_w15;
  short *extraout_w15_00;
  short *psVar17;
  undefined1 auVar18 [16];
  uint local_50;
  undefined8 *local_4c [3];
  
  *(undefined8 *)(param_3 + 0x2d0) = 0x800030;
  local_4c[0] = (undefined8 *)(param_3 + 0xe4);
  *(undefined4 *)(param_3 + 0x2d8) = 0x1800130;
  *(undefined8 *)(param_3 + 0xec) = 0;
  *local_4c[0] = 0;
  *(undefined8 *)(param_3 + 0xfc) = 0;
  *(undefined8 *)(param_3 + 0xf4) = 0;
  *(undefined8 *)(param_3 + 0x10c) = 0;
  *(undefined8 *)(param_3 + 0x104) = 0;
  *(undefined8 *)(param_3 + 0x11c) = 0;
  *(undefined8 *)(param_3 + 0x114) = 0;
  *(undefined8 *)(param_3 + 300) = 0;
  *(undefined8 *)(param_3 + 0x124) = 0;
  *(undefined8 *)(param_3 + 0x13c) = 0;
  *(undefined8 *)(param_3 + 0x134) = 0;
  uVar6 = 0;
  *(undefined8 *)(param_3 + 0x14c) = 0;
  *(undefined8 *)(param_3 + 0x144) = 0;
  *(undefined8 *)(param_3 + 0x15c) = 0;
  *(undefined8 *)(param_3 + 0x154) = 0;
  *(undefined8 *)(param_3 + 0x16c) = 0;
  *(undefined8 *)(param_3 + 0x164) = 0;
  *(undefined8 *)(param_3 + 0x17c) = 0;
  *(undefined8 *)(param_3 + 0x174) = 0;
  *(undefined8 *)(param_3 + 0x18c) = 0;
  *(undefined8 *)(param_3 + 0x184) = 0;
  *(undefined8 *)(param_3 + 0x19c) = 0;
  *(undefined8 *)(param_3 + 0x194) = 0;
  *(undefined8 *)(param_3 + 0x1ac) = 0;
  *(undefined8 *)(param_3 + 0x1a4) = 0;
  *(undefined8 *)(param_3 + 0x1bc) = 0;
  *(undefined8 *)(param_3 + 0x1b4) = 0;
  *(undefined8 *)(param_3 + 0x1cc) = 0;
  *(undefined8 *)(param_3 + 0x1c4) = 0;
  *(undefined8 *)(param_3 + 0x1dc) = 0;
  *(undefined8 *)(param_3 + 0x1d4) = 0;
  *(undefined8 *)(param_3 + 0x1ec) = 0;
  *(undefined8 *)(param_3 + 0x1e4) = 0;
  *(undefined4 *)(param_3 + 500) = 0;
  do {
    *(undefined2 *)(param_3 + 0x2dc) = *(undefined2 *)(param_3 + 0x2d0);
    *(undefined2 *)(param_3 + 0x2de) = *(undefined2 *)(param_3 + 0x2d2);
    if ((*(uint *)(param_2 + uVar6 * 4) & 0x1f) < 2) break;
    FUN_1003c4f0(param_1,param_2,uVar6,param_3,0);
    FUN_1003c4f0(param_1,param_2,uVar6,param_3,1);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  puVar3 = local_4c[0];
  uVar8 = 0;
  local_50 = 0;
  local_4c[0] = (undefined8 *)0x0;
  uVar16 = 0xffffffff;
  uVar5 = 1;
  if (uVar6 != 0) {
    uVar12 = uVar6;
LAB_1003cdd8:
    uVar11 = uVar12 - 1;
    if ((*(ushort *)(param_3 + 0xd4 + uVar12 * 0x10) & 0xf0) != 0x10) goto code_r0x1003cdf0;
    uVar8 = 1 << (ulonglong)(uVar11 & 0x1f);
    uVar16 = (ulonglong)uVar11;
    local_50 = uVar8;
    if (uVar12 != 0) {
      uVar11 = uVar12 << 4;
      do {
        uVar10 = (ulonglong)uVar12;
        uVar9 = (ulonglong)uVar11;
        if ((uVar5 << (ulonglong)(uVar12 - 1 & 0x1f) & uVar8) != 0) {
          uVar8 = 0;
          uVar16 = (ulonglong)(param_3 + uVar12 * 0x10 + 0xd6);
          do {
            param_3 = FUN_1003ca48(uVar5,param_3,(int)uVar16 + uVar8 * 2,&local_50,local_4c);
            uVar11 = (uint)uVar9;
            uVar12 = (uint)uVar10;
            uVar8 = extraout_w13 + 1;
            uVar16 = extraout_x14;
            uVar5 = param_3;
          } while (uVar8 < 3);
          iVar15 = uVar11 + param_3;
          if ((*(short *)(iVar15 + 0xdc) == 0x90) || (*(short *)(iVar15 + 0xde) == 0x90)) {
            local_50 = param_3 << (ulonglong)(uVar12 - 2 & 0x1f) | local_50;
          }
          psVar17 = (short *)(param_3 + (uVar12 + 0xe) * 0x10);
          uVar16 = extraout_x12;
          uVar8 = local_50;
          if (((*psVar17 != 0) || (*(short *)(iVar15 + 0xe2) != 0)) &&
             (((param_3 << (ulonglong)(uVar12 & 0x1f) & local_50) == 0 ||
              ((iVar13 = param_3 + uVar12 * 0x10, *(short *)(iVar13 + 0xec) == 0 &&
               (*(short *)(iVar13 + 0xee) == 0)))))) {
            *psVar17 = 0;
            *(undefined2 *)(iVar15 + 0xe2) = 0;
            *(undefined2 *)(uVar11 + param_3 + 0xd8) = 0;
          }
        }
        uVar12 = uVar12 - 1;
        uVar11 = uVar11 - 0x10;
      } while (uVar12 != 0);
      goto LAB_1003cf1c;
    }
  }
  uVar16 = 0xffffffff;
  iVar15 = -1;
  uVar8 = local_50;
  puVar14 = (undefined8 *)0x0;
  if (uVar6 != 0) {
LAB_1003cf1c:
    iVar15 = (int)uVar16;
    while (uVar12 = uVar5 << (ulonglong)(uVar6 - 1 & 0x1f),
          (*(ushort *)(param_3 + 0x154 + uVar6 * 0x10) & 0xf0) != 0x10) {
      puVar14 = local_4c[0];
      if ((uVar12 & (uint)local_4c[0]) != 0) goto LAB_1003cf5c;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_1003cfac;
    }
    puVar14 = (undefined8 *)(uVar12 | (uint)local_4c[0]);
    local_4c[0] = puVar14;
LAB_1003cf5c:
    do {
      if ((uVar5 << (ulonglong)(uVar6 - 1 & 0x1f) & (uint)puVar14) != 0) {
        uVar8 = 0;
        uVar10 = (ulonglong)(param_3 + uVar6 * 0x10 + 0x156);
        do {
          uVar5 = FUN_1003ca48(uVar5,param_3,(int)uVar10 + uVar8 * 2,&local_50,local_4c);
          uVar8 = extraout_w13_00 + 1;
          uVar16 = extraout_x12_00;
          uVar10 = extraout_x14_00;
          puVar14 = local_4c[0];
          param_3 = uVar5;
        } while (uVar8 < 3);
      }
      iVar15 = (int)uVar16;
      uVar6 = uVar6 - 1;
      uVar8 = local_50;
    } while (uVar6 != 0);
  }
LAB_1003cfac:
  uVar16 = 0xffffffff;
  uVar6 = 0;
  do {
    uVar12 = uVar5 << (ulonglong)(uVar6 & 0x1f);
    if ((uVar12 & uVar8) == 0) {
      *(undefined2 *)(uVar6 * 0x10 + param_3 + 0xe4) = 0;
    }
    bVar4 = (uVar12 & (uint)puVar14) == 0;
    uVar12 = uVar6;
    if (bVar4) {
      uVar12 = (uint)uVar16;
    }
    uVar16 = (ulonglong)uVar12;
    if (bVar4) {
      *(undefined2 *)(uVar6 * 0x10 + param_3 + 0x164) = 0;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  uVar7 = FUN_1003cac8(uVar5,puVar3,uVar8,iVar15,*(uint *)(param_2 + iVar15 * 4) & 0x1f,0);
  iVar13 = (int)uVar16;
  uVar10 = (ulonglong)(param_3 + 0x164);
  uVar6 = FUN_1003cac8(uVar7,uVar10,extraout_x11 & 0xffffffff,uVar16 & 0xffffffff,
                       *(uint *)(param_2 + iVar13 * 4) >> 5 & 0x1f,1);
  iVar15 = extraout_w12;
  if ((extraout_x13 & 1) != 0) {
    uVar8 = 0;
    do {
      iVar15 = uVar8 * 0x10;
      uVar8 = uVar8 + 1;
      *(undefined2 *)(param_3 + 0xe4 + iVar15) = 0;
    } while (uVar8 < 8);
    iVar15 = -1;
  }
  if ((uVar6 & 1) != 0) {
    uVar8 = 0;
    do {
      iVar13 = uVar8 * 0x10;
      uVar8 = uVar8 + 1;
      *(undefined2 *)(param_3 + 0x164 + iVar13) = 0;
    } while (uVar8 < 8);
    iVar13 = -1;
  }
  if (iVar15 != -1) {
    uVar8 = iVar15 * 4;
    if ((((*(uint *)(uVar8 + param_2) & 0x1f) == 2) &&
        ((*(uint *)(param_2 + 0x24) >> (ulonglong)(uVar8 & 0x1f) & 0xf) == 0)) &&
       (iVar1 = param_3 + iVar15 * 0x10, psVar17 = (short *)(iVar1 + 0xe4),
       *psVar17 == *(short *)(iVar1 + 0xe8))) {
      *psVar17 = 0;
    }
    if ((((*(uint *)(uVar8 + param_2) & 0x1f) == 3) &&
        ((*(uint *)(param_2 + 0x28) >> (ulonglong)(uVar8 & 0x1f) & 0xf) == 0)) &&
       (iVar15 = param_3 + iVar15 * 0x10, psVar17 = (short *)(iVar15 + 0xe4),
       *psVar17 == *(short *)(iVar15 + 0xea))) {
      *psVar17 = 0;
    }
  }
  if (iVar13 != -1) {
    puVar2 = (uint *)(param_2 + iVar13 * 4);
    if ((((*puVar2 & 0x3e0) - 0x20 & 0xffffffdf) == 0) &&
       (iVar15 = param_3 + iVar13 * 0x10, psVar17 = (short *)(iVar15 + 0x164),
       *psVar17 == *(short *)(iVar15 + 0x168))) {
      *psVar17 = 0;
    }
    if (((*puVar2 & 0x3e0) == 0x60) &&
       (iVar15 = param_3 + iVar13 * 0x10, psVar17 = (short *)(iVar15 + 0x164),
       *psVar17 == *(short *)(iVar15 + 0x16a))) {
      *psVar17 = 0;
    }
  }
  uVar8 = 0;
  do {
    uVar16 = (ulonglong)uVar8;
    auVar18 = FUN_1003cb88(uVar6,param_3,uVar16,*(undefined2 *)(puVar3 + uVar8 * 2));
    uVar9 = uVar16 & 0xffffffff;
    param_3 = FUN_1003cb88(auVar18._0_8_,auVar18._8_8_ & 0xffffffff,uVar9,
                           *(undefined2 *)((int)uVar10 + (int)uVar16 * 0x10));
    psVar17 = extraout_w15;
    if (*extraout_w13_01 != 0) {
      uVar6 = 0;
      uVar16 = (ulonglong)(param_3 + (int)uVar9 * 0x10 + 0xe6);
      do {
        uVar9 = uVar9 & 0xffffffff;
        param_3 = FUN_1003cb88(param_3,param_3,uVar9,*(undefined2 *)((int)uVar16 + uVar6 * 2));
        uVar6 = extraout_w13_02 + 1;
        uVar16 = extraout_x14_01;
      } while (uVar6 < 3);
      uVar16 = uVar9 & 0xffffffff;
      auVar18 = FUN_1003cb88(param_3,param_3,uVar16,
                             *(undefined2 *)(param_3 + (int)uVar9 * 0x10 + 0xec));
      uVar9 = uVar16 & 0xffffffff;
      param_3 = FUN_1003cb88(auVar18._0_8_,auVar18._8_8_ & 0xffffffff,uVar9,
                             *(undefined2 *)(extraout_w13_03 + 0xee));
      psVar17 = extraout_w15_00;
    }
    iVar15 = (int)uVar9;
    if (*psVar17 != 0) {
      uVar6 = 0;
      uVar16 = (ulonglong)(param_3 + iVar15 * 0x10 + 0x166);
      do {
        uVar9 = uVar9 & 0xffffffff;
        param_3 = FUN_1003cb88(param_3,param_3,uVar9,*(undefined2 *)((int)uVar16 + uVar6 * 2));
        iVar15 = (int)uVar9;
        uVar6 = extraout_w13_04 + 1;
        uVar16 = extraout_x14_02;
      } while (uVar6 < 3);
    }
    uVar8 = iVar15 + 1;
    uVar6 = param_3;
  } while (uVar8 < 8);
  return;
code_r0x1003cdf0:
  uVar12 = uVar11;
  if (uVar11 == 0) goto LAB_1003cf1c;
  goto LAB_1003cdd8;
}

