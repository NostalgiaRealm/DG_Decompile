/*
 * FUN_18004b3f8 at 18004b3f8
 * undefined FUN_18004b3f8(void)
 * Address ranges: 18004b3f8-18004b807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b3f8(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  
  FUN_180048e10(param_1,param_3,0);
  lVar16 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar16 + 0x12c0);
  if (*(char *)(lVar16 + 0x14c4) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar2 = *(uint *)(param_1 + 0xf7c8);
      if (uVar2 == 0) {
LAB_18004b4f8:
        puVar6 = (ulonglong *)(param_1 + 0xf7c0);
        uVar13 = FUN_180102f80(0x254);
        if (uVar13 != 0) {
          thunk_FUN_180001218(uVar13,param_3,0x254);
          uVar2 = *(uint *)(param_1 + 0xf7c8);
          uVar15 = 0;
          uVar17 = (ulonglong)*param_3;
          if (uVar2 == 0) {
LAB_18004b590:
            uVar11 = *(uint *)(param_1 + 0xf7cc);
            if (uVar11 == uVar2) {
              uVar2 = 0x10;
              if (uVar11 != 0) {
                uVar2 = uVar11 << 1;
              }
              lVar16 = thunk_FUN_180102f80((ulonglong)uVar2 * 0x18 + 0x7f);
              if (lVar16 != 0) {
                uVar18 = lVar16 + 0x7fU & 0xffffffffffffff80;
                uVar14 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar11 = (int)uVar14 + 1;
                    puVar7 = (undefined8 *)(*puVar6 + uVar14 * 0x18);
                    puVar12 = (undefined8 *)(uVar18 + uVar14 * 0x18);
                    uVar19 = *puVar7;
                    puVar12[1] = puVar7[1];
                    *puVar12 = uVar19;
                    puVar12[2] = puVar7[2];
                    uVar14 = (ulonglong)uVar11;
                  } while (uVar11 < *(uint *)(param_1 + 0xf7c8));
                }
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf7b8));
                *puVar6 = uVar18;
                *(longlong *)(param_1 + 0xf7b8) = lVar16;
                *(uint *)(param_1 + 0xf7cc) = uVar2;
              }
            }
            uVar14 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar15 < (uint)uVar14) {
                uVar18 = (ulonglong)((uint)uVar14 - 1);
                puVar7 = (undefined8 *)(*puVar6 + uVar14 * 0x18);
                puVar12 = (undefined8 *)(*puVar6 + uVar18 * 0x18);
                uVar19 = *puVar12;
                puVar7[1] = puVar12[1];
                *puVar7 = uVar19;
                puVar7[2] = puVar12[2];
                uVar14 = uVar18;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*puVar6 + uVar15 * 0x18 + 8) = *param_3;
              *(ulonglong *)(*puVar6 + uVar15 * 0x18 + 0x10) = uVar13;
              *(ulonglong *)(*puVar6 + uVar15 * 0x18) = uVar17;
            }
          }
          else {
            uVar11 = 0;
            uVar10 = uVar2;
            do {
              uVar9 = uVar10 + uVar11 >> 1;
              uVar15 = (ulonglong)uVar9;
              uVar14 = *(ulonglong *)(*puVar6 + uVar15 * 0x18);
              if (uVar14 <= uVar17) {
                if (uVar17 <= uVar14) break;
                uVar11 = uVar9 + 1;
                uVar15 = (ulonglong)(uVar9 + 1);
                uVar9 = uVar10;
              }
              uVar10 = uVar9;
            } while (uVar10 != uVar11);
            if (((uint)uVar15 == uVar2) ||
               (puVar1 = (ulonglong *)(*puVar6 + uVar15 * 0x18), *puVar1 != uVar17))
            goto LAB_18004b590;
            puVar1[2] = uVar13;
          }
          puVar6 = (ulonglong *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
          if (puVar6 != (ulonglong *)0x0) goto LAB_18004b6c4;
        }
        uVar13 = 0;
      }
      else {
        uVar10 = *param_3;
        uVar11 = 0;
        uVar9 = uVar2;
        do {
          uVar3 = uVar9 + uVar11 >> 1;
          uVar13 = (ulonglong)uVar3;
          uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar13 * 0x18);
          if (uVar15 <= uVar10) {
            if (uVar10 <= uVar15) break;
            uVar11 = uVar3 + 1;
            uVar13 = (ulonglong)(uVar3 + 1);
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (uVar9 != uVar11);
        if ((((uint)uVar13 == uVar2) ||
            (puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar13 * 0x18),
            *puVar6 != (ulonglong)uVar10)) || (puVar6 = puVar6 + 2, puVar6 == (ulonglong *)0x0))
        goto LAB_18004b4f8;
LAB_18004b6c4:
        uVar13 = *puVar6;
      }
      *(ulonglong *)(param_1 + 0x100f8) = uVar13;
    }
    param_3 = *(uint **)(param_1 + 0x100f8);
  }
  lVar16 = *(longlong *)(param_1 + 0xf6e0);
  bVar5 = (*(uint *)(param_1 + 0x10100) & 0x7fffffff) != 0;
  if (*(char *)(lVar16 + 0x14c4) != '\0') {
    puVar7 = (undefined8 *)FUN_180101500(lVar16 + 0x12c0,0x30);
    pcVar4 = __imp_KERNEL32_dll_Sleep;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar16 + 0x14c0);
      puVar7[1] = 0x30;
      puVar7[2] = param_1;
      *(undefined4 *)(puVar7 + 3) = param_2;
      *(uint **)((longlong)puVar7 + 0x1c) = param_3;
      *(undefined8 *)((longlong)puVar7 + 0x24) = param_4;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = param_5;
      *(undefined4 *)(puVar7 + 6) = param_6;
      puVar12 = (undefined8 *)((longlong)puVar7 + 0x43U & 0xfffffffffffffff8);
      *(undefined1 *)((longlong)puVar7 + 0x34) = param_7;
      *(bool *)(puVar7 + 7) = bVar5;
      *puVar12 = 0;
      *puVar7 = FUN_18004b808;
      *(undefined8 **)(lVar16 + (ulonglong)*(uint *)(lVar16 + 0x14bc) * 0x28 + 0x1350) = puVar12;
      pcVar4 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar16 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar16 + 0x12c0) = 0;
        (*pcVar4)(*(undefined8 *)(lVar16 + 0x1340));
        return;
      }
      goto LAB_18004b7e8;
    }
    *(undefined4 *)(lVar16 + 0x12c0) = 0;
    (*pcVar4)(100);
    FUN_180101630(lVar16 + 0x12c0);
  }
  plVar8 = *(longlong **)(lVar16 + 0x14a0);
  *plVar8 = param_1;
  *(undefined4 *)(plVar8 + 1) = param_2;
  *(uint **)((longlong)plVar8 + 0xc) = param_3;
  *(undefined8 *)((longlong)plVar8 + 0x14) = param_4;
  *(undefined4 *)((longlong)plVar8 + 0x1c) = param_5;
  *(undefined4 *)(plVar8 + 4) = param_6;
  *(undefined1 *)((longlong)plVar8 + 0x24) = param_7;
  *(bool *)(plVar8 + 5) = bVar5;
  FUN_18004b808();
LAB_18004b7e8:
  *(undefined4 *)(lVar16 + 0x12c0) = 0;
  return;
}

