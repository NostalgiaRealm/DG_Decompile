/*
 * FUN_180143618 at 180143618
 * undefined FUN_180143618(void)
 * Address ranges: 180143618-180143a67;180143a78-180143afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180143618(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 in_x7;
  int iVar13;
  undefined4 uVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uStack_e8;
  int local_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b0 [8];
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [6];
  
  puVar10 = __hybrid_os_arm64x_dispatch_icall;
  lVar18 = *(longlong *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x28);
  lVar22 = lVar18 + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
  if (iVar4 == 1) {
    lVar7 = 0;
    if (lVar18 != 0) {
      lVar7 = lVar18 + 0x6a8;
    }
    lVar2 = 0;
    if (lVar18 != 0) {
      lVar2 = lVar18 + 0x6d0;
    }
    lVar18 = 8000;
    if (*(char *)(param_1 + 0x31) == '\0') {
      lVar18 = 0x1eb0;
    }
    puVar11 = (undefined8 *)
              FUN_1802109e8(lVar2,(ulonglong)*(uint *)(param_1 + 0x20),lVar18 + lVar22,
                            *(undefined4 *)(param_1 + 0x24),lVar7);
  }
  else {
    uVar23 = (ulonglong)*(uint *)(param_1 + 0x24);
    iVar13 = 1;
    if (iVar4 == 2 || iVar4 == 3) {
      iVar13 = 2;
    }
    local_a0 = uVar23;
    thunk_FUN_1802236f8(lVar22 + 0x2158);
    uVar5 = *(uint *)(lVar22 + 0x2198);
    puVar11 = (undefined8 *)0x0;
    if (uVar5 != 0) {
      uVar16 = 0;
      uVar17 = uVar5;
      do {
        uVar6 = uVar17 + uVar16 >> 1;
        uVar19 = (ulonglong)uVar6;
        uVar20 = *(ulonglong *)(*(longlong *)(lVar22 + 0x2190) + uVar19 * 0x18);
        if (uVar20 <= uVar23) {
          if (uVar23 <= uVar20) break;
          uVar16 = uVar6 + 1;
          uVar19 = (ulonglong)(uVar6 + 1);
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
      } while (uVar17 != uVar16);
      if ((((uint)uVar19 != uVar5) &&
          (puVar1 = (ulonglong *)(*(longlong *)(lVar22 + 0x2190) + uVar19 * 0x18), *puVar1 == uVar23
          )) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
        uVar5 = *(uint *)(*puVar1 + 8);
        local_a8 = uVar23;
        local_98 = param_1;
        do {
          param_1 = local_98;
          if (uVar5 == 0) break;
          uVar16 = uVar5 - 1;
          uVar12 = (*(code *)puVar10)();
          (*extraout_x11)(uVar12,local_58,auStack_b0);
          if (local_58[0] == iVar13) {
            plVar15 = (longlong *)*puVar1;
            puVar11 = (undefined8 *)((ulonglong)uVar16 * 0x10 + *plVar15);
            uStack_e8 = puVar11[1];
            puVar11 = (undefined8 *)*puVar11;
            uVar17 = *(uint *)(plVar15 + 1);
            uStack_c8 = (uint)uStack_e8;
            uStack_c4 = (undefined4)((ulonglong)uStack_e8 >> 0x20);
            local_d0 = (int)puVar11;
            uStack_cc = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (uVar16 < uVar17) {
              for (; uVar5 < uVar17; uVar5 = uVar5 + 1) {
                puVar21 = (undefined8 *)(*plVar15 + (ulonglong)uVar5 * 0x10);
                uVar12 = *puVar21;
                puVar9 = (undefined8 *)(*plVar15 + (ulonglong)(uVar5 - 1) * 0x10);
                puVar9[1] = puVar21[1];
                *puVar9 = uVar12;
                uVar17 = *(uint *)(plVar15 + 1);
              }
              *(uint *)(plVar15 + 1) = uVar17 - 1;
            }
            *(ulonglong *)(lVar22 + 0x2150) = *(longlong *)(lVar22 + 0x2150) - local_a8;
            puVar21 = (undefined8 *)*puVar1;
            if (*(int *)(puVar21 + 1) == 0) {
              if (puVar21 != (undefined8 *)0x0) {
                FUN_1802229d8(*puVar21);
                FUN_1802229d8(puVar21,0x10);
              }
              FUN_1801613b0(lVar22 + 0x2188,&local_a0);
            }
            if (uStack_c8 == *(uint *)(lVar22 + 0x21b0)) {
              FUN_18021d238(lVar22 + 0x21a0);
            }
            else if (uStack_c8 == *(uint *)(lVar22 + 0x21b4)) {
              lVar18 = (ulonglong)uStack_c8 * 0x10;
              *(undefined8 *)(*(longlong *)(lVar22 + 0x21a0) + lVar18) = 0;
              *(undefined4 *)(lVar22 + 0x21b4) =
                   *(undefined4 *)(lVar18 + *(longlong *)(lVar22 + 0x21a0) + 8);
            }
            else {
              lVar7 = (ulonglong)uStack_c8 * 0x10;
              *(undefined8 *)(*(longlong *)(lVar22 + 0x21a0) + lVar7) = 0;
              lVar18 = lVar7 + *(longlong *)(lVar22 + 0x21a0);
              *(undefined4 *)
               (*(longlong *)(lVar22 + 0x21a0) + (ulonglong)*(uint *)(lVar18 + 8) * 0x10 + 0xc) =
                   *(undefined4 *)(lVar18 + 0xc);
              lVar18 = lVar7 + *(longlong *)(lVar22 + 0x21a0);
              *(undefined4 *)
               (*(longlong *)(lVar22 + 0x21a0) + (ulonglong)*(uint *)(lVar18 + 0xc) * 0x10 + 8) =
                   *(undefined4 *)(lVar18 + 8);
              *(undefined4 *)(lVar7 + *(longlong *)(lVar22 + 0x21a0) + 0xc) =
                   *(undefined4 *)
                    (*(longlong *)(lVar22 + 0x21a0) + (ulonglong)*(uint *)(lVar22 + 0x21b4) * 0x10 +
                    0xc);
              *(undefined4 *)(lVar7 + *(longlong *)(lVar22 + 0x21a0) + 8) =
                   *(undefined4 *)(lVar22 + 0x21b4);
              *(uint *)(*(longlong *)(lVar22 + 0x21a0) +
                        (ulonglong)*(uint *)(lVar22 + 0x21b4) * 0x10 + 0xc) = uStack_c8;
              uVar5 = *(uint *)(lVar7 + *(longlong *)(lVar22 + 0x21a0) + 0xc);
              if (uVar5 != 0xffffffff) {
                *(uint *)(*(longlong *)(lVar22 + 0x21a0) + (ulonglong)uVar5 * 0x10 + 8) = uStack_c8;
              }
            }
          }
          param_1 = local_98;
          uVar5 = uVar16;
        } while (puVar11 == (undefined8 *)0x0);
      }
    }
    thunk_FUN_18022370c(lVar22 + 0x2158);
    if (puVar11 != (undefined8 *)0x0) goto LAB_180143a14;
    lVar22 = *(longlong *)(param_1 + 0x10);
    uVar14 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    lVar18 = 0;
    if (lVar22 != 0) {
      lVar18 = lVar22 + 0x6d0;
    }
    uVar12 = *(undefined8 *)(lVar22 + 0x1b500);
    puVar11 = (undefined8 *)FUN_1802229a8(0x58);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      *puVar11 = &PTR_FUN_1802390b0;
      puVar11[1] = lVar18;
      *(undefined4 *)(puVar11 + 6) = uVar3;
      puVar11[8] = &PTR_D3DPERF_GetStatus_native_180239080;
      puVar11[9] = 0;
      *(undefined4 *)(puVar11 + 2) = uVar14;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x34) = 0;
      *(undefined1 *)((longlong)puVar11 + 0x3c) = 0;
      puVar11[10] = uVar12;
    }
    if (puVar11 != (undefined8 *)0x0) {
      local_90[0] = 1;
      uStack_80 = (ulonglong)*(uint *)(puVar11 + 6);
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      local_88 = 0x10000;
      local_68 = 0x100000000;
      local_78 = 0x1000100000001;
      uStack_70 = 0x100000000;
      uVar14 = 0;
      if (iVar13 == 2) {
        uVar14 = 0xac3;
      }
      local_60 = 0;
      local_d0 = iVar13;
      FUN_18020d338(puVar11[1],*(undefined4 *)(puVar11 + 2),&local_d0,0,local_90,uVar14,0,in_x7,
                    puVar11 + 9);
      if (puVar11[9] == 0) {
        FUN_180210728(puVar11);
        FUN_1802229d8(puVar11,0x58);
        puVar11 = (undefined8 *)0x0;
      }
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return 0;
  }
LAB_180143a14:
  uStack_e8 = CONCAT44(uStack_e8._4_4_,*(undefined4 *)(param_1 + 0x48));
  iVar4 = *(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x40) != iVar4) {
    puVar21 = (undefined8 *)
              (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 0x10);
    puVar21[1] = uStack_e8;
    *puVar21 = puVar11;
    iVar4 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar4 + 1;
    *(int *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10 + 8) =
         iVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x40) + -1;
    return 1;
  }
  uVar5 = iVar4 << 1;
  if (iVar4 == 0) {
    uVar5 = 0x10;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = CONCAT44(0,uVar5);
  lVar18 = CONCAT44(0,uVar5) << 4;
  if (SUB168(auVar8 * ZEXT816(0x10),8) != 0) {
    lVar18 = -1;
  }
  lVar18 = FUN_1802229a8(lVar18);
  if (lVar18 == 0) {
    if (puVar11 != (undefined8 *)0x0) {
      (*(code *)puVar10)(0x180224000);
      (*extraout_x11_00)(puVar11,1);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(lVar18,*(undefined8 *)(param_1 + 0x38),
                      (ulonglong)*(uint *)(param_1 + 0x44) << 4);
}

