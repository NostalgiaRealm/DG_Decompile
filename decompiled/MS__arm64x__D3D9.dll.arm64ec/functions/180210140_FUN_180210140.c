/*
 * FUN_180210140 at 180210140
 * undefined FUN_180210140(void)
 * Address ranges: 180210140-18021046f;180210480-180210517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180210140(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  code *extraout_x11;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  
  thunk_FUN_1802236f8(param_1 + 0x10);
  if (param_5 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar10 = (*extraout_x11)(param_5);
    if (uVar10 < param_6) {
      uVar7 = *(uint *)(param_1 + 0x80);
      if (uVar7 == 0) {
LAB_180210224:
        plVar16 = (longlong *)FUN_1802229a8(0x18);
        if (plVar16 == (longlong *)0x0) goto LAB_1802104f8;
        *plVar16 = 0;
        plVar16[1] = 0;
        plVar16[2] = -1;
        uVar7 = *(uint *)(param_1 + 0x80);
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar13 = 0;
          uVar12 = uVar7;
          do {
            uVar8 = uVar12 + uVar13 >> 1;
            uVar10 = (ulonglong)uVar8;
            uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar10 * 0x18);
            if (uVar15 <= param_5) {
              if (param_5 <= uVar15) break;
              uVar13 = uVar8 + 1;
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar8 = uVar12;
            }
            uVar12 = uVar8;
          } while (uVar12 != uVar13);
          if (((uint)uVar10 != uVar7) &&
             (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar10 * 0x18),
             *puVar2 == param_5)) {
            puVar2[2] = (ulonglong)plVar16;
            goto LAB_1802103bc;
          }
        }
        uVar13 = *(uint *)(param_1 + 0x84);
        plVar1 = (longlong *)(param_1 + 0x78);
        if (uVar13 == uVar7) {
          uVar7 = 0x10;
          if (uVar13 != 0) {
            uVar7 = uVar13 << 1;
          }
          lVar14 = FUN_1802229a8((ulonglong)uVar7 * 0x18);
          if (lVar14 != 0) {
            uVar15 = 0;
            if (*(int *)(param_1 + 0x80) != 0) {
              do {
                uVar13 = (int)uVar15 + 1;
                puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar15 * 0x18);
                puVar3 = (undefined8 *)(lVar14 + uVar15 * 0x18);
                uVar17 = *puVar4;
                puVar3[1] = puVar4[1];
                *puVar3 = uVar17;
                puVar3[2] = puVar4[2];
                uVar15 = (ulonglong)uVar13;
              } while (uVar13 < *(uint *)(param_1 + 0x80));
            }
            FUN_1802229d8(*(undefined8 *)(param_1 + 0x70));
            *(longlong *)(param_1 + 0x70) = lVar14;
            *(longlong *)(param_1 + 0x78) = lVar14;
            *(uint *)(param_1 + 0x84) = uVar7;
          }
        }
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x80);
        if (*(uint *)(param_1 + 0x84) != *(uint *)(param_1 + 0x80)) {
          while ((uint)uVar10 < (uint)uVar15) {
            uVar11 = (ulonglong)((uint)uVar15 - 1);
            puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar15 * 0x18);
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar11 * 0x18);
            uVar17 = *puVar3;
            puVar4[1] = puVar3[1];
            *puVar4 = uVar17;
            puVar4[2] = puVar3[2];
            uVar15 = uVar11;
          }
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          *(ulonglong *)(*plVar1 + uVar10 * 0x18 + 8) = param_5;
          *(longlong **)(*plVar1 + uVar10 * 0x18 + 0x10) = plVar16;
          *(ulonglong *)(*plVar1 + uVar10 * 0x18) = param_5;
        }
      }
      else {
        uVar13 = 0;
        uVar12 = uVar7;
        do {
          uVar8 = uVar12 + uVar13 >> 1;
          uVar10 = (ulonglong)uVar8;
          uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar10 * 0x18);
          if (uVar15 <= param_5) {
            if (param_5 <= uVar15) break;
            uVar13 = uVar8 + 1;
            uVar10 = (ulonglong)(uVar8 + 1);
            uVar8 = uVar12;
          }
          uVar12 = uVar8;
        } while (uVar12 != uVar13);
        if ((((uint)uVar10 == uVar7) ||
            (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar10 * 0x18),
            *puVar2 != param_5)) || (puVar2 = puVar2 + 2, puVar2 == (ulonglong *)0x0))
        goto LAB_180210224;
        plVar16 = (longlong *)*puVar2;
        if (plVar16 == (longlong *)0x0) goto LAB_1802104f8;
      }
LAB_1802103bc:
      uVar10 = (ulonglong)*(uint *)((longlong)plVar16 + 0x14);
      if (*(uint *)((longlong)plVar16 + 0x14) != 0xffffffff) {
        lVar14 = *plVar16 + uVar10 * 0x20;
        if ((*(int *)(lVar14 + 0x18) == 0) ||
           (uVar7 = *(uint *)(lVar14 + 0x1c), uVar10 = (ulonglong)uVar7, uVar7 != 0xffffffff)) {
          lVar14 = uVar10 * 0x20;
          *(undefined4 *)(lVar14 + *plVar16 + 0x18) = param_2;
          *(undefined8 *)(*plVar16 + lVar14) = param_3;
          *(undefined8 *)(lVar14 + *plVar16 + 8) = param_4;
          *(ulonglong *)(lVar14 + *plVar16 + 0x10) = param_6;
          *(int *)((longlong)plVar16 + 0x14) = (int)uVar10;
          goto LAB_1802104f8;
        }
      }
      iVar5 = (int)plVar16[1];
      iVar6 = *(int *)((longlong)plVar16 + 0xc);
      if (iVar5 == iVar6) {
        uVar7 = iVar6 << 1;
        if (iVar6 == 0) {
          uVar7 = 0x10;
        }
        auVar9._8_8_ = 0;
        auVar9._0_8_ = CONCAT44(0,uVar7);
        lVar14 = CONCAT44(0,uVar7) << 5;
        if (SUB168(auVar9 * ZEXT816(0x20),8) != 0) {
          lVar14 = -1;
        }
        lVar14 = FUN_1802229a8(lVar14);
        if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar14,*plVar16,(ulonglong)*(uint *)((longlong)plVar16 + 0xc) << 5);
        }
      }
      else {
        puVar4 = (undefined8 *)(*plVar16 + (ulonglong)*(uint *)(plVar16 + 1) * 0x20);
        *puVar4 = param_3;
        puVar4[1] = param_4;
        puVar4[2] = param_6;
        *(undefined4 *)(puVar4 + 3) = param_2;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 0xffffffff;
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        if (*(uint *)((longlong)plVar16 + 0x14) != 0xffffffff) {
          *(int *)(*plVar16 + (ulonglong)*(uint *)((longlong)plVar16 + 0x14) * 0x20 + 0x1c) = iVar5;
        }
        *(int *)((longlong)plVar16 + 0x14) = iVar5;
        if ((int)plVar16[2] == -1) {
          *(int *)(plVar16 + 2) = iVar5;
        }
      }
      goto LAB_1802104f8;
    }
  }
  FUN_18020f450(param_1,param_2,param_3,param_4);
LAB_1802104f8:
  thunk_FUN_18022370c(param_1 + 0x10);
  return;
}

