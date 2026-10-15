/*
 * FUN_1801cf318 at 1801cf318
 * undefined FUN_1801cf318(void)
 * Address ranges: 1801cf318-1801cf85b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cf318(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  longlong lVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  longlong local_330;
  undefined8 local_328;
  undefined1 auStack_2a0 [4];
  int local_29c;
  uint local_298;
  byte abStack_289 [509];
  byte local_8c [76];
  uint uVar20;
  
  uVar10 = (ulonglong)param_2;
  local_330 = CONCAT44(local_330._4_4_,param_2);
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar9 == 0) {
      FUN_1801085c8();
    }
  }
  uVar22 = 0;
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (*(longlong *)(param_1 + 0x5c60) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(uint *)(*(longlong *)(param_1 + 0x5c60) + 0x28c);
    }
    if (uVar13 != param_2) {
      lVar21 = FUN_1801d15c8(param_1 + 0x110,&local_330);
      uVar22 = 0x8007000e;
      if (lVar21 != 0) {
        FUN_1801cd410(param_1 + -0x6838,lVar21);
        uVar22 = 0;
      }
    }
    goto LAB_1801cf81c;
  }
  local_330 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
  if (*(longlong *)(local_330 + 0x4fb8) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(local_330 + 0x4fb8) + 0x28c);
  }
  if (uVar13 == param_2) goto LAB_1801cf81c;
  uVar13 = *(uint *)(param_1 + 0x11c);
  uVar23 = 0;
  if (uVar13 == 0) {
LAB_1801cf444:
    if (uVar13 == *(uint *)(param_1 + 0x118)) {
      uVar17 = CONCAT44(0,*(uint *)(param_1 + 0x118) << 1);
      lVar21 = uVar17 * 0x18;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar17;
      if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
        lVar21 = -1;
      }
      lVar21 = FUN_1802229a8(lVar21);
      if (lVar21 != 0) {
        uVar17 = 0;
        if (*(int *)(param_1 + 0x118) != 0) {
          do {
            uVar13 = (int)uVar17 + 1;
            puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + uVar17 * 0x18);
            puVar2 = (undefined8 *)(lVar21 + uVar17 * 0x18);
            uVar11 = *puVar1;
            puVar2[1] = puVar1[1];
            *puVar2 = uVar11;
            puVar2[2] = puVar1[2];
            uVar17 = (ulonglong)uVar13;
          } while (uVar13 < *(uint *)(param_1 + 0x118));
        }
        FUN_1802229d8(*(longlong *)(param_1 + 0x110));
        *(longlong *)(param_1 + 0x110) = lVar21;
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) << 1;
      }
    }
    uVar17 = (ulonglong)*(uint *)(param_1 + 0x11c);
    while ((uint)uVar23 < (uint)uVar17) {
      uVar12 = (ulonglong)((uint)uVar17 - 1);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + uVar17 * 0x18);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + uVar12 * 0x18);
      uVar11 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar11;
      puVar1[2] = puVar2[2];
      uVar17 = uVar12;
    }
    uVar17 = 0;
    *(ulonglong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18) = uVar10;
    uVar13 = 0;
    *(uint *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18 + 8) = param_2;
    uVar10 = FUN_18018de88(param_2,1,auStack_2a0);
    if ((uVar10 & 1) != 0) {
      if ((local_29c == 0) || (bVar7 = false, local_29c == 3)) {
        bVar7 = true;
      }
      if (local_298 != 0) {
        lVar21 = *(longlong *)(&DAT_00006898 + *(longlong *)(param_1 + 0x120));
        uVar15 = 9;
        if (!bVar7) {
          uVar15 = 0;
        }
        do {
          lVar5 = uVar17 * 8;
          bVar3 = local_8c[uVar17];
          *(undefined2 *)(&local_328 + uVar17) = 0;
          *(undefined1 *)((longlong)&local_328 + lVar5 + 5) = 0;
          bVar4 = abStack_289[(ulonglong)bVar3 * 8 + 1];
          uVar16 = 1;
          if (bVar4 == 0) {
            uVar16 = 0;
          }
          else if (bVar4 != 1) {
            if (bVar4 == 2) {
              uVar16 = 2;
            }
            else if (bVar4 == 3) {
              uVar16 = 3;
            }
            else if (bVar4 == 4) {
              uVar16 = 4;
            }
            else {
              uVar16 = 0x11;
              if (bVar4 == 5) {
                uVar16 = 5;
              }
            }
          }
          *(undefined1 *)((longlong)&local_328 + lVar5 + 4) = uVar16;
          *(ushort *)((longlong)&local_328 + lVar5 + 2) =
               (ushort)abStack_289[(ulonglong)bVar3 * 8] << 2;
          uVar14 = bVar3 - 7;
          uVar19 = (uint)bVar3;
          uVar20 = (uint)bVar3;
          if (uVar14 < 8) {
            uVar16 = 5;
          }
          else if ((0xf < bVar3) ||
                  (uVar16 = uVar15, (0x8001U >> (ulonglong)(uVar20 & 0x1f) & 1) == 0)) {
            if ((uVar20 < 0x11) && ((0x10008U >> (ulonglong)(uVar19 & 0x1f) & 1) != 0)) {
              uVar16 = 3;
            }
            else if (uVar19 - 5 < 2) {
              uVar16 = 10;
            }
            else if (bVar3 == 1) {
              uVar16 = 1;
            }
            else if (bVar3 == 2) {
              uVar16 = 2;
            }
            else {
              uVar16 = 0;
              if (uVar19 == 4) {
                uVar16 = 4;
              }
            }
          }
          *(undefined1 *)((longlong)&local_328 + lVar5 + 6) = uVar16;
          if (uVar14 < 8) {
            cVar18 = bVar3 - 7;
          }
          else if (((bVar3 < 6) || (0x10 < uVar20)) ||
                  ((0x18040U >> (ulonglong)(uVar20 & 0x1f) & 1) == 0)) {
            cVar18 = '\0';
          }
          else {
            cVar18 = '\x01';
          }
          *(char *)((longlong)&local_328 + lVar5 + 7) = cVar18;
          if ((*(char *)((longlong)&local_328 + lVar5 + 4) == '\x05') &&
             ((*(uint *)(lVar21 + 0xec) & 1) == 0)) {
            uVar14 = 1;
          }
          else {
            uVar14 = 0;
          }
          uVar19 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar19;
          uVar13 = uVar14 | uVar13;
        } while (uVar19 < local_298);
      }
    }
    uVar11 = *(undefined8 *)(param_1 + 0x120);
    (&local_328)[uVar17] = 0x11000000ff;
    lVar21 = FUN_1801bb7b8(uVar11,auStack_2a0,param_2,uVar13,1);
    if (lVar21 != 0) {
      FUN_1801e3d48(lVar21,&local_328,(int)uVar17 + 1);
      FUN_1801042e0(lVar21 + 0xc);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18 + 0x10) = lVar21;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  }
  else {
    uVar14 = 0;
    uVar19 = uVar13;
    do {
      uVar20 = uVar19 + uVar14 >> 1;
      uVar23 = (ulonglong)uVar20;
      uVar17 = *(ulonglong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18);
      if (uVar17 <= uVar10) {
        if (uVar10 <= uVar17) break;
        uVar14 = uVar20 + 1;
        uVar23 = (ulonglong)(uVar20 + 1);
        uVar20 = uVar19;
      }
      uVar19 = uVar20;
    } while (uVar19 != uVar14);
    if (((uint)uVar23 == uVar13) ||
       (*(ulonglong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18) != uVar10))
    goto LAB_1801cf444;
  }
  lVar21 = *(longlong *)(uVar23 * 0x18 + *(longlong *)(param_1 + 0x110) + 0x10);
  uVar22 = 0x8007000e;
  if (lVar21 != 0) {
    FUN_1801042e0(lVar21 + 0xc);
    if (*(longlong *)(local_330 + 0x4fb8) != 0) {
      FUN_1801e3bf8();
    }
    *(undefined1 *)(local_330 + 0xacfc) = 1;
    *(longlong *)(local_330 + 0x4fb8) = lVar21;
    uVar22 = 0;
  }
LAB_1801cf81c:
  if (bVar8) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar22;
}

