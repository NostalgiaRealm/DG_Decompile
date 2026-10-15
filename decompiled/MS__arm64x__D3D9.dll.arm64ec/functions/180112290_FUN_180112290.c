/*
 * FUN_180112290 at 180112290
 * undefined FUN_180112290(void)
 * Address ranges: 180112290-18011246f;180112480-18011256b;18011257c-1801125ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong * FUN_180112290(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  uVar5 = *(uint *)(param_1 + 200);
  uVar9 = (ulonglong)param_2;
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar14 = 0;
    uVar11 = uVar5;
    do {
      uVar6 = uVar11 + uVar14 >> 1;
      uVar13 = (ulonglong)uVar6;
      uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 0x28);
      if (uVar15 <= uVar9) {
        if (uVar9 <= uVar15) break;
        uVar14 = uVar6 + 1;
        uVar13 = (ulonglong)(uVar6 + 1);
        uVar6 = uVar11;
      }
      uVar11 = uVar6;
    } while (uVar11 != uVar14);
  }
  if ((((uint)uVar13 == uVar5) ||
      (puVar16 = (ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 0x28), *puVar16 != uVar9))
     || (puVar16 == (ulonglong *)0xfffffffffffffff0)) {
    uVar13 = 0;
    if (uVar5 != 0) {
      uVar14 = 0;
      uVar11 = uVar5;
      do {
        uVar6 = uVar11 + uVar14 >> 1;
        uVar13 = (ulonglong)uVar6;
        uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 0x28);
        if (uVar15 <= uVar9) {
          if (uVar9 <= uVar15) break;
          uVar14 = uVar6 + 1;
          uVar13 = (ulonglong)(uVar6 + 1);
          uVar6 = uVar11;
        }
        uVar11 = uVar6;
      } while (uVar11 != uVar14);
    }
    if (((uint)uVar13 == uVar5) ||
       (puVar16 = (ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 0x28), *puVar16 != uVar9))
    {
      uVar14 = *(uint *)(param_1 + 0xcc);
      if (uVar14 == uVar5) {
        uVar5 = 0x10;
        if (uVar14 != 0) {
          uVar5 = uVar14 << 1;
        }
        lVar10 = FUN_1802229a8((ulonglong)uVar5 * 0x28);
        if (lVar10 != 0) {
          uVar15 = (ulonglong)*(uint *)(param_1 + 200);
          uVar18 = 0;
          if (*(uint *)(param_1 + 200) != 0) {
            do {
              lVar17 = uVar18 * 0x28;
              lVar1 = lVar17 + lVar10;
              *(undefined8 *)(lVar1 + 0x18) = 0;
              *(undefined8 *)(lVar1 + 0x20) = 0;
              lVar2 = lVar17 + *(longlong *)(param_1 + 0xc0);
              *(undefined8 *)(lVar17 + lVar10) =
                   *(undefined8 *)(lVar17 + *(longlong *)(param_1 + 0xc0));
              *(undefined4 *)(lVar10 + 8 + lVar17) = *(undefined4 *)(lVar2 + 8);
              *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
              FUN_1802229d8(*(undefined8 *)(lVar1 + 0x18));
              *(undefined8 *)(lVar1 + 0x18) = 0;
              *(undefined8 *)(lVar1 + 0x20) = 0;
              if (*(int *)(lVar2 + 0x20) != 0) {
                uVar15 = CONCAT44(0,*(uint *)(lVar2 + 0x24));
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar15;
                lVar12 = uVar15 << 2;
                if (SUB168(auVar7 * ZEXT816(4),8) != 0) {
                  lVar12 = -1;
                }
                lVar12 = FUN_1802229a8(lVar12);
                *(longlong *)(lVar1 + 0x18) = lVar12;
                if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_180104c48(lVar12,*(undefined8 *)(lVar2 + 0x18),
                                      (ulonglong)*(uint *)(lVar2 + 0x20) << 2);
                }
              }
              FUN_1802229d8(*(undefined8 *)(lVar17 + *(longlong *)(param_1 + 0xc0) + 0x18));
              uVar15 = (ulonglong)*(uint *)(param_1 + 200);
              uVar14 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(param_1 + 200));
          }
          for (; (uint)uVar15 < uVar5; uVar15 = (ulonglong)((uint)uVar15 + 1)) {
            lVar1 = lVar10 + uVar15 * 0x28;
            *(undefined8 *)(lVar1 + 0x18) = 0;
            *(undefined8 *)(lVar1 + 0x20) = 0;
          }
          FUN_1802229d8(*(undefined8 *)(param_1 + 0xb8));
          *(longlong *)(param_1 + 0xb8) = lVar10;
          *(longlong *)(param_1 + 0xc0) = lVar10;
          *(uint *)(param_1 + 0xcc) = uVar5;
        }
      }
      uVar5 = *(uint *)(param_1 + 200);
      uVar15 = (ulonglong)uVar5;
      if (*(uint *)(param_1 + 0xcc) != uVar5) {
        while ((uint)uVar13 < uVar5) {
          uVar5 = (int)uVar15 - 1;
          uVar18 = (ulonglong)uVar5;
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar18 * 0x28);
          puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar15 * 0x28);
          *puVar4 = *puVar3;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar3 + 2);
          FUN_1802229d8(puVar4[3]);
          puVar4[3] = 0;
          puVar4[4] = 0;
          uVar15 = uVar18;
          if (*(int *)(puVar3 + 4) != 0) {
            uVar18 = CONCAT44(0,*(uint *)((longlong)puVar3 + 0x24));
            lVar10 = uVar18 << 2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            if (SUB168(auVar8 * ZEXT816(4),8) != 0) {
              lVar10 = -1;
            }
            lVar10 = FUN_1802229a8(lVar10);
            puVar4[3] = lVar10;
            if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(lVar10,puVar3[3],(ulonglong)*(uint *)(puVar3 + 4) << 2);
            }
          }
        }
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        *(uint *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 0x28 + 8) = param_2;
        lVar10 = *(longlong *)(param_1 + 0xc0) + uVar13 * 0x28;
        *(undefined4 *)(lVar10 + 0x10) = 0;
        FUN_1802229d8(*(undefined8 *)(lVar10 + 0x18));
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 0x28) = uVar9;
      }
    }
    else {
      *(undefined4 *)(puVar16 + 2) = 0;
      FUN_1802229d8(puVar16[3]);
      puVar16[3] = 0;
      puVar16[4] = 0;
    }
    puVar16 = (ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar13 * 0x28);
    FUN_1802229d8(0);
  }
  return puVar16 + 2;
}

