/*
 * FUN_1800b4d60 at 1800b4d60
 * undefined FUN_1800b4d60(void)
 * Address ranges: 1800b4d60-1800b5297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b4d60(longlong param_1,uint param_2)

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
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  char cVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint local_340 [2];
  undefined8 local_338;
  undefined1 auStack_2b0 [4];
  int local_2ac;
  uint local_2a8;
  byte abStack_299 [509];
  byte local_9c [76];
  uint uVar19;
  
  uVar10 = (ulonglong)param_2;
  local_340[0] = param_2;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar9 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar9 == 0) {
      FUN_180003398();
    }
  }
  uVar22 = 0;
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (*(longlong *)(param_1 + 0x5c60) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(uint *)(*(longlong *)(param_1 + 0x5c60) + 0x28c);
    }
    if (uVar12 != param_2) {
      lVar24 = FUN_1800b6c80(param_1 + 0x110,local_340);
      uVar22 = 0x8007000e;
      if (lVar24 != 0) {
        FUN_1800b3208(param_1 + -0x6838,lVar24);
        uVar22 = 0;
      }
    }
    goto LAB_1800b5254;
  }
  lVar24 = *(longlong *)
            (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
  if (*(longlong *)(lVar24 + 0x4fb8) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(lVar24 + 0x4fb8) + 0x28c);
  }
  if (uVar12 == param_2) goto LAB_1800b5254;
  uVar12 = *(uint *)(param_1 + 0x11c);
  uVar23 = 0;
  if (uVar12 == 0) {
LAB_1800b4e8c:
    if (uVar12 == *(uint *)(param_1 + 0x118)) {
      uVar20 = CONCAT44(0,*(uint *)(param_1 + 0x118) << 1);
      lVar21 = uVar20 * 0x18;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar20;
      if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
        lVar21 = -1;
      }
      lVar21 = thunk_FUN_180102f80(lVar21);
      if (lVar21 != 0) {
        uVar20 = 0;
        if (*(int *)(param_1 + 0x118) != 0) {
          do {
            uVar12 = (int)uVar20 + 1;
            puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + uVar20 * 0x18);
            puVar2 = (undefined8 *)(lVar21 + uVar20 * 0x18);
            uVar11 = *puVar1;
            puVar2[1] = puVar1[1];
            *puVar2 = uVar11;
            puVar2[2] = puVar1[2];
            uVar20 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + 0x118));
        }
        thunk_FUN_180102fc0(*(longlong *)(param_1 + 0x110));
        *(longlong *)(param_1 + 0x110) = lVar21;
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) << 1;
      }
    }
    uVar20 = (ulonglong)*(uint *)(param_1 + 0x11c);
    while ((uint)uVar23 < (uint)uVar20) {
      uVar17 = (ulonglong)((uint)uVar20 - 1);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + uVar20 * 0x18);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + uVar17 * 0x18);
      uVar11 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar11;
      puVar1[2] = puVar2[2];
      uVar20 = uVar17;
    }
    uVar20 = 0;
    *(ulonglong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18) = uVar10;
    uVar12 = 0;
    *(uint *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18 + 8) = param_2;
    uVar10 = FUN_180079830(param_2,1,auStack_2b0);
    if ((uVar10 & 1) != 0) {
      if ((local_2ac == 0) || (bVar7 = false, local_2ac == 3)) {
        bVar7 = true;
      }
      if (local_2a8 != 0) {
        lVar21 = *(longlong *)(&DAT_00006898 + *(longlong *)(param_1 + 0x120));
        uVar14 = 9;
        if (!bVar7) {
          uVar14 = 0;
        }
        do {
          lVar5 = uVar20 * 8;
          bVar3 = local_9c[uVar20];
          *(undefined2 *)(&local_338 + uVar20) = 0;
          *(undefined1 *)((longlong)&local_338 + lVar5 + 5) = 0;
          bVar4 = abStack_299[(ulonglong)bVar3 * 8 + 1];
          if (bVar4 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = 1;
            if (bVar4 != 1) {
              if (bVar4 == 2) {
                uVar15 = 2;
              }
              else if (bVar4 == 3) {
                uVar15 = 3;
              }
              else if (bVar4 == 4) {
                uVar15 = 4;
              }
              else {
                uVar15 = 0x11;
                if (bVar4 == 5) {
                  uVar15 = 5;
                }
              }
            }
          }
          *(undefined1 *)((longlong)&local_338 + lVar5 + 4) = uVar15;
          uVar13 = bVar3 - 7;
          *(ushort *)((longlong)&local_338 + lVar5 + 2) =
               (ushort)abStack_299[(ulonglong)bVar3 * 8] << 2;
          uVar18 = (uint)bVar3;
          uVar19 = (uint)bVar3;
          if (uVar13 < 8) {
            uVar15 = 5;
          }
          else if ((0xf < bVar3) ||
                  (uVar15 = uVar14, (0x8001U >> (ulonglong)(uVar19 & 0x1f) & 1) == 0)) {
            if ((uVar19 < 0x11) && ((0x10008U >> (ulonglong)(uVar18 & 0x1f) & 1) != 0)) {
              uVar15 = 3;
            }
            else if (uVar18 - 5 < 2) {
              uVar15 = 10;
            }
            else if (bVar3 == 1) {
              uVar15 = 1;
            }
            else if (bVar3 == 2) {
              uVar15 = 2;
            }
            else {
              uVar15 = 0;
              if (uVar18 == 4) {
                uVar15 = 4;
              }
            }
          }
          *(undefined1 *)((longlong)&local_338 + lVar5 + 6) = uVar15;
          if (uVar13 < 8) {
            cVar16 = bVar3 - 7;
          }
          else if (((bVar3 < 6) || (0x10 < uVar19)) ||
                  ((0x18040U >> (ulonglong)(uVar19 & 0x1f) & 1) == 0)) {
            cVar16 = '\0';
          }
          else {
            cVar16 = '\x01';
          }
          *(char *)((longlong)&local_338 + lVar5 + 7) = cVar16;
          if ((*(char *)((longlong)&local_338 + lVar5 + 4) == '\x05') &&
             ((*(uint *)(lVar21 + 0xec) & 1) == 0)) {
            uVar13 = 1;
          }
          else {
            uVar13 = 0;
          }
          uVar18 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar18;
          uVar12 = uVar13 | uVar12;
        } while (uVar18 < local_2a8);
      }
    }
    uVar11 = *(undefined8 *)(param_1 + 0x120);
    (&local_338)[uVar20] = 0x11000000ff;
    lVar21 = FUN_1800a32d0(uVar11,auStack_2b0,param_2,uVar12,1);
    if (lVar21 != 0) {
      FUN_1800c8708(lVar21,&local_338,(int)uVar20 + 1);
      FUN_1800015a0(lVar21 + 0xc);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18 + 0x10) = lVar21;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  }
  else {
    uVar13 = 0;
    uVar18 = uVar12;
    do {
      uVar19 = uVar18 + uVar13 >> 1;
      uVar23 = (ulonglong)uVar19;
      uVar20 = *(ulonglong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18);
      if (uVar20 <= uVar10) {
        if (uVar10 <= uVar20) break;
        uVar13 = uVar19 + 1;
        uVar23 = (ulonglong)(uVar19 + 1);
        uVar19 = uVar18;
      }
      uVar18 = uVar19;
    } while (uVar18 != uVar13);
    if (((uint)uVar23 == uVar12) ||
       (*(ulonglong *)(*(longlong *)(param_1 + 0x110) + uVar23 * 0x18) != uVar10))
    goto LAB_1800b4e8c;
  }
  lVar21 = *(longlong *)(uVar23 * 0x18 + *(longlong *)(param_1 + 0x110) + 0x10);
  uVar22 = 0x8007000e;
  if (lVar21 != 0) {
    FUN_1800015a0(lVar21 + 0xc);
    if (*(longlong *)(lVar24 + 0x4fb8) != 0) {
      FUN_1800c85b8();
    }
    *(longlong *)(lVar24 + 0x4fb8) = lVar21;
    *(undefined1 *)(lVar24 + 0xacfc) = 1;
    uVar22 = 0;
  }
LAB_1800b5254:
  if (bVar8) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar22;
}

