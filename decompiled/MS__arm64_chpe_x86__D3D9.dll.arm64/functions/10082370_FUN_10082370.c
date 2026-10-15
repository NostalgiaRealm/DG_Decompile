/*
 * FUN_10082370 at 10082370
 * undefined FUN_10082370(void)
 * Address ranges: 10082370-1008299b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082370(undefined4 param_1,uint *param_2,uint param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong extraout_x11;
  int extraout_w12;
  ulonglong uVar16;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  int iVar17;
  short *extraout_w13;
  int extraout_w13_00;
  int extraout_w13_01;
  int extraout_w13_02;
  ulonglong uVar18;
  ulonglong extraout_x13;
  ulonglong extraout_x13_00;
  ulonglong extraout_x13_01;
  int extraout_w14;
  int extraout_w14_00;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  short *extraout_w15;
  short *extraout_w15_00;
  short *psVar19;
  ulonglong extraout_x15;
  ulonglong extraout_x15_00;
  undefined1 auVar20 [16];
  uint local_4c;
  undefined8 *local_48 [2];
  
  *(undefined8 *)(param_3 + 0x530) = 0x800030;
  local_48[0] = (undefined8 *)(param_3 + 0xf4);
  *(undefined4 *)(param_3 + 0x538) = 0x1800130;
  *(undefined8 *)(param_3 + 0xfc) = 0;
  *local_48[0] = 0;
  *(undefined8 *)(param_3 + 0x10c) = 0;
  *(undefined8 *)(param_3 + 0x104) = 0;
  *(undefined8 *)(param_3 + 0x11c) = 0;
  *(undefined8 *)(param_3 + 0x114) = 0;
  *(undefined8 *)(param_3 + 300) = 0;
  *(undefined8 *)(param_3 + 0x124) = 0;
  *(undefined8 *)(param_3 + 0x13c) = 0;
  *(undefined8 *)(param_3 + 0x134) = 0;
  *(undefined8 *)(param_3 + 0x14c) = 0;
  *(undefined8 *)(param_3 + 0x144) = 0;
  uVar6 = 0;
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
  *(undefined8 *)(param_3 + 0x1fc) = 0;
  *(undefined8 *)(param_3 + 500) = 0;
  *(undefined4 *)(param_3 + 0x204) = 0;
  do {
    *(undefined2 *)(param_3 + 0x53c) = *(undefined2 *)(param_3 + 0x530);
    *(undefined2 *)(param_3 + 0x53e) = *(undefined2 *)(param_3 + 0x532);
    if ((param_2[uVar6] & 0x1f) < 2) break;
    FUN_10081af8(param_1,param_2,uVar6,param_3,0);
    FUN_10081af8(param_1,param_2,uVar6,param_3,1);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  puVar3 = local_48[0];
  uVar11 = 0x10;
  if (param_4 != '\0' && uVar6 == 1) {
    uVar10 = 0x20;
    if ((*param_2 & 0x70000000) != 0x50000000) {
      uVar10 = 0x10;
    }
    uVar11 = (ulonglong)uVar10;
  }
  uVar10 = 0;
  local_4c = 0;
  local_48[0] = (undefined8 *)0x0;
  uVar16 = 0xffffffff;
  uVar18 = 0xffffffff;
  iVar17 = -1;
  uVar5 = 1;
  uVar12 = (uint)uVar11;
  if (uVar6 != 0) {
    uVar8 = uVar6;
LAB_100824b8:
    uVar2 = uVar8 - 1;
    if (uVar12 != (*(ushort *)(param_3 + 0xe4 + uVar8 * 0x10) & 0xf0)) goto code_r0x100824d0;
    uVar10 = 1 << (ulonglong)(uVar2 & 0x1f);
    uVar16 = (ulonglong)uVar2;
    local_4c = uVar10;
    if (uVar8 != 0) {
      uVar12 = uVar8 << 4;
      do {
        uVar9 = (ulonglong)uVar8;
        uVar14 = (ulonglong)uVar12;
        if ((uVar5 << (ulonglong)(uVar8 - 1 & 0x1f) & uVar10) != 0) {
          uVar10 = 0;
          uVar16 = (ulonglong)(param_3 + uVar8 * 0x10 + 0xe6);
          do {
            param_3 = FUN_100820f0(uVar5,param_3,(int)uVar16 + uVar10 * 2,&local_4c,local_48);
            uVar12 = (uint)uVar14;
            uVar8 = (uint)uVar9;
            uVar10 = extraout_w14 + 1;
            uVar16 = extraout_x15;
            uVar5 = param_3;
          } while (uVar10 < 3);
          iVar17 = uVar12 + param_3;
          if ((*(short *)(iVar17 + 0xec) == 0x90) || (*(short *)(iVar17 + 0xee) == 0x90)) {
            local_4c = param_3 << (ulonglong)(uVar8 - 2 & 0x1f) | local_4c;
          }
          psVar19 = (short *)(param_3 + (uVar8 + 0xf) * 0x10);
          uVar16 = extraout_x12;
          uVar18 = extraout_x13;
          uVar10 = local_4c;
          if (((*psVar19 != 0) || (*(short *)(iVar17 + 0xf2) != 0)) &&
             (((param_3 << (ulonglong)(uVar8 & 0x1f) & local_4c) == 0 ||
              ((iVar13 = param_3 + uVar8 * 0x10, *(short *)(iVar13 + 0xfc) == 0 &&
               (*(short *)(iVar13 + 0xfe) == 0)))))) {
            *psVar19 = 0;
            *(undefined2 *)(iVar17 + 0xf2) = 0;
            *(undefined2 *)(uVar12 + param_3 + 0xe8) = 0;
          }
        }
        uVar8 = uVar8 - 1;
        uVar12 = uVar12 - 0x10;
      } while (uVar8 != 0);
      goto LAB_100825fc;
    }
  }
  uVar16 = 0xffffffff;
  iVar13 = -1;
  uVar10 = local_4c;
  puVar15 = (undefined8 *)0x0;
  if (uVar6 != 0) {
LAB_100825fc:
    iVar17 = (int)uVar18;
    iVar13 = (int)uVar16;
    uVar9 = uVar11 & 0xffffffff;
    uVar12 = (uint)uVar11;
    while( true ) {
      uVar8 = uVar5 << (ulonglong)(uVar6 - 1 & 0x1f);
      if (uVar12 == (*(ushort *)(param_3 + 0x164 + uVar6 * 0x10) & 0xf0)) break;
      puVar15 = local_48[0];
      if ((uVar8 & (uint)local_48[0]) != 0) goto LAB_10082644;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_10082694;
    }
    puVar15 = (undefined8 *)(uVar8 | (uint)local_48[0]);
    uVar18 = (ulonglong)(uVar6 - 1);
    local_48[0] = puVar15;
LAB_10082644:
    do {
      if ((uVar5 << (ulonglong)(uVar6 - 1 & 0x1f) & (uint)puVar15) != 0) {
        uVar10 = 0;
        uVar11 = (ulonglong)(param_3 + uVar6 * 0x10 + 0x166);
        do {
          uVar5 = FUN_100820f0(uVar5,param_3,(int)uVar11 + uVar10 * 2,&local_4c,local_48);
          uVar10 = extraout_w14_00 + 1;
          uVar16 = extraout_x12_00;
          uVar18 = extraout_x13_00;
          uVar11 = extraout_x15_00;
          puVar15 = local_48[0];
          param_3 = uVar5;
        } while (uVar10 < 3);
      }
      iVar17 = (int)uVar18;
      iVar13 = (int)uVar16;
      uVar12 = (uint)uVar9;
      uVar6 = uVar6 - 1;
      uVar10 = local_4c;
    } while (uVar6 != 0);
  }
LAB_10082694:
  if (uVar12 == 0x20) {
    if (iVar13 != -1) {
      *(undefined2 *)(param_3 + iVar13 * 0x10 + 0xf4) = 0x10;
    }
    if (iVar17 != -1) {
      *(undefined2 *)(param_3 + iVar17 * 0x10 + 0x174) = 0x110;
    }
  }
  uVar11 = 0xffffffff;
  uVar6 = 0;
  do {
    uVar12 = uVar5 << (ulonglong)(uVar6 & 0x1f);
    if ((uVar12 & uVar10) == 0) {
      *(undefined2 *)(uVar6 * 0x10 + param_3 + 0xf4) = 0;
    }
    bVar4 = (uVar12 & (uint)puVar15) == 0;
    uVar12 = uVar6;
    if (bVar4) {
      uVar12 = (uint)uVar11;
    }
    uVar11 = (ulonglong)uVar12;
    if (bVar4) {
      *(undefined2 *)(uVar6 * 0x10 + param_3 + 0x174) = 0;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  uVar7 = FUN_10082170(uVar5,puVar3,uVar10,iVar13,param_2[iVar13] & 0x1f,0);
  iVar13 = (int)uVar11;
  uVar16 = (ulonglong)(param_3 + 0x174);
  uVar6 = FUN_10082170(uVar7,uVar16,extraout_x11 & 0xffffffff,uVar11 & 0xffffffff,
                       param_2[iVar13] >> 5 & 0x1f,1);
  iVar17 = extraout_w12;
  if ((extraout_x13_01 & 1) != 0) {
    uVar10 = 0;
    do {
      iVar17 = uVar10 * 0x10;
      uVar10 = uVar10 + 1;
      *(undefined2 *)(param_3 + 0xf4 + iVar17) = 0;
    } while (uVar10 < 8);
    iVar17 = -1;
  }
  if ((uVar6 & 1) != 0) {
    uVar10 = 0;
    do {
      iVar13 = uVar10 * 0x10;
      uVar10 = uVar10 + 1;
      *(undefined2 *)(param_3 + 0x174 + iVar13) = 0;
    } while (uVar10 < 8);
    iVar13 = -1;
  }
  if (iVar17 != -1) {
    if ((((param_2[iVar17] & 0x1f) == 2) &&
        ((param_2[9] >> (ulonglong)(iVar17 * 4 & 0x1f) & 0xf) == 0)) &&
       (iVar1 = param_3 + iVar17 * 0x10, psVar19 = (short *)(iVar1 + 0xf4),
       *psVar19 == *(short *)(iVar1 + 0xf8))) {
      *psVar19 = 0;
    }
    if ((((param_2[iVar17] & 0x1f) == 3) &&
        ((param_2[10] >> (ulonglong)(iVar17 * 4 & 0x1f) & 0xf) == 0)) &&
       (iVar17 = param_3 + iVar17 * 0x10, psVar19 = (short *)(iVar17 + 0xf4),
       *psVar19 == *(short *)(iVar17 + 0xfa))) {
      *psVar19 = 0;
    }
  }
  if (iVar13 != -1) {
    if ((((param_2[iVar13] & 0x3e0) - 0x20 & 0xffffffdf) == 0) &&
       (iVar17 = param_3 + iVar13 * 0x10, psVar19 = (short *)(iVar17 + 0x174),
       *psVar19 == *(short *)(iVar17 + 0x178))) {
      *psVar19 = 0;
    }
    if (((param_2[iVar13] & 0x3e0) == 0x60) &&
       (iVar17 = param_3 + iVar13 * 0x10, psVar19 = (short *)(iVar17 + 0x174),
       *psVar19 == *(short *)(iVar17 + 0x17a))) {
      *psVar19 = 0;
    }
  }
  uVar10 = 0;
  do {
    uVar11 = (ulonglong)uVar10;
    auVar20 = FUN_10082230(uVar6,param_3,uVar11,*(undefined2 *)(puVar3 + uVar10 * 2));
    uVar18 = uVar11 & 0xffffffff;
    param_3 = FUN_10082230(auVar20._0_8_,auVar20._8_8_ & 0xffffffff,uVar18,
                           *(undefined2 *)((int)uVar16 + (int)uVar11 * 0x10));
    psVar19 = extraout_w15;
    if (*extraout_w13 != 0) {
      uVar6 = 0;
      uVar11 = (ulonglong)(param_3 + (int)uVar18 * 0x10 + 0xf6);
      do {
        uVar18 = uVar18 & 0xffffffff;
        param_3 = FUN_10082230(param_3,param_3,uVar18,*(undefined2 *)((int)uVar11 + uVar6 * 2));
        uVar6 = extraout_w13_00 + 1;
        uVar11 = extraout_x14;
      } while (uVar6 < 3);
      uVar11 = uVar18 & 0xffffffff;
      auVar20 = FUN_10082230(param_3,param_3,uVar11,
                             *(undefined2 *)(param_3 + (int)uVar18 * 0x10 + 0xfc));
      uVar18 = uVar11 & 0xffffffff;
      param_3 = FUN_10082230(auVar20._0_8_,auVar20._8_8_ & 0xffffffff,uVar18,
                             *(undefined2 *)(extraout_w13_01 + 0xfe));
      psVar19 = extraout_w15_00;
    }
    iVar17 = (int)uVar18;
    if (*psVar19 != 0) {
      uVar6 = 0;
      uVar11 = (ulonglong)(param_3 + iVar17 * 0x10 + 0x176);
      do {
        uVar18 = uVar18 & 0xffffffff;
        param_3 = FUN_10082230(param_3,param_3,uVar18,*(undefined2 *)((int)uVar11 + uVar6 * 2));
        iVar17 = (int)uVar18;
        uVar6 = extraout_w13_02 + 1;
        uVar11 = extraout_x14_00;
      } while (uVar6 < 3);
    }
    uVar10 = iVar17 + 1;
    uVar6 = param_3;
  } while (uVar10 < 8);
  return;
code_r0x100824d0:
  uVar8 = uVar2;
  if (uVar2 == 0) goto LAB_100825fc;
  goto LAB_100824b8;
}

