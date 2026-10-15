/*
 * FUN_18020cc70 at 18020cc70
 * undefined FUN_18020cc70(void)
 * Address ranges: 18020cc70-18020cfbf;18020cfd0-18020d0b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020cc70(longlong param_1,uint param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  code *extraout_x11;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined4 uStack_4c;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  thunk_FUN_1802236f8(param_1 + 0x28);
  if (param_4 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar11 = (*extraout_x11)(param_4);
    if (uVar11 < param_5) {
      uVar8 = *(uint *)(param_1 + 0x70);
      if (uVar8 == 0) {
LAB_18020cd60:
        plVar17 = (longlong *)FUN_1802229a8(0x18);
        if (plVar17 == (longlong *)0x0) goto LAB_18020d098;
        plVar17[2] = -1;
        uVar11 = 0;
        *plVar17 = 0;
        plVar17[1] = 0;
        uVar8 = *(uint *)(param_1 + 0x70);
        if (uVar8 != 0) {
          uVar13 = 0;
          uVar12 = uVar8;
          do {
            uVar9 = uVar12 + uVar13 >> 1;
            uVar11 = (ulonglong)uVar9;
            uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x68) + uVar11 * 0x18);
            if (uVar15 <= param_4) {
              if (param_4 <= uVar15) break;
              uVar13 = uVar9 + 1;
              uVar11 = (ulonglong)(uVar9 + 1);
              uVar9 = uVar12;
            }
            uVar12 = uVar9;
          } while (uVar12 != uVar13);
          if (((uint)uVar11 != uVar8) &&
             (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x68) + uVar11 * 0x18),
             *puVar2 == param_4)) {
            puVar2[2] = (ulonglong)plVar17;
            goto LAB_18020cef8;
          }
        }
        uVar13 = *(uint *)(param_1 + 0x74);
        plVar1 = (longlong *)(param_1 + 0x68);
        if (uVar13 == uVar8) {
          uVar8 = 0x10;
          if (uVar13 != 0) {
            uVar8 = uVar13 << 1;
          }
          lVar14 = FUN_1802229a8((ulonglong)uVar8 * 0x18);
          if (lVar14 != 0) {
            uVar15 = 0;
            if (*(int *)(param_1 + 0x70) != 0) {
              do {
                uVar13 = (int)uVar15 + 1;
                puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar15 * 0x18);
                puVar3 = (undefined8 *)(lVar14 + uVar15 * 0x18);
                uVar18 = *puVar5;
                puVar3[1] = puVar5[1];
                *puVar3 = uVar18;
                puVar3[2] = puVar5[2];
                uVar15 = (ulonglong)uVar13;
              } while (uVar13 < *(uint *)(param_1 + 0x70));
            }
            FUN_1802229d8(*(undefined8 *)(param_1 + 0x60));
            *(longlong *)(param_1 + 0x60) = lVar14;
            *(longlong *)(param_1 + 0x68) = lVar14;
            *(uint *)(param_1 + 0x74) = uVar8;
          }
        }
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x70);
        if (*(uint *)(param_1 + 0x74) != *(uint *)(param_1 + 0x70)) {
          while ((uint)uVar11 < (uint)uVar15) {
            uVar16 = (ulonglong)((uint)uVar15 - 1);
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar15 * 0x18);
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar16 * 0x18);
            uVar18 = *puVar3;
            puVar5[1] = puVar3[1];
            *puVar5 = uVar18;
            puVar5[2] = puVar3[2];
            uVar15 = uVar16;
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          *(ulonglong *)(*plVar1 + uVar11 * 0x18 + 8) = param_4;
          *(longlong **)(*plVar1 + uVar11 * 0x18 + 0x10) = plVar17;
          *(ulonglong *)(*plVar1 + uVar11 * 0x18) = param_4;
        }
      }
      else {
        uVar13 = 0;
        uVar12 = uVar8;
        do {
          uVar9 = uVar12 + uVar13 >> 1;
          uVar11 = (ulonglong)uVar9;
          uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x68) + uVar11 * 0x18);
          if (uVar15 <= param_4) {
            if (param_4 <= uVar15) break;
            uVar13 = uVar9 + 1;
            uVar11 = (ulonglong)(uVar9 + 1);
            uVar9 = uVar12;
          }
          uVar12 = uVar9;
        } while (uVar12 != uVar13);
        if ((((uint)uVar11 == uVar8) ||
            (puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x68) + uVar11 * 0x18),
            *puVar2 != param_4)) || (puVar2 = puVar2 + 2, puVar2 == (ulonglong *)0x0))
        goto LAB_18020cd60;
        plVar17 = (longlong *)*puVar2;
        if (plVar17 == (longlong *)0x0) goto LAB_18020d098;
      }
LAB_18020cef8:
      uVar11 = (ulonglong)*(uint *)((longlong)plVar17 + 0x14);
      if (*(uint *)((longlong)plVar17 + 0x14) != 0xffffffff) {
        piVar4 = (int *)(*plVar17 + uVar11 * 0x18);
        if ((*piVar4 == -1) || (uVar8 = piVar4[4], uVar11 = (ulonglong)uVar8, uVar8 != 0xffffffff))
        {
          lVar14 = uVar11 * 0x18;
          *(uint *)(*plVar17 + lVar14) = param_2;
          *(int *)(lVar14 + *plVar17 + 4) = param_3;
          *(ulonglong *)(lVar14 + *plVar17 + 8) = param_5;
          *(int *)((longlong)plVar17 + 0x14) = (int)uVar11;
          goto LAB_18020d098;
        }
      }
      iVar6 = (int)plVar17[1];
      iVar7 = *(int *)((longlong)plVar17 + 0xc);
      if (iVar6 == iVar7) {
        uVar8 = iVar7 << 1;
        if (iVar7 == 0) {
          uVar8 = 0x10;
        }
        lVar14 = CONCAT44(0,uVar8) * 0x18;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = CONCAT44(0,uVar8);
        if (SUB168(auVar10 * ZEXT816(0x18),8) != 0) {
          lVar14 = -1;
        }
        lVar14 = FUN_1802229a8(lVar14);
        if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar14,*plVar17,(ulonglong)*(uint *)((longlong)plVar17 + 0xc) * 0x18);
        }
      }
      else {
        puVar5 = (undefined8 *)(*plVar17 + (ulonglong)*(uint *)(plVar17 + 1) * 0x18);
        puVar5[1] = param_5;
        *puVar5 = CONCAT44(param_3,param_2);
        puVar5[2] = CONCAT44(uStack_4c,0xffffffff);
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        if (*(uint *)((longlong)plVar17 + 0x14) != 0xffffffff) {
          *(int *)(*plVar17 + (ulonglong)*(uint *)((longlong)plVar17 + 0x14) * 0x18 + 0x10) = iVar6;
        }
        *(int *)((longlong)plVar17 + 0x14) = iVar6;
        if ((int)plVar17[2] == -1) {
          *(int *)(plVar17 + 2) = iVar6;
        }
      }
      goto LAB_18020d098;
    }
  }
  uVar13 = param_2 & 0xffff;
  uVar8 = uVar13 + param_3;
  if (uVar13 < uVar8) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_2 >> 0x10) * 0x10 + 8);
    do {
      uVar11 = -1L << ((ulonglong)uVar13 & 0x3f);
      uVar12 = (uVar13 & 0xffffffc0) + 0x40;
      if (uVar8 < uVar12) {
        uVar11 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar8 & 0x3f) & uVar11;
      }
      *(ulonglong *)(lVar14 + (ulonglong)(uVar13 >> 6) * 8) =
           *(ulonglong *)(lVar14 + (ulonglong)(uVar13 >> 6) * 8) & (uVar11 ^ 0xffffffffffffffff);
      uVar13 = uVar12;
    } while (uVar12 < uVar8);
  }
LAB_18020d098:
  thunk_FUN_18022370c(param_1 + 0x28);
  return;
}

