/*
 * FUN_18004bb78 at 18004bb78
 * undefined FUN_18004bb78(void)
 * Address ranges: 18004bb78-18004c697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bb78(longlong param_1,int param_2,uint *param_3,undefined8 param_4,longlong param_5,
                  undefined4 param_6,uint param_7,int param_8,byte param_9,undefined1 param_10)

{
  uint uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  ulonglong local_88;
  uint local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  
  local_98 = (longlong *)(param_1 + 0x8000);
  uVar20 = param_7;
  if (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0') {
    if (param_2 != 6) {
      lVar19 = *(longlong *)(param_1 + 0x10060);
      if (*(int *)(lVar19 + 0x30) == 1) {
        uVar20 = 0xffffffff;
        uVar12 = *(uint *)(lVar19 + 0x2c);
        uVar10 = 1;
        if (*(char *)(lVar19 + 0x5c) != '\0') {
          uVar10 = 2;
        }
        uVar11 = param_8 << (ulonglong)uVar10;
        if (uVar11 <= uVar12) {
          uVar1 = *(int *)(lVar19 + 0x58) + uVar11;
          if (uVar12 < uVar1) {
            *(undefined4 *)(lVar19 + 0x58) = 0;
          }
          local_a8 = 0;
          uVar20 = 0xffffffff;
          iVar5 = FUN_1800361b0(lVar19 + 8,uVar12 < uVar1,1,&local_a8);
          if (iVar5 == 0) {
            thunk_FUN_180001218(local_a8 + *(uint *)(lVar19 + 0x58),
                                param_5 + (ulonglong)(param_7 << (ulonglong)uVar10),uVar11);
            lVar13 = *(longlong *)
                      (*(longlong *)(lVar19 + 0x40) + (ulonglong)*(uint *)(lVar19 + 0x54) * 0x10);
            (**(code **)(*(longlong *)(lVar13 + 0x40) + 0x28))(lVar13 + 0x40);
            uVar20 = *(uint *)(lVar19 + 0x58);
            *(uint *)(lVar19 + 0x58) = uVar11 + uVar20;
            uVar20 = uVar20 >> (ulonglong)uVar10;
          }
        }
      }
      goto LAB_18004bc94;
    }
    uVar9 = 0;
  }
  else {
LAB_18004bc94:
    uVar9 = 1;
    param_7 = uVar20;
  }
  FUN_180048e10(param_1,param_3,uVar9);
  local_9c = (uint)param_9 * 2 + 2;
  local_a0 = local_9c * param_8;
  if (((param_2 != 6) || (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) != '\0')) ||
     (lVar19 = *(longlong *)(param_1 + 0xf6e0), *(int *)(lVar19 + 0x14b0) - 0x400U < local_a0)) {
    local_78 = 0;
    local_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0xf6e0);
    local_68 = 0;
    lVar19 = 0;
    uVar9 = 0;
    uVar21 = 0;
    FUN_180101630(lVar13 + 0x12c0);
    if (*(char *)(lVar13 + 0x14c4) != '\0') {
      if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
        *(uint *)(param_1 + 0x100f0) = *param_3;
        puVar7 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
        if (puVar7 == (undefined8 *)0x0) {
          local_88 = FUN_180102f80(0x254);
          if (local_88 != 0) {
            thunk_FUN_180001218(local_88,param_3,0x254);
            local_a8 = (ulonglong)*param_3;
            uVar20 = *(uint *)(param_1 + 0xf7c8);
            uVar16 = 0;
            if (uVar20 == 0) {
LAB_18004c32c:
              local_90 = (longlong *)(param_1 + 0xf7c0);
              uVar10 = *(uint *)(param_1 + 0xf7cc);
              if (uVar10 == uVar20) {
                local_80 = 0x10;
                if (uVar10 != 0) {
                  local_80 = uVar10 << 1;
                }
                local_60 = thunk_FUN_180102f80((ulonglong)local_80 * 0x18 + 0x7f);
                if (local_60 != 0) {
                  uVar23 = local_60 + 0x7fU & 0xffffffffffffff80;
                  uVar18 = 0;
                  if (*(int *)(param_1 + 0xf7c8) != 0) {
                    do {
                      uVar20 = (int)uVar18 + 1;
                      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18);
                      puVar14 = (undefined8 *)(uVar23 + uVar18 * 0x18);
                      uVar15 = *puVar7;
                      puVar14[1] = puVar7[1];
                      *puVar14 = uVar15;
                      puVar14[2] = puVar7[2];
                      uVar18 = (ulonglong)uVar20;
                    } while (uVar20 < *(uint *)(param_1 + 0xf7c8));
                  }
                  thunk_FUN_180102fc0(local_98[0xef7]);
                  *(ulonglong *)(param_1 + 0xf7c0) = uVar23;
                  local_98[0xef7] = local_60;
                  *(uint *)(param_1 + 0xf7cc) = local_80;
                }
              }
              uVar18 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
              if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
                while ((uint)uVar16 < (uint)uVar18) {
                  uVar23 = (ulonglong)((uint)uVar18 - 1);
                  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar18 * 0x18);
                  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0xf7c0) + uVar23 * 0x18);
                  uVar15 = *puVar14;
                  puVar7[1] = puVar14[1];
                  *puVar7 = uVar15;
                  puVar7[2] = puVar14[2];
                  uVar18 = uVar23;
                }
                *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
                *(uint *)(*local_90 + uVar16 * 0x18 + 8) = *param_3;
                *(ulonglong *)(*local_90 + uVar16 * 0x18 + 0x10) = local_88;
                *(ulonglong *)(*local_90 + uVar16 * 0x18) = local_a8;
              }
            }
            else {
              uVar10 = 0;
              uVar12 = uVar20;
              do {
                uVar11 = uVar12 + uVar10 >> 1;
                uVar16 = (ulonglong)uVar11;
                uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar16 * 0x18);
                if (uVar18 <= local_a8) {
                  if (local_a8 <= uVar18) break;
                  uVar10 = uVar11 + 1;
                  uVar16 = (ulonglong)(uVar11 + 1);
                  uVar11 = uVar12;
                }
                uVar12 = uVar11;
              } while (uVar12 != uVar10);
              if (((uint)uVar16 == uVar20) ||
                 (puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar16 * 0x18),
                 *puVar6 != local_a8)) goto LAB_18004c32c;
              puVar6[2] = local_88;
            }
            puVar7 = (undefined8 *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
            if (puVar7 != (undefined8 *)0x0) goto LAB_18004c49c;
          }
          uVar15 = 0;
        }
        else {
LAB_18004c49c:
          uVar15 = *puVar7;
        }
        *(undefined8 *)(param_1 + 0x100f8) = uVar15;
      }
      uVar20 = local_a0;
      param_3 = *(uint **)(param_1 + 0x100f8);
      if (((param_3 != (uint *)0x0 && param_2 == 6) &&
          (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0')) &&
         (uVar16 = FUN_1800f2fc8(*(longlong *)(param_1 + 0xf6e0) + 0x17f0,local_a0,&local_78),
         lVar19 = local_78, uVar9 = local_70, uVar21 = local_68, (uVar16 & 1) != 0)) {
        thunk_FUN_180001218(local_78,param_5 + (ulonglong)(local_9c * param_7),uVar20);
        param_7 = 0;
        param_5 = lVar19;
        uVar9 = local_70;
        uVar21 = local_68;
      }
    }
    bVar4 = *(int *)(param_1 + 0x10100) != 0;
    lVar13 = *(longlong *)(param_1 + 0xf6e0);
    if (*(char *)(lVar13 + 0x14c4) != '\0') {
      puVar7 = (undefined8 *)FUN_180101500(lVar13 + 0x12c0,0x50);
      pcVar3 = __imp_KERNEL32_dll_Sleep;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar13 + 0x14c0);
        puVar7[1] = 0x50;
        puVar7[2] = param_1;
        *(int *)(puVar7 + 3) = param_2;
        *(uint **)((longlong)puVar7 + 0x1c) = param_3;
        *(undefined8 *)((longlong)puVar7 + 0x24) = param_4;
        *(longlong *)((longlong)puVar7 + 0x2c) = param_5;
        *(undefined4 *)((longlong)puVar7 + 0x34) = param_6;
        *(uint *)(puVar7 + 7) = param_7;
        *(int *)((longlong)puVar7 + 0x3c) = param_8;
        *(byte *)(puVar7 + 8) = param_9;
        *(undefined1 *)((longlong)puVar7 + 0x44) = param_10;
        *(bool *)(puVar7 + 9) = bVar4;
        *(longlong *)((longlong)puVar7 + 0x4c) = lVar19;
        *(undefined8 *)((longlong)puVar7 + 0x54) = uVar9;
        puVar14 = (undefined8 *)((longlong)puVar7 + 0x67U & 0xfffffffffffffff8);
        *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar21;
        *puVar14 = 0;
        *puVar7 = FUN_18004c738;
        *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar14;
        if (*(char *)(lVar13 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar13 + 0x12c0) = 0;
          uVar9 = *(undefined8 *)(lVar13 + 0x1340);
          goto LAB_18004c5f8;
        }
        goto LAB_18004c678;
      }
      *(undefined4 *)(lVar13 + 0x12c0) = 0;
      (*pcVar3)(100);
      FUN_180101630(lVar13 + 0x12c0);
    }
    plVar8 = *(longlong **)(lVar13 + 0x14a0);
    *plVar8 = param_1;
    *(int *)(plVar8 + 1) = param_2;
    *(uint **)((longlong)plVar8 + 0xc) = param_3;
    *(undefined8 *)((longlong)plVar8 + 0x14) = param_4;
    *(longlong *)((longlong)plVar8 + 0x1c) = param_5;
    *(undefined4 *)((longlong)plVar8 + 0x24) = param_6;
    *(uint *)(plVar8 + 5) = param_7;
    *(int *)((longlong)plVar8 + 0x2c) = param_8;
    *(byte *)(plVar8 + 6) = param_9;
    *(undefined1 *)((longlong)plVar8 + 0x34) = param_10;
    *(bool *)(plVar8 + 7) = bVar4;
    *(longlong *)((longlong)plVar8 + 0x3c) = lVar19;
    *(undefined8 *)((longlong)plVar8 + 0x44) = uVar9;
    *(undefined4 *)((longlong)plVar8 + 0x4c) = uVar21;
    FUN_18004c738();
LAB_18004c678:
    *(undefined4 *)(lVar13 + 0x12c0) = 0;
    return;
  }
  FUN_180101630(lVar19 + 0x12c0);
  if (*(char *)(lVar19 + 0x14c4) == '\0') {
    lVar19 = *(longlong *)(param_1 + 0xf6e0);
    bVar4 = *(int *)(param_1 + 0x10100) != 0;
    if (*(char *)(lVar19 + 0x14c4) != '\0') {
      puVar7 = (undefined8 *)FUN_180101500(lVar19 + 0x12c0,0x40);
      pcVar3 = __imp_KERNEL32_dll_Sleep;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar19 + 0x14c0);
        puVar7[1] = 0x40;
        puVar7[2] = param_1;
        *(undefined4 *)(puVar7 + 3) = 6;
        *(uint **)((longlong)puVar7 + 0x1c) = param_3;
        *(undefined8 *)((longlong)puVar7 + 0x24) = param_4;
        *(longlong *)((longlong)puVar7 + 0x2c) = param_5;
        *(undefined4 *)((longlong)puVar7 + 0x34) = param_6;
        *(uint *)(puVar7 + 7) = param_7;
        *(int *)((longlong)puVar7 + 0x3c) = param_8;
        *(byte *)(puVar7 + 8) = param_9;
        *(undefined1 *)((longlong)puVar7 + 0x44) = param_10;
        puVar14 = (undefined8 *)((longlong)puVar7 + 0x53U & 0xfffffffffffffff8);
        *(bool *)(puVar7 + 9) = bVar4;
        *puVar14 = 0;
        *puVar7 = FUN_18004c6e8;
        *(undefined8 **)(lVar19 + (ulonglong)*(uint *)(lVar19 + 0x14bc) * 0x28 + 0x1350) = puVar14;
        if (*(char *)(lVar19 + 0x14c5) == '\0') goto LAB_18004c214;
        *(undefined4 *)(lVar19 + 0x12c0) = 0;
        uVar9 = *(undefined8 *)(lVar19 + 0x1340);
        goto LAB_18004c5f8;
      }
      *(undefined4 *)(lVar19 + 0x12c0) = 0;
      (*pcVar3)(100);
      FUN_180101630(lVar19 + 0x12c0);
    }
    plVar8 = *(longlong **)(lVar19 + 0x14a0);
    *plVar8 = param_1;
    *(undefined4 *)(plVar8 + 1) = 6;
    *(uint **)((longlong)plVar8 + 0xc) = param_3;
    *(undefined8 *)((longlong)plVar8 + 0x14) = param_4;
    *(longlong *)((longlong)plVar8 + 0x1c) = param_5;
    *(undefined4 *)((longlong)plVar8 + 0x24) = param_6;
    *(uint *)(plVar8 + 5) = param_7;
    *(int *)((longlong)plVar8 + 0x2c) = param_8;
    *(byte *)(plVar8 + 6) = param_9;
    *(undefined1 *)((longlong)plVar8 + 0x34) = param_10;
    *(bool *)(plVar8 + 7) = bVar4;
    FUN_18004c6e8();
LAB_18004c214:
    *(undefined4 *)(lVar19 + 0x12c0) = 0;
    return;
  }
  if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
    *(uint *)(param_1 + 0x100f0) = *param_3;
    uVar20 = *(uint *)(param_1 + 0xf7c8);
    if (uVar20 == 0) {
LAB_18004bdb0:
      puVar6 = (ulonglong *)(param_1 + 0xf7c0);
      uVar16 = FUN_180102f80(0x254);
      if (uVar16 != 0) {
        thunk_FUN_180001218(uVar16,param_3,0x254);
        uVar20 = *(uint *)(param_1 + 0xf7c8);
        uVar18 = 0;
        uVar23 = (ulonglong)*param_3;
        if (uVar20 == 0) {
LAB_18004be48:
          uVar10 = *(uint *)(param_1 + 0xf7cc);
          if (uVar10 == uVar20) {
            uVar20 = 0x10;
            if (uVar10 != 0) {
              uVar20 = uVar10 << 1;
            }
            local_88 = thunk_FUN_180102f80((ulonglong)uVar20 * 0x18 + 0x7f);
            if (local_88 != 0) {
              uVar22 = local_88 + 0x7f & 0xffffffffffffff80;
              uVar17 = 0;
              if (*(int *)(param_1 + 0xf7c8) != 0) {
                do {
                  uVar10 = (int)uVar17 + 1;
                  puVar7 = (undefined8 *)(*puVar6 + uVar17 * 0x18);
                  puVar14 = (undefined8 *)(uVar22 + uVar17 * 0x18);
                  uVar9 = *puVar7;
                  puVar14[1] = puVar7[1];
                  *puVar14 = uVar9;
                  puVar14[2] = puVar7[2];
                  uVar17 = (ulonglong)uVar10;
                } while (uVar10 < *(uint *)(param_1 + 0xf7c8));
              }
              local_90 = local_98;
              thunk_FUN_180102fc0(local_98[0xef7]);
              *puVar6 = uVar22;
              local_90[0xef7] = local_88;
              *(uint *)(param_1 + 0xf7cc) = uVar20;
            }
          }
          uVar17 = (ulonglong)*(uint *)(param_1 + 0xf7c8);
          if (*(uint *)(param_1 + 0xf7cc) != *(uint *)(param_1 + 0xf7c8)) {
            while ((uint)uVar18 < (uint)uVar17) {
              uVar22 = (ulonglong)((uint)uVar17 - 1);
              puVar7 = (undefined8 *)(*puVar6 + uVar17 * 0x18);
              puVar14 = (undefined8 *)(*puVar6 + uVar22 * 0x18);
              uVar9 = *puVar14;
              puVar7[1] = puVar14[1];
              *puVar7 = uVar9;
              puVar7[2] = puVar14[2];
              uVar17 = uVar22;
            }
            *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + 1;
            *(uint *)(*puVar6 + uVar18 * 0x18 + 8) = *param_3;
            *(ulonglong *)(*puVar6 + uVar18 * 0x18 + 0x10) = uVar16;
            *(ulonglong *)(*puVar6 + uVar18 * 0x18) = uVar23;
          }
        }
        else {
          uVar10 = 0;
          uVar12 = uVar20;
          do {
            uVar11 = uVar12 + uVar10 >> 1;
            uVar18 = (ulonglong)uVar11;
            uVar17 = *(ulonglong *)(*puVar6 + uVar18 * 0x18);
            if (uVar17 <= uVar23) {
              if (uVar23 <= uVar17) break;
              uVar10 = uVar11 + 1;
              uVar18 = (ulonglong)(uVar11 + 1);
              uVar11 = uVar12;
            }
            uVar12 = uVar11;
          } while (uVar12 != uVar10);
          if (((uint)uVar18 == uVar20) ||
             (puVar2 = (ulonglong *)(*puVar6 + uVar18 * 0x18), *puVar2 != uVar23))
          goto LAB_18004be48;
          puVar2[2] = uVar16;
        }
        puVar6 = (ulonglong *)FUN_1800067f8(param_1 + 0xf7b8,param_3);
        if (puVar6 != (ulonglong *)0x0) goto LAB_18004bf84;
      }
      uVar16 = 0;
    }
    else {
      uVar12 = *param_3;
      uVar10 = 0;
      uVar11 = uVar20;
      do {
        uVar1 = uVar11 + uVar10 >> 1;
        uVar16 = (ulonglong)uVar1;
        uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar16 * 0x18);
        if (uVar18 <= uVar12) {
          if (uVar12 <= uVar18) break;
          uVar10 = uVar1 + 1;
          uVar16 = (ulonglong)(uVar1 + 1);
          uVar1 = uVar11;
        }
        uVar11 = uVar1;
      } while (uVar11 != uVar10);
      if ((((uint)uVar16 == uVar20) ||
          (puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar16 * 0x18),
          *puVar6 != (ulonglong)uVar12)) || (puVar6 = puVar6 + 2, puVar6 == (ulonglong *)0x0))
      goto LAB_18004bdb0;
LAB_18004bf84:
      uVar16 = *puVar6;
    }
    *(ulonglong *)(param_1 + 0x100f8) = uVar16;
  }
  uVar20 = local_a0;
  uVar9 = *(undefined8 *)(param_1 + 0x100f8);
  bVar4 = *(int *)(param_1 + 0x10100) != 0;
  lVar19 = *(longlong *)(param_1 + 0xf6e0);
  param_5 = param_5 + (ulonglong)(local_9c * param_7);
  if (*(char *)(lVar19 + 0x14c4) != '\0') {
    uVar10 = local_a0 + 7;
    uVar16 = (ulonglong)((uVar10 & 0xfffffff8) + 0x38);
    puVar7 = (undefined8 *)FUN_180101500(lVar19 + 0x12c0,uVar16);
    pcVar3 = __imp_KERNEL32_dll_Sleep;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar19 + 0x14c0);
      puVar7[1] = uVar16;
      puVar7[3] = param_1;
      *(undefined4 *)(puVar7 + 4) = 6;
      *(undefined8 *)((longlong)puVar7 + 0x24) = uVar9;
      *(undefined8 *)((longlong)puVar7 + 0x2c) = param_4;
      *(undefined4 *)((longlong)puVar7 + 0x34) = param_6;
      *(int *)(puVar7 + 7) = param_8;
      *(byte *)((longlong)puVar7 + 0x3c) = param_9;
      *(undefined1 *)(puVar7 + 8) = param_10;
      uVar18 = (longlong)puVar7 + 0x4fU & 0xfffffffffffffff8;
      *(bool *)((longlong)puVar7 + 0x44) = bVar4;
      puVar7[2] = uVar18;
      thunk_FUN_180001218(uVar18,param_5,uVar20);
      uVar16 = (ulonglong)uVar10 & 0xfffffff8;
      *(undefined8 *)(uVar16 + uVar18) = 0;
      *puVar7 = FUN_18004c698;
      *(ulonglong *)(lVar19 + (ulonglong)*(uint *)(lVar19 + 0x14bc) * 0x28 + 0x1350) =
           uVar16 + uVar18;
      if (*(char *)(lVar19 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar19 + 0x12c0) = 0;
        uVar9 = *(undefined8 *)(lVar19 + 0x1340);
LAB_18004c5f8:
        (*__imp_KERNEL32_dll_SetEvent)(uVar9);
        return;
      }
      goto LAB_18004c0f0;
    }
    *(undefined4 *)(lVar19 + 0x12c0) = 0;
    (*pcVar3)(100);
    FUN_180101630(lVar19 + 0x12c0);
  }
  plVar8 = *(longlong **)(lVar19 + 0x14a0);
  *plVar8 = param_5;
  plVar8[1] = param_1;
  *(undefined4 *)(plVar8 + 2) = 6;
  *(undefined8 *)((longlong)plVar8 + 0x14) = uVar9;
  *(undefined8 *)((longlong)plVar8 + 0x1c) = param_4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = param_6;
  *(int *)(plVar8 + 5) = param_8;
  *(byte *)((longlong)plVar8 + 0x2c) = param_9;
  *(undefined1 *)(plVar8 + 6) = param_10;
  *(bool *)((longlong)plVar8 + 0x34) = bVar4;
  FUN_18004c698();
LAB_18004c0f0:
  *(undefined4 *)(lVar19 + 0x12c0) = 0;
  return;
}

