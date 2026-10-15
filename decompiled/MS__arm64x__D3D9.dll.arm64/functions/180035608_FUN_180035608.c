/*
 * FUN_180035608 at 180035608
 * undefined FUN_180035608(void)
 * Address ranges: 180035608-180035ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180035608(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  undefined8 uStack_e8;
  int local_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c0 [8];
  ulonglong local_b8;
  longlong local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_70 [8];
  
  lVar15 = *(longlong *)(param_1 + 0x10);
  lVar18 = lVar15 + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == 1) {
    lVar6 = 0;
    if (lVar15 != 0) {
      lVar6 = lVar15 + 0x6a8;
    }
    lVar2 = 0;
    if (lVar15 != 0) {
      lVar2 = lVar15 + 0x6d0;
    }
    lVar15 = 8000;
    if (*(char *)(param_1 + 0x31) == '\0') {
      lVar15 = 0x1eb0;
    }
    puVar9 = (undefined8 *)
             FUN_1800eeec0(lVar2,(ulonglong)*(uint *)(param_1 + 0x20),lVar15 + lVar18,
                           *(undefined4 *)(param_1 + 0x24),lVar6);
LAB_1800359f4:
    if (puVar9 != (undefined8 *)0x0) goto LAB_1800359fc;
LAB_180035ad0:
    uVar11 = 0;
  }
  else {
    uVar20 = (ulonglong)*(uint *)(param_1 + 0x24);
    iVar22 = 1;
    if (iVar4 == 2 || iVar4 == 3) {
      iVar22 = 2;
    }
    local_b8 = uVar20;
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar18 + 0x2158);
    uVar21 = *(uint *)(lVar18 + 0x2198);
    puVar9 = (undefined8 *)0x0;
    if (uVar21 != 0) {
      uVar13 = 0;
      uVar14 = uVar21;
      do {
        uVar5 = uVar14 + uVar13 >> 1;
        uVar16 = (ulonglong)uVar5;
        uVar17 = *(ulonglong *)(*(longlong *)(lVar18 + 0x2190) + uVar16 * 0x18);
        if (uVar17 <= uVar20) {
          if (uVar20 <= uVar17) break;
          uVar13 = uVar5 + 1;
          uVar16 = (ulonglong)(uVar5 + 1);
          uVar5 = uVar14;
        }
        uVar14 = uVar5;
      } while (uVar14 != uVar13);
      if ((((uint)uVar16 != uVar21) &&
          (puVar1 = (ulonglong *)(*(longlong *)(lVar18 + 0x2190) + uVar16 * 0x18), *puVar1 == uVar20
          )) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
        uVar21 = *(uint *)(*puVar1 + 8);
        local_b0 = param_1;
        do {
          param_1 = local_b0;
          if (uVar21 == 0) break;
          uVar13 = uVar21 - 1;
          plVar10 = *(longlong **)
                     (*(longlong *)(*(longlong *)*puVar1 + (ulonglong)uVar13 * 0x10) + 0x48);
          (**(code **)(*plVar10 + 0x70))(plVar10,local_70,auStack_c0);
          if (local_70[0] == iVar22) {
            plVar10 = (longlong *)*puVar1;
            puVar9 = (undefined8 *)((ulonglong)uVar13 * 0x10 + *plVar10);
            uStack_e8 = puVar9[1];
            puVar9 = (undefined8 *)*puVar9;
            uVar14 = *(uint *)(plVar10 + 1);
            uStack_d8 = (uint)uStack_e8;
            uStack_d4 = (undefined4)((ulonglong)uStack_e8 >> 0x20);
            local_e0 = (int)puVar9;
            uStack_dc = (undefined4)((ulonglong)puVar9 >> 0x20);
            if (uVar13 < uVar14) {
              for (; uVar21 < uVar14; uVar21 = uVar21 + 1) {
                puVar19 = (undefined8 *)(*plVar10 + (ulonglong)uVar21 * 0x10);
                uVar11 = *puVar19;
                puVar8 = (undefined8 *)(*plVar10 + (ulonglong)(uVar21 - 1) * 0x10);
                puVar8[1] = puVar19[1];
                *puVar8 = uVar11;
                uVar14 = *(uint *)(plVar10 + 1);
              }
              *(uint *)(plVar10 + 1) = uVar14 - 1;
            }
            *(ulonglong *)(lVar18 + 0x2150) = *(longlong *)(lVar18 + 0x2150) - uVar20;
            puVar19 = (undefined8 *)*puVar1;
            if (*(int *)(puVar19 + 1) == 0) {
              if (puVar19 != (undefined8 *)0x0) {
                thunk_FUN_180102fc0(*puVar19);
                FUN_180102fc0(puVar19,0x10);
              }
              FUN_1800516b8(lVar18 + 0x2188,&local_b8);
            }
            if (uStack_d8 == *(uint *)(lVar18 + 0x21b0)) {
              FUN_1800fd9e0(lVar18 + 0x21a0);
            }
            else if (uStack_d8 == *(uint *)(lVar18 + 0x21b4)) {
              lVar15 = (ulonglong)uStack_d8 * 0x10;
              *(undefined8 *)(*(longlong *)(lVar18 + 0x21a0) + lVar15) = 0;
              *(undefined4 *)(lVar18 + 0x21b4) =
                   *(undefined4 *)(lVar15 + *(longlong *)(lVar18 + 0x21a0) + 8);
            }
            else {
              lVar6 = (ulonglong)uStack_d8 * 0x10;
              *(undefined8 *)(*(longlong *)(lVar18 + 0x21a0) + lVar6) = 0;
              lVar15 = lVar6 + *(longlong *)(lVar18 + 0x21a0);
              *(undefined4 *)
               (*(longlong *)(lVar18 + 0x21a0) + (ulonglong)*(uint *)(lVar15 + 8) * 0x10 + 0xc) =
                   *(undefined4 *)(lVar15 + 0xc);
              lVar15 = lVar6 + *(longlong *)(lVar18 + 0x21a0);
              *(undefined4 *)
               (*(longlong *)(lVar18 + 0x21a0) + (ulonglong)*(uint *)(lVar15 + 0xc) * 0x10 + 8) =
                   *(undefined4 *)(lVar15 + 8);
              *(undefined4 *)(lVar6 + *(longlong *)(lVar18 + 0x21a0) + 0xc) =
                   *(undefined4 *)
                    (*(longlong *)(lVar18 + 0x21a0) + (ulonglong)*(uint *)(lVar18 + 0x21b4) * 0x10 +
                    0xc);
              *(undefined4 *)(lVar6 + *(longlong *)(lVar18 + 0x21a0) + 8) =
                   *(undefined4 *)(lVar18 + 0x21b4);
              *(uint *)(*(longlong *)(lVar18 + 0x21a0) +
                        (ulonglong)*(uint *)(lVar18 + 0x21b4) * 0x10 + 0xc) = uStack_d8;
              uVar21 = *(uint *)(lVar6 + *(longlong *)(lVar18 + 0x21a0) + 0xc);
              if (uVar21 != 0xffffffff) {
                *(uint *)(*(longlong *)(lVar18 + 0x21a0) + (ulonglong)uVar21 * 0x10 + 8) = uStack_d8
                ;
              }
            }
          }
          param_1 = local_b0;
          uVar21 = uVar13;
        } while (puVar9 == (undefined8 *)0x0);
      }
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar18 + 0x2158);
    if (puVar9 == (undefined8 *)0x0) {
      lVar18 = *(longlong *)(param_1 + 0x10);
      uVar12 = *(undefined4 *)(param_1 + 0x20);
      uVar3 = *(undefined4 *)(param_1 + 0x24);
      lVar15 = 0;
      if (lVar18 != 0) {
        lVar15 = lVar18 + 0x6d0;
      }
      uVar11 = *(undefined8 *)(lVar18 + 0x1b500);
      puVar9 = (undefined8 *)FUN_180102f80(0x58);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        *puVar9 = &PTR_FUN_18023bfd8;
        puVar9[1] = lVar15;
        puVar9[10] = uVar11;
        puVar9[8] = &PTR_D3DPERF_GetStatus_18023bfa8;
        puVar9[9] = 0;
        *(undefined4 *)(puVar9 + 2) = uVar12;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined4 *)(puVar9 + 6) = uVar3;
        *(undefined8 *)((longlong)puVar9 + 0x34) = 0;
        *(undefined1 *)((longlong)puVar9 + 0x3c) = 0;
      }
      if (puVar9 != (undefined8 *)0x0) {
        uStack_98 = (ulonglong)*(uint *)(puVar9 + 6);
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        local_a0 = 0x10000;
        local_80 = 0x100000000;
        local_90 = 0x1000100000001;
        uStack_88 = 0x100000000;
        uVar12 = 0;
        if (iVar22 == 2) {
          uVar12 = 0xac3;
        }
        local_a8[0] = 1;
        local_78 = 0;
        plVar10 = *(longlong **)(puVar9[1] + (ulonglong)*(uint *)(puVar9 + 2) * 0x20);
        local_e0 = iVar22;
        (**(code **)(*plVar10 + 0xd8))
                  (plVar10,&local_e0,0,local_a8,uVar12,0,&DAT_180235458,puVar9 + 9);
        if (puVar9[9] == 0) {
          FUN_1800ef870();
          FUN_180102fc0(puVar9,0x58);
          puVar9 = (undefined8 *)0x0;
        }
      }
      goto LAB_1800359f4;
    }
LAB_1800359fc:
    uStack_e8 = CONCAT44(uStack_e8._4_4_,*(undefined4 *)(param_1 + 0x48));
    iVar4 = *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x40) == iVar4) {
      uVar21 = iVar4 << 1;
      if (iVar4 == 0) {
        uVar21 = 0x10;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = CONCAT44(0,uVar21);
      lVar15 = CONCAT44(0,uVar21) << 4;
      if (SUB168(auVar7 * ZEXT816(0x10),8) != 0) {
        lVar15 = -1;
      }
      lVar15 = thunk_FUN_180102f80(lVar15);
      if (lVar15 == 0) {
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
        }
        goto LAB_180035ad0;
      }
      thunk_FUN_180001218(lVar15,*(undefined8 *)(param_1 + 0x38),
                          (ulonglong)*(uint *)(param_1 + 0x44) << 4);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x38));
      *(longlong *)(param_1 + 0x38) = lVar15;
      *(uint *)(param_1 + 0x44) = uVar21;
    }
    uVar11 = 1;
    puVar19 = (undefined8 *)
              (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 0x10);
    puVar19[1] = uStack_e8;
    *puVar19 = puVar9;
    iVar4 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar4 + 1;
    *(int *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10 + 8) =
         iVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x40) + -1;
  }
  return uVar11;
}

