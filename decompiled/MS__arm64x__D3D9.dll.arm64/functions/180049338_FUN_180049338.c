/*
 * FUN_180049338 at 180049338
 * undefined FUN_180049338(void)
 * Address ranges: 180049338-180049907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049338(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,int param_7)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  
  lVar17 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar17 + 0x12c0);
  if (*(char *)(lVar17 + 0x14c4) == '\0') {
    bVar6 = false;
    puVar22 = param_3;
  }
  else {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      puVar10 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
      if (puVar10 == (undefined8 *)0x0) {
        uVar11 = FUN_180102f80(0x254);
        if (uVar11 != 0) {
          thunk_FUN_180001218(uVar11,param_3,0x254);
          uVar21 = (ulonglong)*param_3;
          uVar3 = *(uint *)(param_1 + 0xf7c8);
          uVar18 = 0;
          if (uVar3 == 0) {
LAB_180049460:
            plVar20 = (longlong *)(param_1 + 0xf7c0);
            uVar13 = *(uint *)(param_1 + 0xf7cc);
            if (uVar13 == uVar3) {
              uVar3 = 0x10;
              if (uVar13 != 0) {
                uVar3 = uVar13 << 1;
              }
              local_60 = thunk_FUN_180102f80((ulonglong)uVar3 * 0x18 + 0x7f);
              if (local_60 != 0) {
                uVar23 = local_60 + 0x7fU & 0xffffffffffffff80;
                uVar15 = 0;
                if (*(int *)(param_1 + 0xf7c8) != 0) {
                  do {
                    uVar13 = (int)uVar15 + 1;
                    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar15 * 0x18);
                    puVar16 = (undefined8 *)(uVar23 + uVar15 * 0x18);
                    uVar14 = *puVar10;
                    puVar16[1] = puVar10[1];
                    *puVar16 = uVar14;
                    puVar16[2] = puVar10[2];
                    uVar15 = (ulonglong)uVar13;
                  } while (uVar13 < *(uint *)(param_1 + 0xf7c8));
                }
                local_58 = param_1 + 0x8000;
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf7b8));
                *(ulonglong *)(param_1 + 0xf7c0) = uVar23;
                *(longlong *)(local_58 + 0x77b8) = local_60;
                *(uint *)(param_1 + 0xf7cc) = uVar3;
              }
            }
            uVar15 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
            if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
              while ((uint)uVar18 < (uint)uVar15) {
                uVar23 = (ulonglong)((uint)uVar15 - 1);
                puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar15 * 0x18);
                puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18);
                uVar14 = *puVar16;
                puVar10[1] = puVar16[1];
                *puVar10 = uVar14;
                puVar10[2] = puVar16[2];
                uVar15 = uVar23;
              }
              *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
              *(uint *)(*plVar20 + uVar18 * 0x18 + 8) = *param_3;
              *(ulonglong *)(*plVar20 + uVar18 * 0x18 + 0x10) = uVar11;
              *(ulonglong *)(*plVar20 + uVar18 * 0x18) = uVar21;
            }
          }
          else {
            uVar13 = 0;
            uVar12 = uVar3;
            do {
              uVar4 = uVar12 + uVar13 >> 1;
              uVar18 = (ulonglong)uVar4;
              uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18);
              if (uVar15 <= uVar21) {
                if (uVar21 <= uVar15) break;
                uVar13 = uVar4 + 1;
                uVar18 = (ulonglong)(uVar4 + 1);
                uVar4 = uVar12;
              }
              uVar12 = uVar4;
            } while (uVar12 != uVar13);
            if (((uint)uVar18 == uVar3) ||
               (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18),
               *puVar1 != uVar21)) goto LAB_180049460;
            puVar1[2] = uVar11;
          }
          puVar10 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
          if (puVar10 != (undefined8 *)0x0) goto LAB_1800495b0;
        }
        uVar14 = 0;
      }
      else {
LAB_1800495b0:
        uVar14 = *puVar10;
      }
      *(undefined8 *)(param_1 + 0x100f8) = uVar14;
    }
    bVar6 = true;
    puVar22 = *(uint **)(param_1 + 0x100f8);
  }
  uVar3 = param_3[3];
  iVar5 = uVar3 * param_7;
  if ((!bVar6) || (0x3eff < iVar5 + 4U)) {
    uVar14 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if ((bVar6) &&
       (uVar11 = FUN_1800f2fc8(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,iVar5,&local_78),
       uVar14 = local_78, (uVar11 & 1) != 0)) {
      FUN_180044018(param_7,param_3[3],param_5,param_6,local_78,param_3[3]);
      param_6 = param_3[3];
      param_5 = uVar14;
    }
    uVar9 = local_68;
    uVar8 = local_70;
    lVar17 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar17 + 0x14c4) != '\0') {
      puVar10 = (undefined8 *)FUN_180101500(lVar17 + 0x12c0,0x40);
      pcVar7 = __imp_KERNEL32_dll_Sleep;
      if (puVar10 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar17 + 0x14c0);
        puVar10[1] = 0x40;
        puVar10[2] = param_1;
        *(undefined4 *)(puVar10 + 3) = param_2;
        *(uint **)((longlong)puVar10 + 0x1c) = puVar22;
        *(undefined8 *)((longlong)puVar10 + 0x24) = param_4;
        *(undefined8 *)((longlong)puVar10 + 0x2c) = param_5;
        *(uint *)((longlong)puVar10 + 0x34) = param_6;
        *(int *)(puVar10 + 7) = param_7;
        *(undefined8 *)((longlong)puVar10 + 0x3c) = uVar14;
        *(undefined8 *)((longlong)puVar10 + 0x44) = uVar8;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x57U & 0xfffffffffffffff8);
        *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar9;
        *puVar16 = 0;
        *puVar10 = FUN_180049928;
        *(undefined8 **)(lVar17 + (ulonglong)*(uint *)(lVar17 + 0x14bc) * 0x28 + 0x1350) = puVar16;
        if (*(char *)(lVar17 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar17 + 0x12c0) = 0;
          uVar14 = *(undefined8 *)(lVar17 + 0x1340);
          goto LAB_180049888;
        }
        goto LAB_1800498e8;
      }
      *(undefined4 *)(lVar17 + 0x12c0) = 0;
      (*pcVar7)(100);
      FUN_180101630(lVar17 + 0x12c0);
    }
    plVar20 = *(longlong **)(lVar17 + 0x14a0);
    *plVar20 = param_1;
    *(undefined4 *)(plVar20 + 1) = param_2;
    *(uint **)((longlong)plVar20 + 0xc) = puVar22;
    *(undefined8 *)((longlong)plVar20 + 0x14) = param_4;
    *(undefined8 *)((longlong)plVar20 + 0x1c) = param_5;
    *(uint *)((longlong)plVar20 + 0x24) = param_6;
    *(int *)(plVar20 + 5) = param_7;
    *(undefined8 *)((longlong)plVar20 + 0x2c) = uVar14;
    *(undefined8 *)((longlong)plVar20 + 0x34) = uVar8;
    *(undefined4 *)((longlong)plVar20 + 0x3c) = uVar9;
    FUN_180049928();
LAB_1800498e8:
    *(undefined4 *)(lVar17 + 0x12c0) = 0;
    return;
  }
  lVar17 = *(longlong *)(param_1 + 0xf6e0);
  if (*(char *)(lVar17 + 0x14c4) != '\0') {
    if (iVar5 == -4) {
      uVar13 = 0x28;
    }
    else {
      uVar13 = (iVar5 + 0xbU & 0xfffffff8) + 0x30;
    }
    puVar10 = (undefined8 *)FUN_180101500(lVar17 + 0x12c0,(ulonglong)uVar13);
    pcVar7 = __imp_KERNEL32_dll_Sleep;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar17 + 0x14c0);
      puVar10[1] = (ulonglong)uVar13;
      lVar2 = 2;
      if (iVar5 != -4) {
        lVar2 = 3;
      }
      plVar20 = puVar10 + lVar2;
      *plVar20 = param_1;
      *(undefined4 *)(plVar20 + 1) = param_2;
      *(uint **)((longlong)plVar20 + 0xc) = puVar22;
      *(undefined8 *)((longlong)plVar20 + 0x14) = param_4;
      puVar16 = (undefined8 *)((longlong)plVar20 + 0x2bU & 0xfffffffffffffff8);
      *(uint *)((longlong)plVar20 + 0x1c) = uVar3;
      *(int *)(plVar20 + 4) = param_7;
      if (iVar5 != -4) {
        puVar10[2] = puVar16;
        FUN_180044018(param_7,param_3[3],param_5,param_6,puVar16,param_3[3]);
        puVar16 = (undefined8 *)(((ulonglong)(iVar5 + 0xb) & 0xfffffff8) + (longlong)puVar16);
      }
      *puVar16 = 0;
      *puVar10 = FUN_180049908;
      *(undefined8 **)(lVar17 + (ulonglong)*(uint *)(lVar17 + 0x14bc) * 0x28 + 0x1350) = puVar16;
      if (*(char *)(lVar17 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar17 + 0x12c0) = 0;
        uVar14 = *(undefined8 *)(lVar17 + 0x1340);
LAB_180049888:
        (*__imp_KERNEL32_dll_SetEvent)(uVar14);
        return;
      }
      goto LAB_180049770;
    }
    *(undefined4 *)(lVar17 + 0x12c0) = 0;
    (*pcVar7)(100);
    FUN_180101630(lVar17 + 0x12c0);
  }
  plVar19 = *(longlong **)(lVar17 + 0x14a0);
  plVar20 = plVar19 + (iVar5 != -4);
  *plVar20 = param_1;
  *(undefined4 *)(plVar20 + 1) = param_2;
  *(uint **)((longlong)plVar20 + 0xc) = puVar22;
  *(undefined8 *)((longlong)plVar20 + 0x14) = param_4;
  *(uint *)((longlong)plVar20 + 0x1c) = uVar3;
  *(int *)(plVar20 + 4) = param_7;
  if (iVar5 != -4) {
    lVar2 = ((ulonglong)(iVar5 != -4) << 3 | 0x24) + (longlong)plVar19;
    *plVar19 = lVar2;
    FUN_180044018(param_7,param_3[3],param_5,param_6,lVar2,param_3[3]);
  }
  FUN_180049908(plVar19);
LAB_180049770:
  *(undefined4 *)(lVar17 + 0x12c0) = 0;
  return;
}

