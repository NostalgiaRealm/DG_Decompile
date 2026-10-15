/*
 * FUN_180038058 at 180038058
 * undefined8 __cdecl FUN_180038058(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180038058-1800387cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180038058(longlong param_1,byte param_2,byte param_3)

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
  int iVar10;
  LPVOID pvVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 extraout_x1;
  ulonglong in_x6;
  undefined8 in_x7;
  longlong extraout_x8;
  longlong extraout_x8_00;
  int extraout_w9;
  SIZE_T SVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  uint local_b0 [2];
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  LPVOID local_90;
  LPVOID local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x48)) {
    return 0;
  }
  FUN_18001d850(*(longlong *)(param_1 + 0x60));
  local_98 = *(longlong *)(param_1 + 0x20);
  lVar24 = *(longlong *)(param_1 + 0x28);
  lVar30 = *(longlong *)(param_1 + 0x48);
  uVar15 = FUN_180037ff8(param_1);
  lVar27 = *(longlong *)(param_1 + 0x60);
  uVar16 = FUN_180022ca0(uVar15,*(int *)(lVar27 + 0x2984));
  iVar14 = (int)uVar16;
  uVar17 = FUN_180022ca0(uVar16,*(int *)(lVar27 + 0x2988));
  iVar10 = (int)uVar17;
  if (iVar14 == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = (**(code **)(**(longlong **)(lVar27 + 0x3180) + 0x58))
                       (*(longlong **)(lVar27 + 0x3180),uVar16 & 0xffffffff);
  }
  if (iVar10 == -1) {
    lVar19 = 0;
  }
  else {
    lVar19 = (**(code **)(**(longlong **)(lVar27 + 0x3180) + 0x58))
                       (*(longlong **)(lVar27 + 0x3180),uVar17 & 0xffffffff);
  }
  if (lVar18 != 0) {
    *(byte *)(lVar18 + 0x4a) = *(byte *)(lVar18 + 0x4a) | 2;
  }
  if (lVar19 != 0) {
    *(byte *)(lVar19 + 0x4a) = *(byte *)(lVar19 + 0x4a) | 2;
  }
  if (lVar18 == 0) {
    lVar18 = lVar19;
  }
  if (lVar18 != 0) {
    uVar28 = *(uint *)(lVar18 + 0x24);
    if ((*(float *)(lVar27 + 0x2bf0) != (float)*(uint *)(lVar18 + 0x20)) ||
       (*(float *)(lVar27 + 0x2bf4) != (float)uVar28)) {
      *(float *)(lVar27 + 0x2bf0) = (float)*(uint *)(lVar18 + 0x20);
      *(float *)(lVar27 + 0x2bf4) = (float)uVar28;
      *(undefined1 *)(lVar27 + 0x3170) = 1;
    }
  }
  lVar18 = lVar27 + (longlong)iVar14 * 0x180;
  lVar19 = lVar18 + 0x3568;
  if (iVar14 == -1) {
    lVar19 = 0;
  }
  lVar1 = lVar27 + (longlong)iVar10 * 0x180;
  lVar26 = lVar1 + 0x3568;
  if (iVar10 == -1) {
    lVar26 = 0;
  }
  if (lVar19 == 0) {
LAB_1800382e0:
    local_a8 = 0;
  }
  else {
    if (lVar26 != 0) {
      pcVar2 = (char *)(lVar1 + 0x35b0);
      if (iVar10 == -1) {
        pcVar2 = &DAT_00000048;
      }
      if (*pcVar2 == '\0') {
LAB_18003820c:
        piVar3 = (int *)(lVar1 + 0x3594);
        if (iVar10 == -1) {
          piVar3 = (int *)&DAT_0000002c;
        }
        piVar4 = (int *)(lVar18 + 0x3594);
        if (iVar14 == -1) {
          piVar4 = (int *)&DAT_0000002c;
        }
        if (*piVar4 == *piVar3) goto LAB_1800382a4;
      }
      else {
        piVar3 = (int *)(lVar1 + 0x3590);
        if (iVar10 == -1) {
          piVar3 = (int *)&DAT_00000028;
        }
        piVar4 = (int *)(lVar18 + 0x3590);
        if (iVar14 == -1) {
          piVar4 = (int *)&DAT_00000028;
        }
        if (*piVar4 == *piVar3) goto LAB_18003820c;
      }
      plVar22 = (longlong *)(lVar18 + 0x36c8);
      if (iVar14 == -1) {
        plVar22 = (longlong *)&DAT_00000160;
      }
      if (*plVar22 == 0) {
        in_x6 = lVar18 + 0x36d0;
        bVar12 = iVar14 == -1;
        if (bVar12) {
          in_x6 = 0x168;
        }
        puVar5 = (undefined4 *)(lVar18 + 0x3598);
        puVar6 = (undefined4 *)(lVar18 + 0x3594);
        puVar7 = (undefined4 *)(lVar18 + 0x3590);
        if (bVar12) {
          puVar5 = (undefined4 *)&DAT_00000030;
          puVar6 = (undefined4 *)&DAT_0000002c;
        }
        if (bVar12) {
          puVar7 = (undefined4 *)&DAT_00000028;
        }
        FUN_18003a350(lVar19,*puVar7,*puVar6,*puVar5,*(byte *)(*(longlong *)(lVar27 + 8) + 0x54),
                      plVar22,in_x6);
      }
      lVar26 = 0;
    }
LAB_1800382a4:
    pcVar2 = (char *)(lVar18 + 0x35b0);
    if (iVar14 == -1) {
      pcVar2 = &DAT_00000048;
    }
    if (*pcVar2 != '\0') goto LAB_1800382e0;
    plVar22 = (longlong *)(lVar18 + 0x3648);
    if (iVar14 == -1) {
      plVar22 = (longlong *)&DAT_000000e0;
    }
    local_a8 = *plVar22;
  }
  if (lVar26 == 0) {
    local_a0 = 0;
    if (lVar19 == 0) goto LAB_180038334;
    plVar22 = (longlong *)(lVar18 + 0x36d0);
    if (iVar14 == -1) {
      plVar22 = (longlong *)&DAT_00000168;
    }
    lVar18 = *plVar22;
  }
  else {
    if (*(char *)(lVar26 + 0x48) == '\0') {
      local_a0 = 0;
    }
    else {
      local_a0 = *(undefined8 *)(lVar26 + 0xd8);
    }
    if (*(char *)(lVar26 + 0x48) == '\0') {
LAB_180038334:
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)(lVar26 + 0x168);
    }
  }
  uVar15 = FUN_180050930(*(longlong *)(lVar27 + 0x31b0),(ulonglong)*(uint *)(lVar27 + 0x31b8),2,
                         (longlong)&local_a8,lVar18);
  lVar27 = *(longlong *)(param_1 + 0x60);
  if (((*(char *)(lVar27 + 0x3170) == '\0') && (*(char *)(param_1 + 0x38) == '\0')) &&
     (lVar18 = *(longlong *)(param_1 + 0xa0), lVar18 != 0)) goto LAB_180038630;
  lVar18 = 0;
  if (*(char *)(param_1 + 0xac) != '\0') {
    uVar28 = *(uint *)(lVar27 + 0x228);
    FUN_18003ac20(uVar15,&local_70,lVar27 + 0x2bf0,uVar28);
    uVar13 = FUN_180032e10((longlong *)(param_1 + 200),(uint *)&local_70);
    if (uVar13 < *(uint *)(param_1 + 0xe8)) {
      uVar16 = 0;
      uVar29 = 0;
      plVar22 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar13 * 8);
      uVar8 = *(uint *)(plVar22 + 1);
      if (uVar8 != 0) {
        lVar18 = *plVar22;
        local_b0[0] = uVar28;
        local_a8 = lVar27;
        do {
          lVar27 = *(longlong *)(lVar18 + uVar16 * 8);
          iVar14 = FUN_180060310((byte *)(lVar27 + 8),(byte *)&local_70,0x20);
          if (iVar14 == 0) {
            lVar18 = *(longlong *)(lVar27 + 0x28);
            goto LAB_180038608;
          }
          uVar29 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar29;
          lVar27 = local_a8;
          uVar28 = local_b0[0];
        } while (uVar29 < uVar8);
      }
      lVar18 = 0;
      if (uVar29 == uVar8) goto LAB_1800384b4;
    }
    else {
      puVar20 = (undefined8 *)FUN_18005fb88(0x10);
      if (puVar20 == (undefined8 *)0x0) {
LAB_180038448:
        bVar12 = false;
      }
      else {
        *puVar20 = 0;
        puVar20[1] = 0;
        iVar14 = *(int *)(param_1 + 0xec);
        if (*(int *)(param_1 + 0xe8) == iVar14) {
          uVar29 = iVar14 << 1;
          if (iVar14 == 0) {
            uVar29 = 0x10;
          }
          local_a8 = CONCAT44(local_a8._4_4_,uVar29);
          SVar25 = CONCAT44(0,uVar29) << 3;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = CONCAT44(0,uVar29);
          if (SUB168(auVar31 * ZEXT816(8),8) != 0) {
            SVar25 = 0xffffffffffffffff;
          }
          puVar21 = (undefined8 *)thunk_FUN_18005fb88(SVar25);
          if (puVar21 == (undefined8 *)0x0) goto LAB_180038448;
          thunk_FUN_180001218(puVar21,*(undefined8 **)(param_1 + 0xe0),
                              (ulonglong)*(uint *)(param_1 + 0xec) << 3);
          thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0xe0));
          *(undefined8 **)(param_1 + 0xe0) = puVar21;
          *(undefined4 *)(param_1 + 0xec) = (undefined4)local_a8;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xe8) * 8) =
             puVar20;
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
        bVar12 = true;
      }
      lVar18 = 0;
      if (bVar12) {
LAB_1800384b4:
        lVar18 = *(longlong *)(param_1 + 0xb0);
        puVar20 = *(undefined8 **)(param_1 + 0xb8);
        local_80 = 0x100;
        local_78 = 1;
        auVar31 = thunk_FUN_18005fb88(0x100);
        local_90 = auVar31._0_8_;
        local_88 = local_90;
        uVar16 = FUN_1800419e0(lVar27 + 0x2bf0,auVar31._8_8_,uVar28,lVar18,
                               (ulonglong)*(uint *)((longlong)puVar20 + 0x1c),(longlong *)&local_90,
                               in_x6,in_x7);
        pvVar11 = local_90;
        if ((uVar16 & 1) == 0) {
LAB_1800385fc:
          thunk_FUN_18005fbc8(pvVar11);
        }
        else {
          local_a8 = 0;
          plVar22 = (longlong *)*puVar20;
          iVar14 = (**(code **)(*plVar22 + 0x78))
                             (plVar22,local_90,(longlong)local_88 - (longlong)local_90,0,&local_a8);
          lVar27 = local_a8;
          if (iVar14 < 0) goto LAB_1800385fc;
          thunk_FUN_18005fbc8(pvVar11);
          lVar18 = 0;
          if (lVar27 == 0) goto LAB_180038608;
          puVar20 = (undefined8 *)FUN_18005fb88(0x30);
          if (puVar20 == (undefined8 *)0x0) {
            puVar20 = (undefined8 *)0x0;
          }
          else {
            puVar20[5] = 0;
            puVar20[2] = uStack_68;
            puVar20[1] = local_70;
            puVar20[4] = uStack_58;
            puVar20[3] = uStack_60;
            *puVar20 = &PTR_FUN_180064a18;
          }
          plVar22 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar13 * 8);
          iVar14 = *(int *)((longlong)plVar22 + 0xc);
          if ((int)plVar22[1] != iVar14) {
LAB_1800385d8:
            *(undefined8 **)(*plVar22 + (ulonglong)*(uint *)(plVar22 + 1) * 8) = puVar20;
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            puVar20[5] = lVar27;
            lVar18 = lVar27;
            goto LAB_180038608;
          }
          uVar28 = iVar14 << 1;
          if (iVar14 == 0) {
            uVar28 = 0x10;
          }
          SVar25 = CONCAT44(0,uVar28) << 3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = CONCAT44(0,uVar28);
          if (SUB168(auVar9 * ZEXT816(8),8) != 0) {
            SVar25 = 0xffffffffffffffff;
          }
          puVar21 = (undefined8 *)thunk_FUN_18005fb88(SVar25);
          if (puVar21 != (undefined8 *)0x0) {
            thunk_FUN_180001218(puVar21,(undefined8 *)*plVar22,
                                (ulonglong)*(uint *)((longlong)plVar22 + 0xc) << 3);
            thunk_FUN_18005fbc8((LPVOID)*plVar22);
            *plVar22 = (longlong)puVar21;
            *(uint *)((longlong)plVar22 + 0xc) = uVar28;
            goto LAB_1800385d8;
          }
        }
        lVar18 = 0;
      }
    }
  }
LAB_180038608:
  lVar27 = *(longlong *)(param_1 + 0x60);
  *(longlong *)(param_1 + 0xa0) = lVar18;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (lVar18 == 0) {
    lVar18 = *(longlong *)
              (param_1 + (longlong)
                         *(int *)(&DAT_180061f58 + (ulonglong)*(uint *)(lVar27 + 0x228) * 4) * 8 +
              0x68);
  }
LAB_180038630:
  uVar16 = *(ulonglong *)(param_1 + 0x88);
  uVar17 = (ulonglong)*(uint *)(param_1 + 0x54);
  FUN_180050828(*(longlong *)(lVar27 + 0x31b0),(ulonglong)*(uint *)(lVar27 + 0x31b8),
                *(uint *)(param_1 + 0x54),uVar16,*(longlong *)(param_1 + 0x80),lVar18);
  if (*(char *)(lVar27 + 0x3b3c) == '\0') {
    local_a8 = CONCAT44(local_a8._4_4_,0x3c);
    local_b0[0] = 0;
    FUN_180050748(*(longlong *)(*(longlong *)(lVar27 + 0x3b40) + 0x31b0),
                  *(uint *)(*(longlong *)(lVar27 + 0x3b40) + 0x31b8),0,uVar16,
                  (longlong *)(lVar27 + 0x3b70),(int *)&local_a8,(int *)local_b0);
    uVar16 = 0x2a;
    uVar17 = *(ulonglong *)(lVar27 + 0x3b78);
    FUN_1800507d0(*(longlong *)(*(longlong *)(lVar27 + 0x3b40) + 0x31b0),
                  *(uint *)(*(longlong *)(lVar27 + 0x3b40) + 0x31b8),uVar17,0x2a);
    *(undefined1 *)(lVar27 + 0x3b3c) = 1;
  }
  iVar14 = 0;
  lVar27 = lVar24 - local_98;
  do {
    uVar23 = FUN_1800246a8(*(longlong *)(param_1 + 0x60),iVar14);
    FUN_18001c030(*(longlong *)(param_1 + 0x60),extraout_x1,uVar17,uVar16);
    FUN_18001bc28(*(longlong *)(param_1 + 0x60));
    uVar16 = 0;
    uVar17 = lVar27 >> 2;
    plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
    uVar15 = (**(code **)(*plVar22 + 0x60))(plVar22,lVar30 - lVar24 >> 2);
    iVar14 = iVar14 + 1;
  } while ((uVar23 & 0xff) != 0);
  uVar15 = FUN_180022ca0(uVar15,*(int *)(*(longlong *)(param_1 + 8) + 0x2984));
  uVar16 = FUN_180022ca0(uVar15,*(int *)(extraout_x8 + 0x2988));
  if (extraout_w9 != -1) {
    lVar24 = (**(code **)(**(longlong **)(extraout_x8_00 + 0x3180) + 0x58))
                       (*(longlong **)(extraout_x8_00 + 0x3180),extraout_w9);
    FUN_180029ce0(lVar24);
  }
  if ((((int)uVar16 != -1) &&
      (plVar22 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x3180),
      lVar24 = (**(code **)(*plVar22 + 0x58))(plVar22,uVar16 & 0xffffffff),
      *(char *)(*(longlong *)(param_1 + 8) + 0x2adc) != '\0')) && (*(char *)(lVar24 + 0x48) != '\0')
     ) {
    FUN_180029ce0(lVar24);
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  FUN_180037ed8(param_1,param_2,param_3);
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0) + 0x620));
  return 1;
}

