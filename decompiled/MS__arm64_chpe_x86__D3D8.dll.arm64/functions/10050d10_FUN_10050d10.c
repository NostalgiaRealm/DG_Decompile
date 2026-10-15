/*
 * FUN_10050d10 at 10050d10
 * undefined FUN_10050d10(void)
 * Address ranges: 10050d10-100514b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10050d10(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  
  uVar4 = 0x10000;
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  uVar14 = 0x20000;
  if (param_2[1] == 0) {
    uVar14 = 0;
  }
  uVar15 = 0x200;
  if (param_2[0x21] == 0) {
    uVar15 = 0;
  }
  uVar17 = 0x80;
  if (param_2[0x17] == 0) {
    uVar17 = 0;
  }
  uVar5 = 0x20;
  if (param_2[0xd] == 0) {
    uVar5 = 0;
  }
  uVar6 = 8;
  if (param_2[3] == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100;
  if ((int)*(ulonglong *)(param_2 + 0x20) == 0) {
    uVar7 = 0;
  }
  uVar8 = 0x10;
  if ((int)*(ulonglong *)(param_2 + 0xc) == 0) {
    uVar8 = 0;
  }
  uVar9 = 0x40;
  if ((int)*(ulonglong *)(param_2 + 0x16) == 0) {
    uVar9 = 0;
  }
  uVar10 = 4;
  if ((int)*(ulonglong *)(param_2 + 2) == 0) {
    uVar10 = 0;
  }
  uVar4 = ((ulonglong)
           (param_2[0x19] & 0x1fU |
           (param_2[0x1a] & 7U |
           (param_2[0x1b] & 0x1fU | (param_2[0x1c] & 0x1fU | (param_2[0x1d] & 7U) << 5) << 5) << 3)
           << 5) << 5 |
           ((ulonglong)(uint)param_2[0x22] & 0x1f |
           ((ulonglong)(uint)param_2[0x23] & 0x1f |
           ((ulonglong)(uint)param_2[0x24] & 7 |
           ((ulonglong)(uint)param_2[0x25] & 0x1f |
           ((ulonglong)(uint)param_2[0x26] & 0x1f | ((ulonglong)(uint)param_2[0x27] & 7) << 5) << 5)
           << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_2[0x18] & 0x1f) +
          ((ulonglong)
           (param_2[5] & 0x1fU |
           (param_2[6] & 7U |
           (param_2[7] & 0x1fU | (param_2[8] & 0x1fU | (param_2[9] & 7U) << 5) << 5) << 3) << 5) <<
           5 | ((ulonglong)(uint)param_2[0xe] & 0x1f |
               ((ulonglong)(uint)param_2[0xf] & 0x1f |
               ((ulonglong)(uint)param_2[0x10] & 7 |
               ((ulonglong)(uint)param_2[0x11] & 0x1f |
               ((ulonglong)(uint)param_2[0x12] & 0x1f | ((ulonglong)(uint)param_2[0x13] & 7) << 5)
               << 5) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_2[4] & 0x1f) +
          (uVar15 | ((ulonglong)(uint)param_2[10] & 0xf |
                    ((ulonglong)(uint)param_2[0x14] & 0xf |
                    ((ulonglong)(uint)param_2[0x1e] & 0xf |
                    ((ulonglong)(uint)param_2[0x28] & 0xf |
                    ((ulonglong)*(byte *)(param_2 + 0xb) & 0xf |
                    ((ulonglong)*(byte *)(param_2 + 0x15) & 0xf |
                    ((ulonglong)*(byte *)(param_2 + 0x1f) & 0xf |
                    ((ulonglong)*(byte *)(param_2 + 0x29) & 0xf | uVar4 | uVar14) << 4) << 4) << 4)
                    << 0xc) << 4) << 4) << 4) << 10 | uVar17 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9
          | uVar10);
  puVar1 = (uint *)(param_1 + 2);
  uVar21 = *puVar1;
  uVar20 = 0;
  if (uVar21 != 0) {
    uVar19 = 0;
    uVar18 = uVar21;
    do {
      uVar20 = uVar18 + uVar19 >> 1;
      uVar14 = *(ulonglong *)(*param_1 + uVar20 * 0x158);
      uVar11 = uVar20;
      if (uVar14 <= uVar4) {
        if (uVar4 <= uVar14) break;
        uVar19 = uVar20 + 1;
        uVar20 = uVar19;
        uVar11 = uVar18;
      }
      uVar18 = uVar11;
    } while (uVar18 != uVar19);
  }
  if ((uVar20 == uVar21) || (puVar3 = (ulonglong *)(uVar20 * 0x158 + *param_1), *puVar3 != uVar4)) {
    puVar2 = (uint *)(param_1 + 1);
    if (uVar21 == *puVar2) {
      uVar14 = (ulonglong)(*puVar2 << 1) * 0x158;
      uVar16 = (undefined4)uVar14;
      if (uVar14 >> 0x20 != 0) {
        uVar16 = 0xffffffff;
      }
      iVar13 = FUN_100fece0(uVar16);
      if (iVar13 != 0) {
        if (*puVar2 != 0) {
          uVar21 = 0;
          do {
            FUN_100ff660(iVar13 + uVar21 * 0x158,*param_1 + uVar21 * 0x158,0x158);
            uVar21 = uVar21 + 1;
          } while (uVar21 < *puVar2);
        }
        FUN_100fed00(*param_1);
        *param_1 = iVar13;
        *puVar2 = *puVar2 << 1;
      }
    }
    uVar21 = *puVar1;
    if (uVar20 < uVar21) {
      if (3 < uVar21 - uVar20) {
        do {
          iVar13 = *param_1 + uVar21 * 0x158;
          FUN_100ff660(iVar13,iVar13 + -0x158,0x158);
          FUN_100ff660(*param_1 + uVar21 * 0x158 + -0x158,*param_1 + (uVar21 - 2) * 0x158,0x158);
          FUN_100ff660(*param_1 + (uVar21 - 2) * 0x158,*param_1 + (uVar21 - 3) * 0x158,0x158);
          FUN_100ff660(*param_1 + (uVar21 - 3) * 0x158,*param_1 + (uVar21 - 4) * 0x158,0x158);
          uVar21 = uVar21 - 4;
        } while (uVar20 + 3 < uVar21);
      }
      for (; uVar20 < uVar21; uVar21 = uVar21 - 1) {
        iVar13 = *param_1 + uVar21 * 0x158;
        FUN_100ff660(iVar13,iVar13 + -0x158,0x158);
      }
    }
    iVar22 = uVar20 * 0x158;
    *(ulonglong *)(iVar22 + *param_1) = uVar4;
    FUN_100ff660(iVar22 + *param_1 + 8,param_2,0x148);
    iVar13 = FUN_100febf0(0x148);
    if (iVar13 != 0) {
      FUN_100ff660(iVar13,param_2,0x148);
    }
    *(int *)(iVar22 + *param_1 + 0x150) = iVar13;
    *puVar1 = *puVar1 + 1;
    goto LAB_10051488;
  }
  if ((*param_2 == (int)puVar3[1]) && (param_2[1] == *(int *)((int)puVar3 + 0xc))) {
    uVar14 = *(ulonglong *)(param_2 + 2);
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
    uVar14 = (puVar3[2] & 0xff00ff00ff00ff00) >> 8 | (puVar3[2] & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
    bVar12 = uVar14 <= uVar15;
    if ((uVar15 == uVar14) &&
       (((uVar14 = (*(ulonglong *)(param_2 + 4) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulonglong *)(param_2 + 4) & 0xff00ff00ff00ff) << 8,
         uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
         uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
         uVar14 = (puVar3[3] & 0xff00ff00ff00ff00) >> 8 | (puVar3[3] & 0xff00ff00ff00ff) << 8,
         uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
         uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14 &&
         (uVar14 = (*(ulonglong *)(param_2 + 6) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulonglong *)(param_2 + 6) & 0xff00ff00ff00ff) << 8,
         uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
         uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
         uVar14 = (puVar3[4] & 0xff00ff00ff00ff00) >> 8 | (puVar3[4] & 0xff00ff00ff00ff) << 8,
         uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
         uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14)) &&
        (uVar14 = (*(ulonglong *)(param_2 + 8) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulonglong *)(param_2 + 8) & 0xff00ff00ff00ff) << 8,
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
        uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
        uVar14 = (puVar3[5] & 0xff00ff00ff00ff00) >> 8 | (puVar3[5] & 0xff00ff00ff00ff) << 8,
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14)))) {
      uVar14 = (puVar3[6] & 0xff00ff00ff00ff00) >> 8 | (puVar3[6] & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar14 = (*(ulonglong *)(param_2 + 10) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulonglong *)(param_2 + 10) & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      bVar12 = uVar15 <= uVar14;
      iVar13 = 0;
      if (uVar14 != uVar15) goto LAB_100510cc;
    }
    else {
LAB_100510cc:
      iVar13 = 1;
      if (!bVar12) {
        iVar13 = -1;
      }
    }
    if (iVar13 == 0) {
      uVar15 = *(ulonglong *)(param_2 + 0xc);
      uVar14 = (puVar3[7] & 0xff00ff00ff00ff00) >> 8 | (puVar3[7] & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar14 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      bVar12 = uVar17 <= uVar14;
      iVar13 = -1;
      if (((uVar14 == uVar17) &&
          (uVar14 = (*(ulonglong *)(param_2 + 0xe) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulonglong *)(param_2 + 0xe) & 0xff00ff00ff00ff) << 8,
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
          uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
          uVar14 = (puVar3[8] & 0xff00ff00ff00ff00) >> 8 | (puVar3[8] & 0xff00ff00ff00ff) << 8,
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
          uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14)) &&
         ((uVar14 = (*(ulonglong *)(param_2 + 0x10) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulonglong *)(param_2 + 0x10) & 0xff00ff00ff00ff) << 8,
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
          uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
          uVar14 = (puVar3[9] & 0xff00ff00ff00ff00) >> 8 | (puVar3[9] & 0xff00ff00ff00ff) << 8,
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
          uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14 &&
          (uVar14 = (*(ulonglong *)(param_2 + 0x12) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulonglong *)(param_2 + 0x12) & 0xff00ff00ff00ff) << 8,
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
          uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
          uVar14 = (puVar3[10] & 0xff00ff00ff00ff00) >> 8 | (puVar3[10] & 0xff00ff00ff00ff) << 8,
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
          uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14))))
      {
        uVar14 = (puVar3[0xb] & 0xff00ff00ff00ff00) >> 8 | (puVar3[0xb] & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar14 = (*(ulonglong *)(param_2 + 0x14) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulonglong *)(param_2 + 0x14) & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        bVar12 = uVar15 <= uVar14;
        iVar22 = 0;
        if (uVar14 != uVar15) goto LAB_10051158;
      }
      else {
LAB_10051158:
        iVar22 = 1;
        if (!bVar12) {
          iVar22 = iVar13;
        }
      }
      if (iVar22 == 0) {
        uVar17 = *(ulonglong *)(param_2 + 0x16);
        uVar14 = (puVar3[0xc] & 0xff00ff00ff00ff00) >> 8 | (puVar3[0xc] & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar14 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        bVar12 = uVar15 <= uVar14;
        if (((uVar14 == uVar15) &&
            (uVar14 = (*(ulonglong *)(param_2 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
                      (*(ulonglong *)(param_2 + 0x18) & 0xff00ff00ff00ff) << 8,
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
            uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
            uVar14 = (puVar3[0xd] & 0xff00ff00ff00ff00) >> 8 | (puVar3[0xd] & 0xff00ff00ff00ff) << 8
            , uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14))
           && ((uVar14 = (*(ulonglong *)(param_2 + 0x1a) & 0xff00ff00ff00ff00) >> 8 |
                         (*(ulonglong *)(param_2 + 0x1a) & 0xff00ff00ff00ff) << 8,
               uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
               uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
               uVar14 = (puVar3[0xe] & 0xff00ff00ff00ff00) >> 8 |
                        (puVar3[0xe] & 0xff00ff00ff00ff) << 8,
               uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
               uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14
               && (uVar14 = (*(ulonglong *)(param_2 + 0x1c) & 0xff00ff00ff00ff00) >> 8 |
                            (*(ulonglong *)(param_2 + 0x1c) & 0xff00ff00ff00ff) << 8,
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  , uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
                  uVar14 = (puVar3[0xf] & 0xff00ff00ff00ff00) >> 8 |
                           (puVar3[0xf] & 0xff00ff00ff00ff) << 8,
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  , uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15,
                  uVar15 == uVar14)))) {
          uVar14 = (puVar3[0x10] & 0xff00ff00ff00ff00) >> 8 | (puVar3[0x10] & 0xff00ff00ff00ff) << 8
          ;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
          uVar14 = (*(ulonglong *)(param_2 + 0x1e) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulonglong *)(param_2 + 0x1e) & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
          bVar12 = uVar15 <= uVar14;
          iVar22 = 0;
          if (uVar14 != uVar15) goto LAB_100511e4;
        }
        else {
LAB_100511e4:
          iVar22 = 1;
          if (!bVar12) {
            iVar22 = iVar13;
          }
        }
        if (iVar22 == 0) {
          uVar17 = *(ulonglong *)(param_2 + 0x20);
          uVar14 = (puVar3[0x11] & 0xff00ff00ff00ff00) >> 8 | (puVar3[0x11] & 0xff00ff00ff00ff) << 8
          ;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
          uVar14 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
          bVar12 = uVar15 <= uVar14;
          if ((((uVar14 == uVar15) &&
               (uVar14 = (*(ulonglong *)(param_2 + 0x22) & 0xff00ff00ff00ff00) >> 8 |
                         (*(ulonglong *)(param_2 + 0x22) & 0xff00ff00ff00ff) << 8,
               uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
               uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
               uVar14 = (puVar3[0x12] & 0xff00ff00ff00ff00) >> 8 |
                        (puVar3[0x12] & 0xff00ff00ff00ff) << 8,
               uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
               uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14
               )) && (uVar14 = (*(ulonglong *)(param_2 + 0x24) & 0xff00ff00ff00ff00) >> 8 |
                               (*(ulonglong *)(param_2 + 0x24) & 0xff00ff00ff00ff) << 8,
                     uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                              (uVar14 & 0xffff0000ffff) << 0x10,
                     uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
                     uVar14 = (puVar3[0x13] & 0xff00ff00ff00ff00) >> 8 |
                              (puVar3[0x13] & 0xff00ff00ff00ff) << 8,
                     uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                              (uVar14 & 0xffff0000ffff) << 0x10,
                     uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15,
                     uVar15 == uVar14)) &&
             (uVar14 = (*(ulonglong *)(param_2 + 0x26) & 0xff00ff00ff00ff00) >> 8 |
                       (*(ulonglong *)(param_2 + 0x26) & 0xff00ff00ff00ff) << 8,
             uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
             uVar15 = uVar14 >> 0x20 | uVar14 << 0x20,
             uVar14 = (puVar3[0x14] & 0xff00ff00ff00ff00) >> 8 |
                      (puVar3[0x14] & 0xff00ff00ff00ff) << 8,
             uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10,
             uVar14 = uVar14 >> 0x20 | uVar14 << 0x20, bVar12 = uVar14 <= uVar15, uVar15 == uVar14))
          {
            uVar14 = (puVar3[0x15] & 0xff00ff00ff00ff00) >> 8 |
                     (puVar3[0x15] & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
            uVar14 = (*(ulonglong *)(param_2 + 0x28) & 0xff00ff00ff00ff00) >> 8 |
                     (*(ulonglong *)(param_2 + 0x28) & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            bVar12 = uVar15 <= uVar14;
            iVar22 = 0;
            if (uVar14 != uVar15) goto LAB_10051270;
          }
          else {
LAB_10051270:
            iVar22 = 1;
            if (!bVar12) {
              iVar22 = iVar13;
            }
          }
          if (iVar22 == 0) goto LAB_10051488;
        }
      }
    }
  }
  uVar14 = puVar3[0x2a];
  FUN_100e86c8(param_1[3],(int)uVar14);
  FUN_100fec90((int)uVar14,0x148);
  FUN_10051838(param_1,uVar20,uVar4,param_2);
LAB_10051488:
  return *(undefined4 *)(uVar20 * 0x158 + *param_1 + 0x150);
}

