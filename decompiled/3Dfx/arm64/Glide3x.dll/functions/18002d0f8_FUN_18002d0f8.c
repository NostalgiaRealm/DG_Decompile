/*
 * FUN_18002d0f8 at 18002d0f8
 * undefined8 __cdecl FUN_18002d0f8(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 18002d0f8-18002da1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002d0f8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  int iVar13;
  uint uVar12;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 extraout_x1;
  ulonglong in_x6;
  undefined8 in_x7;
  uint uVar20;
  SIZE_T SVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  LPVOID pvVar25;
  longlong lVar26;
  longlong *plVar27;
  ulonglong uVar28;
  LPVOID pvVar29;
  undefined1 auVar30 [16];
  longlong local_c0;
  LPVOID local_b8;
  LPVOID local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(longlong *)(param_1 + 0x248) == *(longlong *)(param_1 + 0x268)) {
    return 0;
  }
  FUN_180011b28(*(longlong *)(param_1 + 0x280));
  local_80 = *(longlong *)(param_1 + 0x240);
  iVar13 = 0;
  lVar26 = *(longlong *)(param_1 + 0x280);
  lVar22 = *(longlong *)(param_1 + 0x248);
  pvVar29 = *(LPVOID *)(param_1 + 0x268);
  if (0 < *(int *)(*(longlong *)(lVar26 + 8) + 0x33)) {
    local_90 = lVar26 + 0x32f9;
    local_c0 = CONCAT44(local_c0._4_4_,param_3);
    local_b8 = *(LPVOID *)(param_1 + 0x268);
    local_94 = param_2;
    local_88 = *(longlong *)(param_1 + 0x248);
    do {
      if (*(char *)(local_90 + iVar13) != '\0') {
        lVar22 = (longlong)iVar13 * 0x1a0;
        uVar12 = *(uint *)(lVar26 + 0x2dbc + lVar22);
        uVar28 = (ulonglong)uVar12;
        uVar24 = *(uint *)(lVar26 + 0x2e10 + ((longlong)iVar13 * 0xd + uVar28) * 0x20);
        uVar11 = uVar24;
        if (uVar12 <= *(uint *)(lVar26 + 0x2db8 + lVar22)) {
          lVar22 = lVar26 + lVar22;
          local_98 = iVar13;
          do {
            lVar15 = uVar28 * 0x20;
            if (*(uint *)(lVar22 + 0x2e10 + lVar15) == uVar11) {
              uVar11 = (int)(*(float *)(lVar22 + 0x2e1c + lVar15) *
                            *(float *)(lVar22 + 0x2e20 + lVar15)) + uVar11;
            }
            else {
              plVar27 = *(longlong **)(lVar26 + 0x3300);
              uVar12 = 3;
              do {
                lVar14 = (**(code **)(*plVar27 + 0x58))(plVar27,uVar12);
                uVar8 = *(uint *)(lVar14 + 0x18);
                if ((uVar24 < uVar8 && uVar11 <= uVar8) ||
                   (uVar20 = *(uint *)(lVar14 + 0x1c), uVar20 <= uVar24 && uVar20 < uVar11)) {
                  uVar20 = *(uint *)(lVar14 + 0x1c);
                  bVar10 = true;
                }
                else {
                  bVar10 = false;
                }
                if ((((uVar20 != uVar8 && !bVar10) && (*(int *)(lVar14 + 0x74) == 0)) &&
                    (*(int *)(lVar14 + 0x78) == 0)) && ((*(byte *)(lVar14 + 0x4a) >> 1 & 1) != 0)) {
                  (**(code **)(*plVar27 + 0x40))(plVar27,uVar12,1,0);
                  FUN_18002df68((longlong *)plVar27[1],uVar12);
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < 7);
              uVar24 = *(uint *)(lVar22 + 0x2e10 + lVar15);
              uVar11 = uVar24;
            }
            uVar12 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar12;
            iVar13 = local_98;
          } while (uVar12 <= *(uint *)(lVar22 + 0x2db8));
        }
        FUN_1800170a0(*(longlong **)(lVar26 + 0x3300),uVar24,uVar11,0,0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(*(longlong *)(lVar26 + 8) + 0x33));
    lVar22 = local_88;
    pvVar29 = local_b8;
    param_3 = (uint)local_c0;
    param_2 = local_94;
  }
  FUN_1800176c0(*(longlong **)(param_1 + 0x280),-1);
  FUN_18002d098(param_1);
  lVar26 = *(longlong *)(param_1 + 0x280);
  uVar11 = FUN_180016f80(*(longlong **)(lVar26 + 0x3300),*(int *)(lVar26 + 0x29fc));
  uVar12 = FUN_180016f80(*(longlong **)(lVar26 + 0x3300),*(int *)(lVar26 + 0x2a00));
  if (uVar11 == 0xffffffff) {
    lVar15 = 0;
  }
  else {
    lVar15 = (**(code **)(**(longlong **)(lVar26 + 0x3300) + 0x58))
                       (*(longlong **)(lVar26 + 0x3300),uVar11);
  }
  if (uVar12 == 0xffffffff) {
    lVar14 = 0;
  }
  else {
    lVar14 = (**(code **)(**(longlong **)(lVar26 + 0x3300) + 0x58))
                       (*(longlong **)(lVar26 + 0x3300),uVar12);
  }
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x4a) = *(byte *)(lVar15 + 0x4a) | 2;
  }
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x4a) = *(byte *)(lVar14 + 0x4a) | 2;
  }
  if (lVar15 == 0) {
    lVar15 = lVar14;
  }
  if (lVar15 != 0) {
    uVar24 = *(uint *)(lVar15 + 0x24);
    if ((*(float *)(lVar26 + 0x2c90) != (float)*(uint *)(lVar15 + 0x20)) ||
       (*(float *)(lVar26 + 0x2c94) != (float)uVar24)) {
      *(float *)(lVar26 + 0x2c90) = (float)*(uint *)(lVar15 + 0x20);
      *(float *)(lVar26 + 0x2c94) = (float)uVar24;
      *(undefined1 *)(lVar26 + 0x32f0) = 1;
    }
  }
  lVar15 = lVar26 + (longlong)(int)uVar11 * 0x180;
  lVar14 = lVar15 + 0x36e8;
  if (uVar11 == 0xffffffff) {
    lVar14 = 0;
  }
  lVar1 = lVar26 + (longlong)(int)uVar12 * 0x180;
  lVar23 = lVar1 + 0x36e8;
  if (uVar12 == 0xffffffff) {
    lVar23 = 0;
  }
  if (lVar14 == 0) {
LAB_18002d568:
    local_b8 = (LPVOID)0x0;
  }
  else {
    if (lVar23 != 0) {
      pcVar2 = (char *)(lVar1 + 0x3730);
      if (uVar12 == 0xffffffff) {
        pcVar2 = &DAT_00000048;
      }
      if (*pcVar2 == '\0') {
LAB_18002d494:
        piVar3 = (int *)(lVar1 + 0x3714);
        if (uVar12 == 0xffffffff) {
          piVar3 = (int *)&DAT_0000002c;
        }
        piVar4 = (int *)(lVar15 + 0x3714);
        if (uVar11 == 0xffffffff) {
          piVar4 = (int *)&DAT_0000002c;
        }
        if (*piVar4 == *piVar3) goto LAB_18002d52c;
      }
      else {
        piVar3 = (int *)(lVar1 + 0x3710);
        if (uVar12 == 0xffffffff) {
          piVar3 = (int *)&DAT_00000028;
        }
        piVar4 = (int *)(lVar15 + 0x3710);
        if (uVar11 == 0xffffffff) {
          piVar4 = (int *)&DAT_00000028;
        }
        if (*piVar4 == *piVar3) goto LAB_18002d494;
      }
      plVar27 = (longlong *)(lVar15 + 0x3848);
      if (uVar11 == 0xffffffff) {
        plVar27 = (longlong *)&DAT_00000160;
      }
      if (*plVar27 == 0) {
        puVar5 = (undefined4 *)(lVar15 + 0x3710);
        puVar6 = (undefined4 *)(lVar15 + 0x3714);
        in_x6 = lVar15 + 0x3850;
        puVar7 = (undefined4 *)(lVar15 + 0x3718);
        if (uVar11 == 0xffffffff) {
          in_x6 = 0x168;
          puVar7 = (undefined4 *)&DAT_00000030;
          puVar6 = (undefined4 *)&DAT_0000002c;
        }
        if (uVar11 == 0xffffffff) {
          puVar5 = (undefined4 *)&DAT_00000028;
        }
        FUN_18002f0a0(lVar14,*puVar5,*puVar6,*puVar7,*(byte *)(*(longlong *)(lVar26 + 8) + 0x54),
                      plVar27,in_x6);
      }
      lVar23 = 0;
    }
LAB_18002d52c:
    pcVar2 = (char *)(lVar15 + 0x3730);
    if (uVar11 == 0xffffffff) {
      pcVar2 = &DAT_00000048;
    }
    if (*pcVar2 != '\0') goto LAB_18002d568;
    plVar27 = (longlong *)(lVar15 + 0x37c8);
    if (uVar11 == 0xffffffff) {
      plVar27 = (longlong *)&DAT_000000e0;
    }
    local_b8 = (LPVOID)*plVar27;
  }
  if (lVar23 == 0) {
    local_b0 = (LPVOID)0x0;
    if (lVar14 == 0) goto LAB_18002d5bc;
    plVar27 = (longlong *)(lVar15 + 0x3850);
    if (uVar11 == 0xffffffff) {
      plVar27 = (longlong *)&DAT_00000168;
    }
    lVar15 = *plVar27;
  }
  else {
    if (*(char *)(lVar23 + 0x48) == '\0') {
      local_b0 = (LPVOID)0x0;
    }
    else {
      local_b0 = *(LPVOID *)(lVar23 + 0xd8);
    }
    if (*(char *)(lVar23 + 0x48) == '\0') {
LAB_18002d5bc:
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)(lVar23 + 0x168);
    }
  }
  uVar16 = FUN_1800544c0(*(longlong *)(lVar26 + 0x3330),(ulonglong)*(uint *)(lVar26 + 0x3338),2,
                         (longlong)&local_b8,lVar15);
  pvVar25 = *(LPVOID *)(param_1 + 0x280);
  if (((*(char *)((longlong)pvVar25 + 0x32f0) == '\0') && (*(char *)(param_1 + 600) == '\0')) &&
     (lVar26 = *(longlong *)(param_1 + 0x2d0), lVar26 != 0)) goto LAB_18002d8c8;
  lVar26 = 0;
  if (*(char *)(param_1 + 0x2dc) != '\0') {
    uVar11 = *(uint *)((longlong)pvVar25 + 0x2a0);
    FUN_18002f970(uVar16,&local_70,(longlong)pvVar25 + 0x2c90,uVar11);
    uVar12 = FUN_1800277c8((longlong *)(param_1 + 0x2f8),(uint *)&local_70);
    if (uVar12 < *(uint *)(param_1 + 0x318)) {
      uVar28 = 0;
      uVar24 = 0;
      plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x310) + (ulonglong)uVar12 * 8);
      uVar8 = *(uint *)(plVar27 + 1);
      if (uVar8 != 0) {
        lVar26 = *plVar27;
        local_c0 = CONCAT44(local_c0._4_4_,uVar11);
        local_b8 = pvVar25;
        do {
          lVar15 = *(longlong *)(lVar26 + uVar28 * 8);
          iVar13 = FUN_180063e48((byte *)(lVar15 + 8),(byte *)&local_70,0x20);
          if (iVar13 == 0) {
            lVar26 = *(longlong *)(lVar15 + 0x28);
            goto LAB_18002d8a0;
          }
          uVar24 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar24;
        } while (uVar24 < uVar8);
        pvVar25 = local_b8;
        uVar11 = (uint)local_c0;
      }
      lVar26 = 0;
      if (uVar24 == uVar8) goto LAB_18002d748;
    }
    else {
      puVar17 = (undefined8 *)FUN_1800636c0(0x10);
      if (puVar17 == (undefined8 *)0x0) {
LAB_18002d6dc:
        bVar10 = false;
      }
      else {
        *puVar17 = 0;
        puVar17[1] = 0;
        iVar13 = *(int *)(param_1 + 0x31c);
        if (*(int *)(param_1 + 0x318) == iVar13) {
          uVar24 = iVar13 << 1;
          if (iVar13 == 0) {
            uVar24 = 0x10;
          }
          local_b8 = (LPVOID)CONCAT44(local_b8._4_4_,uVar24);
          SVar21 = CONCAT44(0,uVar24) << 3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = CONCAT44(0,uVar24);
          if (SUB168(auVar30 * ZEXT816(8),8) != 0) {
            SVar21 = 0xffffffffffffffff;
          }
          puVar18 = (undefined8 *)thunk_FUN_1800636c0(SVar21);
          if (puVar18 == (undefined8 *)0x0) goto LAB_18002d6dc;
          thunk_FUN_1800010d8(puVar18,*(undefined8 **)(param_1 + 0x310),
                              (ulonglong)*(uint *)(param_1 + 0x31c) << 3);
          thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x310));
          *(undefined8 **)(param_1 + 0x310) = puVar18;
          *(undefined4 *)(param_1 + 0x31c) = local_b8._0_4_;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x310) + (ulonglong)*(uint *)(param_1 + 0x318) * 8)
             = puVar17;
        *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
        bVar10 = true;
      }
      lVar26 = 0;
      if (bVar10) {
LAB_18002d748:
        lVar26 = *(longlong *)(param_1 + 0x2e0);
        puVar17 = *(undefined8 **)(param_1 + 0x2e8);
        local_a8 = 0x100;
        local_a0 = 1;
        auVar30 = thunk_FUN_1800636c0(0x100);
        local_b8 = auVar30._0_8_;
        local_b0 = local_b8;
        uVar28 = FUN_180036ed8((longlong)pvVar25 + 0x2c90,auVar30._8_8_,uVar11,lVar26,
                               (ulonglong)*(uint *)((longlong)puVar17 + 0x1c),(longlong *)&local_b8,
                               in_x6,in_x7);
        pvVar25 = local_b8;
        if ((uVar28 & 1) == 0) {
LAB_18002d894:
          thunk_FUN_180063700(pvVar25);
        }
        else {
          local_c0 = 0;
          plVar27 = (longlong *)*puVar17;
          iVar13 = (**(code **)(*plVar27 + 0x78))
                             (plVar27,local_b8,(longlong)local_b0 - (longlong)local_b8,0,&local_c0);
          lVar15 = local_c0;
          if (iVar13 < 0) goto LAB_18002d894;
          thunk_FUN_180063700(pvVar25);
          lVar26 = 0;
          if (lVar15 == 0) goto LAB_18002d8a0;
          puVar17 = (undefined8 *)FUN_1800636c0(0x30);
          if (puVar17 == (undefined8 *)0x0) {
            puVar17 = (undefined8 *)0x0;
          }
          else {
            puVar17[5] = 0;
            puVar17[2] = uStack_68;
            puVar17[1] = local_70;
            puVar17[4] = uStack_58;
            puVar17[3] = uStack_60;
            *puVar17 = &PTR_FUN_180067848;
          }
          plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x310) + (ulonglong)uVar12 * 8);
          iVar13 = *(int *)((longlong)plVar27 + 0xc);
          if ((int)plVar27[1] != iVar13) {
LAB_18002d870:
            *(undefined8 **)(*plVar27 + (ulonglong)*(uint *)(plVar27 + 1) * 8) = puVar17;
            *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
            puVar17[5] = lVar15;
            lVar26 = lVar15;
            goto LAB_18002d8a0;
          }
          uVar11 = iVar13 << 1;
          if (iVar13 == 0) {
            uVar11 = 0x10;
          }
          SVar21 = CONCAT44(0,uVar11) << 3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = CONCAT44(0,uVar11);
          if (SUB168(auVar9 * ZEXT816(8),8) != 0) {
            SVar21 = 0xffffffffffffffff;
          }
          puVar18 = (undefined8 *)thunk_FUN_1800636c0(SVar21);
          if (puVar18 != (undefined8 *)0x0) {
            thunk_FUN_1800010d8(puVar18,(undefined8 *)*plVar27,
                                (ulonglong)*(uint *)((longlong)plVar27 + 0xc) << 3);
            thunk_FUN_180063700((LPVOID)*plVar27);
            *plVar27 = (longlong)puVar18;
            *(uint *)((longlong)plVar27 + 0xc) = uVar11;
            goto LAB_18002d870;
          }
        }
        lVar26 = 0;
      }
    }
  }
LAB_18002d8a0:
  pvVar25 = *(LPVOID *)(param_1 + 0x280);
  *(longlong *)(param_1 + 0x2d0) = lVar26;
  *(undefined1 *)(param_1 + 600) = 0;
  if (lVar26 == 0) {
    lVar26 = *(longlong *)
              (param_1 + (longlong)
                         *(int *)(&DAT_180065cd0 +
                                 (ulonglong)*(uint *)((longlong)pvVar25 + 0x2a0) * 4) * 8 + 0x288);
  }
LAB_18002d8c8:
  lVar15 = param_1 + (ulonglong)*(uint *)(param_1 + 0x168) * 8;
  uVar28 = *(ulonglong *)(lVar15 + 0x2a0);
  lVar15 = *(longlong *)(lVar15 + 0x2b0);
  FUN_180010808((longlong)pvVar25,*(int *)(param_1 + 0x274),lVar15,uVar28,lVar26);
  iVar13 = 0;
  lVar26 = lVar22 - local_80;
  do {
    uVar19 = FUN_180013b90(*(longlong *)(param_1 + 0x280),iVar13);
    FUN_1800105a8(*(longlong *)(param_1 + 0x280),extraout_x1,lVar15,uVar28);
    FUN_180010198(*(longlong *)(param_1 + 0x280));
    uVar28 = 0;
    lVar15 = lVar26 >> 2;
    plVar27 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
    (**(code **)(*plVar27 + 0x60))(plVar27,(longlong)pvVar29 - lVar22 >> 2);
    iVar13 = iVar13 + 1;
  } while ((uVar19 & 0xff) != 0);
  uVar11 = FUN_180016f80(*(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
                         *(int *)(*(longlong *)(param_1 + 0x228) + 0x29fc));
  uVar12 = FUN_180016f80(*(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
                         *(int *)(*(longlong *)(param_1 + 0x228) + 0x2a00));
  if (uVar11 != 0xffffffff) {
    plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300);
    lVar22 = (**(code **)(*plVar27 + 0x58))(plVar27,uVar11);
    FUN_18001d7d8(lVar22);
  }
  if (((uVar12 != 0xffffffff) &&
      (plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
      lVar22 = (**(code **)(*plVar27 + 0x58))(plVar27,uVar12),
      *(char *)(*(longlong *)(param_1 + 0x228) + 0x2b74) != '\0')) &&
     (*(char *)(lVar22 + 0x48) != '\0')) {
    FUN_18001d7d8(lVar22);
  }
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  FUN_18002cf78(param_1,(byte)param_2,(byte)param_3);
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330) + 0x620));
  return 1;
}

