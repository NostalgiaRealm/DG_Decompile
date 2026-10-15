/*
 * FUN_180050c10 at 180050c10
 * undefined FUN_180050c10(void)
 * Address ranges: 180050c10-180050fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050c10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong local_c0 [2];
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 uStack_52;
  
  if (*(char *)(param_1 + 0xb9) == '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar13 = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar10 = (ulonglong *)0x0;
        puVar9 = (ulonglong *)&DAT_00000008;
        puVar19 = (ulonglong *)&DAT_00000010;
        goto LAB_180050c80;
      }
      do {
        lVar15 = *(longlong *)(param_1 + 0x30) + uVar13 * 0x38;
        puVar10 = (ulonglong *)(lVar15 + 8);
        puVar9 = (ulonglong *)(lVar15 + 0x10);
        puVar19 = (ulonglong *)(lVar15 + 0x18);
LAB_180050c80:
        local_54 = 0;
        uStack_a8 = puVar19[1];
        local_b0 = *puVar19;
        uStack_98 = puVar19[3];
        local_a0 = puVar19[2];
        uVar18 = *puVar10;
        uVar16 = *puVar9;
        uVar14 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78);
        local_58 = 0xffffffff;
        local_90 = uVar18;
        uStack_88 = uVar16;
        local_80 = uVar14;
        local_78 = local_b0;
        uStack_70 = uStack_a8;
        uStack_68 = local_a0;
        uStack_60 = uStack_98;
        (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x80);
        uVar8 = *(uint *)(param_1 + 0x78);
        local_c0[0] = uVar18;
        if (uVar8 != 0) {
          uVar7 = 0;
          uVar6 = uVar8;
          do {
            uVar3 = uVar6 + uVar7 >> 1;
            uVar11 = (ulonglong)uVar3;
            uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar11 * 0x18);
            if (uVar12 <= uVar18) {
              if (uVar18 <= uVar12) break;
              uVar7 = uVar3 + 1;
              uVar11 = (ulonglong)(uVar3 + 1);
              uVar3 = uVar6;
            }
            uVar6 = uVar3;
          } while (uVar6 != uVar7);
          if ((((uint)uVar11 != uVar8) &&
              (puVar10 = (ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar11 * 0x18),
              *puVar10 == uVar18)) && (puVar10 = puVar10 + 2, puVar10 != (ulonglong *)0x0)) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uint)*puVar10 * 0x40 + 0x3d)
                 = 1;
            FUN_1800516b8(param_1 + 0x68,local_c0);
          }
        }
        uVar8 = *(uint *)(param_1 + 0x54);
        uVar11 = (ulonglong)uVar8;
        if (uVar8 != 0xffffffff) {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + uVar11 * 0x40);
          if (*plVar1 != 0) {
            uVar11 = (ulonglong)*(uint *)(plVar1 + 7);
          }
          uVar8 = (uint)uVar11;
        }
        if (uVar8 == 0xffffffff) {
          iVar5 = *(int *)(param_1 + 0x48);
          iVar2 = *(int *)(param_1 + 0x4c);
          if (iVar5 != iVar2) {
LAB_180050e3c:
            puVar10 = (ulonglong *)
                      (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x40);
            puVar10[1] = uStack_88;
            *puVar10 = local_90;
            puVar10[3] = local_78;
            puVar10[2] = local_80;
            puVar10[5] = uStack_68;
            puVar10[4] = uStack_70;
            puVar10[7] = CONCAT26(uStack_52,CONCAT24(local_54,local_58));
            puVar10[6] = uStack_60;
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
            if (*(uint *)(param_1 + 0x54) != 0xffffffff) {
              *(int *)(*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x40 +
                      0x38) = iVar5;
            }
            *(int *)(param_1 + 0x54) = iVar5;
            if (*(int *)(param_1 + 0x50) == -1) {
              *(int *)(param_1 + 0x50) = iVar5;
            }
            goto LAB_180050e90;
          }
          uVar8 = iVar2 << 1;
          if (iVar2 == 0) {
            uVar8 = 0x10;
          }
          lVar15 = CONCAT44(0,uVar8) << 6;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,uVar8);
          if (SUB168(auVar4 * ZEXT816(0x40),8) != 0) {
            lVar15 = -1;
          }
          lVar15 = thunk_FUN_180102f80(lVar15);
          if (lVar15 != 0) {
            thunk_FUN_180001218(lVar15,*(undefined8 *)(param_1 + 0x40),
                                (ulonglong)*(uint *)(param_1 + 0x4c) << 6);
            thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x40));
            *(longlong *)(param_1 + 0x40) = lVar15;
            *(uint *)(param_1 + 0x4c) = uVar8;
            goto LAB_180050e3c;
          }
        }
        else {
          lVar17 = uVar11 * 0x40;
          *(ulonglong *)(*(longlong *)(param_1 + 0x40) + lVar17) = uVar18;
          *(ulonglong *)(lVar17 + *(longlong *)(param_1 + 0x40) + 8) = uVar16;
          *(ulonglong *)(lVar17 + *(longlong *)(param_1 + 0x40) + 0x10) = uVar14;
          lVar15 = lVar17 + *(longlong *)(param_1 + 0x40);
          *(ulonglong *)(lVar15 + 0x20) = uStack_a8;
          *(ulonglong *)(lVar15 + 0x18) = local_b0;
          *(ulonglong *)(lVar15 + 0x30) = uStack_98;
          *(ulonglong *)(lVar15 + 0x28) = local_a0;
          *(undefined1 *)(lVar17 + *(longlong *)(param_1 + 0x40) + 0x3c) = 0;
          *(undefined1 *)(lVar17 + *(longlong *)(param_1 + 0x40) + 0x3d) = 0;
          *(int *)(param_1 + 0x54) = (int)uVar11;
LAB_180050e90:
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        }
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x80);
        uVar14 = local_b0;
        if (*(int *)(uVar18 + 0x10) == 9) {
          uVar16 = local_a0 & 0xffffffff;
          FUN_1800ea8d8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),local_b0,0,uVar16);
          FUN_1800ea928(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),uVar14,0,uVar16,1,
                        uStack_a8,uVar16 << 3);
          *puVar19 = 0;
        }
        uVar8 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 0x38));
    }
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x80);
    uVar8 = *(uint *)(param_1 + 0x50);
    while (uVar8 != 0xffffffff) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar8 * 0x40);
      lVar15 = *plVar1;
      if (lVar15 == 0) break;
      if ((*(char *)((longlong)plVar1 + 0x3c) != '\0') &&
         (*(char *)((longlong)plVar1 + 0x3d) == '\0')) {
        lVar17 = plVar1[1];
        while (iVar5 = FUN_180001510(lVar15 + 0x54,1,0), iVar5 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
        }
        if (lVar17 == *(longlong *)(lVar15 + 0x30)) {
          FUN_180001510(lVar15 + 0x50,3,2);
        }
        *(undefined4 *)(lVar15 + 0x54) = 0;
      }
      uVar8 = *(uint *)(plVar1 + 7);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x80);
    (*__imp_KERNEL32_dll_SetEvent)(*(undefined8 *)(param_1 + 0xb0));
  }
  return;
}

