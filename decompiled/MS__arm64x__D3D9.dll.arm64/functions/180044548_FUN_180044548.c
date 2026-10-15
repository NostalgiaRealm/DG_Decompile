/*
 * FUN_180044548 at 180044548
 * undefined FUN_180044548(void)
 * Address ranges: 180044548-180044b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044548(longlong param_1,undefined4 param_2,uint *param_3,longlong param_4,uint param_5,
                  int param_6,undefined1 param_7)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  
  lVar17 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar17 + 0x12c0);
  if (*(char *)(lVar17 + 0x14c4) == '\0') {
    bVar6 = false;
    puVar21 = param_3;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      puVar9 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
      if (puVar9 == (undefined8 *)0x0) {
        uVar10 = FUN_180102f80(0x254);
        if (uVar10 != 0) {
          thunk_FUN_180001218(uVar10,param_3,0x254);
          uVar20 = (ulonglong)*param_3;
          uVar3 = *(uint *)(param_1 + 0xf7c8);
          uVar18 = 0;
          if (uVar3 == 0) {
LAB_18004466c:
            plVar19 = (longlong *)(param_1 + 0xf7c0);
            uVar12 = *(uint *)(param_1 + 0xf7cc);
            if (uVar12 == uVar3) {
              uVar3 = 0x10;
              if (uVar12 != 0) {
                uVar3 = uVar12 << 1;
              }
              local_68 = thunk_FUN_180102f80((ulonglong)uVar3 * 0x18 + 0x7f);
              if (local_68 != 0) {
                uVar22 = local_68 + 0x7fU & 0xffffffffffffff80;
                uVar14 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar12 = (int)uVar14 + 1;
                    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar14 * 0x18);
                    puVar15 = (undefined8 *)(uVar22 + uVar14 * 0x18);
                    uVar13 = *puVar9;
                    puVar15[1] = puVar9[1];
                    *puVar15 = uVar13;
                    puVar15[2] = puVar9[2];
                    uVar14 = (ulonglong)uVar12;
                  } while (uVar12 < *(uint *)(param_1 + 0xf7c8));
                }
                local_60 = param_1 + 0x8000;
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf7b8));
                *(ulonglong *)(param_1 + 0xf7c0) = uVar22;
                *(longlong *)(local_60 + 0x77b8) = local_68;
                *(uint *)(param_1 + 0xf7cc) = uVar3;
              }
            }
            uVar14 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar18 < (uint)uVar14) {
                uVar22 = (ulonglong)((uint)uVar14 - 1);
                puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar14 * 0x18);
                puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar22 * 0x18);
                uVar13 = *puVar15;
                puVar9[1] = puVar15[1];
                *puVar9 = uVar13;
                puVar9[2] = puVar15[2];
                uVar14 = uVar22;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*plVar19 + uVar18 * 0x18 + 8) = *param_3;
              *(ulonglong *)(*plVar19 + uVar18 * 0x18 + 0x10) = uVar10;
              *(ulonglong *)(*plVar19 + uVar18 * 0x18) = uVar20;
            }
          }
          else {
            uVar12 = 0;
            uVar11 = uVar3;
            do {
              uVar4 = uVar11 + uVar12 >> 1;
              uVar18 = (ulonglong)uVar4;
              uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18);
              if (uVar14 <= uVar20) {
                if (uVar20 <= uVar14) break;
                uVar12 = uVar4 + 1;
                uVar18 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar11;
              }
              uVar11 = uVar4;
            } while (uVar11 != uVar12);
            if (((uint)uVar18 == uVar3) ||
               (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18),
               *puVar1 != uVar20)) goto LAB_18004466c;
            puVar1[2] = uVar10;
          }
          puVar9 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
          if (puVar9 != (undefined8 *)0x0) goto LAB_1800447bc;
        }
        uVar13 = 0;
      }
      else {
LAB_1800447bc:
        uVar13 = *puVar9;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar13;
    }
    bVar6 = true;
    puVar21 = *(uint **)(param_1 + 0x100f8);
  }
  uVar3 = param_3[3];
  iVar5 = uVar3 * param_6;
  if ((!bVar6) || (0x3eff < iVar5 + 4U)) {
    lVar17 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    if ((bVar6) &&
       (uVar10 = FUN_1800f2fc8(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,iVar5,&local_80),
       lVar17 = local_80, (uVar10 & 1) != 0)) {
      FUN_180044018(param_6,param_3[3],param_4,param_5,local_80,param_3[3]);
      param_5 = param_3[3];
      param_4 = lVar17;
    }
    uVar8 = local_70;
    lVar2 = local_78;
    lVar16 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar16 + 0x14c4) != '\0') {
      puVar9 = (undefined8 *)FUN_180101500(lVar16 + 0x12c0,0x40);
      pcVar7 = __imp_KERNEL32_dll_Sleep;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar16 + 0x14c0);
        puVar9[1] = 0x40;
        puVar9[2] = param_1;
        *(undefined4 *)(puVar9 + 3) = param_2;
        *(uint **)((longlong)puVar9 + 0x1c) = puVar21;
        *(longlong *)((longlong)puVar9 + 0x24) = param_4;
        *(uint *)((longlong)puVar9 + 0x2c) = param_5;
        *(int *)(puVar9 + 6) = param_6;
        *(undefined1 *)((longlong)puVar9 + 0x34) = param_7;
        puVar15 = (undefined8 *)((longlong)puVar9 + 0x53U & 0xfffffffffffffff8);
        puVar9[7] = lVar17;
        puVar9[8] = lVar2;
        *(undefined4 *)(puVar9 + 9) = uVar8;
        *puVar15 = 0;
        *puVar9 = FUN_180044ba8;
        *(undefined8 **)(lVar16 + (ulonglong)*(uint *)(lVar16 + 0x14bc) * 0x28 + 0x1350) = puVar15;
        if (*(char *)(lVar16 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar16 + 0x12c0) = 0;
          uVar13 = *(undefined8 *)(lVar16 + 0x1340);
          goto LAB_180044a9c;
        }
        goto LAB_180044afc;
      }
      *(undefined4 *)(lVar16 + 0x12c0) = 0;
      (*pcVar7)(100);
      FUN_180101630(lVar16 + 0x12c0);
    }
    plVar19 = *(longlong **)(lVar16 + 0x14a0);
    *plVar19 = param_1;
    *(undefined4 *)(plVar19 + 1) = param_2;
    *(uint **)((longlong)plVar19 + 0xc) = puVar21;
    *(longlong *)((longlong)plVar19 + 0x14) = param_4;
    *(uint *)((longlong)plVar19 + 0x1c) = param_5;
    *(int *)(plVar19 + 4) = param_6;
    *(undefined1 *)((longlong)plVar19 + 0x24) = param_7;
    plVar19[5] = lVar17;
    plVar19[6] = lVar2;
    *(undefined4 *)(plVar19 + 7) = uVar8;
    FUN_180044ba8();
LAB_180044afc:
    *(undefined4 *)(lVar16 + 0x12c0) = 0;
    return;
  }
  lVar17 = *(longlong *)(param_1 + 0xf6e0);
  if (*(char *)(lVar17 + 0x14c4) != '\0') {
    if (iVar5 == -4) {
      uVar12 = 0x20;
    }
    else {
      uVar12 = (iVar5 + 0xbU & 0xfffffff8) + 0x28;
    }
    puVar9 = (undefined8 *)FUN_180101500(lVar17 + 0x12c0,(ulonglong)uVar12);
    pcVar7 = __imp_KERNEL32_dll_Sleep;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar17 + 0x14c0);
      puVar9[1] = (ulonglong)uVar12;
      lVar2 = 2;
      if (iVar5 != -4) {
        lVar2 = 3;
      }
      plVar19 = puVar9 + lVar2;
      *plVar19 = param_1;
      *(undefined4 *)(plVar19 + 1) = param_2;
      *(uint **)((longlong)plVar19 + 0xc) = puVar21;
      *(uint *)((longlong)plVar19 + 0x14) = uVar3;
      *(int *)(plVar19 + 3) = param_6;
      *(undefined1 *)((longlong)plVar19 + 0x1c) = param_7;
      puVar15 = (undefined8 *)((lVar2 << 3 | 0x27U) + (longlong)puVar9 & 0xfffffffffffffff8);
      if (iVar5 != -4) {
        puVar9[2] = puVar15;
        FUN_180044018(param_6,param_3[3],param_4,param_5,puVar15,param_3[3]);
        puVar15 = (undefined8 *)(((ulonglong)(iVar5 + 0xb) & 0xfffffff8) + (longlong)puVar15);
      }
      *puVar15 = 0;
      *puVar9 = FUN_180044b20;
      *(undefined8 **)(lVar17 + (ulonglong)*(uint *)(lVar17 + 0x14bc) * 0x28 + 0x1350) = puVar15;
      if (*(char *)(lVar17 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar17 + 0x12c0) = 0;
        uVar13 = *(undefined8 *)(lVar17 + 0x1340);
LAB_180044a9c:
        (*__imp_KERNEL32_dll_SetEvent)(uVar13);
        return;
      }
      goto LAB_180044984;
    }
    *(undefined4 *)(lVar17 + 0x12c0) = 0;
    (*pcVar7)(100);
    FUN_180101630(lVar17 + 0x12c0);
  }
  uVar10 = (ulonglong)(iVar5 != -4);
  plVar19 = *(longlong **)(lVar17 + 0x14a0);
  uVar18 = uVar10 * 8;
  plVar19[uVar10] = param_1;
  *(undefined4 *)(plVar19 + uVar10 + 1) = param_2;
  *(uint **)((longlong)plVar19 + uVar18 + 0xc) = puVar21;
  *(uint *)((longlong)plVar19 + uVar18 + 0x14) = uVar3;
  *(int *)(plVar19 + uVar10 + 3) = param_6;
  *(undefined1 *)((longlong)plVar19 + uVar18 + 0x1c) = param_7;
  if (iVar5 != -4) {
    lVar2 = (uVar18 | 0x20) + (longlong)plVar19;
    *plVar19 = lVar2;
    FUN_180044018(param_6,param_3[3],param_4,param_5,lVar2,param_3[3]);
  }
  FUN_180044b20(plVar19);
LAB_180044984:
  *(undefined4 *)(lVar17 + 0x12c0) = 0;
  return;
}

