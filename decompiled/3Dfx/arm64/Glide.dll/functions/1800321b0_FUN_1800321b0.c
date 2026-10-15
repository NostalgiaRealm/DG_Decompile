/*
 * FUN_1800321b0 at 1800321b0
 * undefined8 __cdecl FUN_1800321b0(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 1800321b0-180032ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800321b0(longlong param_1,byte param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  bool bVar8;
  uint uVar10;
  int iVar12;
  bool bVar9;
  int iVar11;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong in_x6;
  undefined8 in_x7;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong extraout_x8;
  longlong extraout_x8_00;
  int extraout_w9;
  longlong lVar19;
  SIZE_T SVar20;
  undefined8 uVar21;
  longlong extraout_x11;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  undefined1 auVar26 [16];
  longlong local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint uStack_88;
  uint local_84;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x48)) {
    return 0;
  }
  lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0);
  uVar21 = *(undefined8 *)(*(longlong *)(lVar18 + 0x1508) + 0xb78);
  lVar19 = *(longlong *)(param_1 + 0x90);
  *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(*(longlong *)(lVar18 + 0x1500) + 0x18);
  *(undefined8 *)(lVar19 + 0x20) = uVar21;
  lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0);
  uVar21 = *(undefined8 *)(*(longlong *)(lVar18 + 0x1508) + 0xb78);
  lVar19 = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(*(longlong *)(lVar18 + 0x1500) + 0x18);
  *(undefined8 *)(lVar19 + 0x20) = uVar21;
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x34) = 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
  }
  bVar8 = FUN_18001a440(*(longlong *)(param_1 + 0x60));
  lVar18 = *(longlong *)(param_1 + 0x98);
  lVar22 = *(longlong *)(param_1 + 0x60);
  local_60 = *(longlong *)(param_1 + 0x20);
  lVar19 = *(longlong *)(param_1 + 0x28);
  local_90 = *(longlong *)(param_1 + 0x48);
  local_b0 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  uStack_a8 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x30);
  uStack_a4 = 0x3c;
  FUN_18004c978(*(longlong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),0,1,(longlong)&local_b0);
  if (lVar18 != 0) {
    local_b0 = *(longlong *)(lVar18 + 0x80);
    uStack_a8 = *(undefined4 *)(lVar18 + 0x30);
    uStack_a4 = 0x2a;
    FUN_18004ca58(*(longlong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),&local_b0);
  }
  lVar22 = *(longlong *)(param_1 + 0x60);
  local_80 = *(undefined8 **)(lVar22 + 0x3210);
  uVar23 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508) + 0xb78);
  local_78 = *(undefined8 **)(lVar22 + 0x3218);
  FUN_18004c2d8(*(longlong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),2,&local_80);
  FUN_180046ef8(*(longlong *)(*(longlong *)(lVar22 + 0x31b0) + 0x1b500),
                *(ulonglong *)(lVar22 + 0x3210),
                *(ulonglong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1500),
                *(ulonglong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),uVar23);
  FUN_180046ef8(*(longlong *)(*(longlong *)(lVar22 + 0x31b0) + 0x1b500),
                *(ulonglong *)(lVar22 + 0x3218),
                *(ulonglong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1500),
                *(ulonglong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),uVar23);
  plVar13 = (longlong *)
            (**(code **)(**(longlong **)(lVar22 + 0x3210) + 0x50))
                      (*(longlong **)(lVar22 + 0x3210),&local_b0);
  FUN_18004c6d0(*(longlong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),7,*plVar13);
  lVar18 = (**(code **)(**(longlong **)(lVar22 + 0x3200) + 0x58))();
  FUN_18004c738(*(longlong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),6,lVar18);
  uVar21 = FUN_18004bee8(*(ulonglong *)(*(longlong *)(lVar22 + 0x31c0) + 0x1508),
                         *(ulonglong *)(lVar22 + 0x3200),0,1,0x80);
  iVar11 = 0;
  if (0 < *(int *)(*(longlong *)(lVar22 + 8) + 0x33)) {
    local_b0 = lVar19;
    do {
      if (*(char *)(lVar22 + 0x3176 + (longlong)iVar11) != '\0') {
        lVar18 = *(longlong *)(lVar22 + 0xcd10 + (longlong)iVar11 * 8);
        lVar19 = *(longlong *)(*(longlong *)(lVar18 + 0x3028) + 0x31c0);
        if ((*(char *)(lVar18 + 0x3020) != '\0') &&
           (bVar9 = FUN_18004e188(*(ulonglong *)(lVar19 + 0x1508),*(ulonglong *)(lVar18 + 0x3038),
                                  (longlong *)(lVar19 + 0x16d0),*(int *)(lVar18 + 0x3030) << 2,
                                  *(int *)(lVar18 + 0x3030) * 5,(undefined8 *)(lVar18 + 0x20)),
           bVar9)) {
          if (*(int *)(lVar19 + 4) == 0x10de) {
            FUN_18004bee8(*(ulonglong *)(lVar19 + 0x1508),*(ulonglong *)(lVar18 + 0x3038),0,1,0);
          }
          *(undefined1 *)(lVar18 + 0x3020) = 0;
        }
        if ((*(char *)(lVar18 + 0x3021) != '\0') &&
           (bVar9 = FUN_18004e188(*(ulonglong *)(lVar19 + 0x1508),*(ulonglong *)(lVar18 + 0x3038),
                                  (longlong *)(lVar19 + 0x16d0),*(int *)(lVar18 + 0x3030) << 1,
                                  *(int *)(lVar18 + 0x3030) * 3,(undefined8 *)(lVar18 + 0x1020)),
           bVar9)) {
          if (*(int *)(lVar19 + 4) == 0x10de) {
            FUN_18004bee8(*(ulonglong *)(lVar19 + 0x1508),*(ulonglong *)(lVar18 + 0x3038),0,1,0);
          }
          *(undefined1 *)(lVar18 + 0x3021) = 0;
        }
        if ((*(char *)(lVar18 + 0x3022) != '\0') &&
           (bVar9 = FUN_18004e188(*(ulonglong *)(lVar19 + 0x1508),*(ulonglong *)(lVar18 + 0x3038),
                                  (longlong *)(lVar19 + 0x16d0),*(int *)(lVar18 + 0x3030) * 3,
                                  *(int *)(lVar18 + 0x3030) << 2,(undefined8 *)(lVar18 + 0x2020)),
           bVar9)) {
          if (*(int *)(lVar19 + 4) == 0x10de) {
            FUN_18004bee8(*(ulonglong *)(lVar19 + 0x1508),*(ulonglong *)(lVar18 + 0x3038),0,1,0);
          }
          *(undefined1 *)(lVar18 + 0x3022) = 0;
        }
        *(undefined1 *)(lVar22 + 0x3176 + (longlong)iVar11) = 0;
      }
      uVar21 = FUN_180039b08(*(undefined8 **)(lVar22 + 0xcd10 + (longlong)iVar11 * 8));
      iVar11 = iVar11 + 1;
      lVar19 = local_b0;
    } while (iVar11 < *(int *)(*(longlong *)(lVar22 + 8) + 0x33));
  }
  lVar18 = *(longlong *)(param_1 + 0x60);
  if (((*(char *)(lVar18 + 0x3170) == '\0') && (*(char *)(param_1 + 0x38) == '\0')) &&
     (plVar13 = *(longlong **)(param_1 + 0xa0), plVar13 != (longlong *)0x0)) goto LAB_1800327c0;
  plVar13 = (longlong *)0x0;
  if (*(char *)(param_1 + 0xac) != '\0') {
    uVar2 = *(uint *)(lVar18 + 0x32d0);
    FUN_18003ba70(uVar21,&local_b0,lVar18 + 0x2bf0,uVar2);
    uVar10 = FUN_180033c60((longlong *)(param_1 + 200),(uint *)&local_b0);
    if (uVar10 < *(uint *)(param_1 + 0xe8)) {
      uVar23 = 0;
      uVar24 = 0;
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar10 * 8);
      uVar5 = *(uint *)(plVar13 + 1);
      if (uVar5 != 0) {
        lVar22 = *plVar13;
        do {
          lVar16 = *(longlong *)(lVar22 + uVar23 * 8);
          iVar11 = FUN_180061160((byte *)(lVar16 + 8),(byte *)&local_b0,0x20);
          if (iVar11 == 0) {
            plVar13 = *(longlong **)(lVar16 + 0x28);
            goto LAB_180032798;
          }
          uVar24 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar24;
        } while (uVar24 < uVar5);
      }
      plVar13 = (longlong *)0x0;
      if (uVar24 == uVar5) goto LAB_18003266c;
    }
    else {
      puVar14 = (undefined8 *)FUN_1800609d8(0x10);
      if (puVar14 == (undefined8 *)0x0) {
LAB_180032608:
        bVar9 = false;
      }
      else {
        *puVar14 = 0;
        puVar14[1] = 0;
        iVar11 = *(int *)(param_1 + 0xec);
        if (*(int *)(param_1 + 0xe8) == iVar11) {
          uVar24 = iVar11 << 1;
          if (iVar11 == 0) {
            uVar24 = 0x10;
          }
          SVar20 = CONCAT44(0,uVar24) << 3;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = CONCAT44(0,uVar24);
          if (SUB168(auVar26 * ZEXT816(8),8) != 0) {
            SVar20 = 0xffffffffffffffff;
          }
          puVar15 = (undefined8 *)thunk_FUN_1800609d8(SVar20);
          if (puVar15 == (undefined8 *)0x0) goto LAB_180032608;
          thunk_FUN_180001218(puVar15,*(undefined8 **)(param_1 + 0xe0),
                              (ulonglong)*(uint *)(param_1 + 0xec) << 3);
          thunk_FUN_180060a18(*(LPVOID *)(param_1 + 0xe0));
          *(undefined8 **)(param_1 + 0xe0) = puVar15;
          *(uint *)(param_1 + 0xec) = uVar24;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xe8) * 8) =
             puVar14;
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
        bVar9 = true;
      }
      plVar13 = (longlong *)0x0;
      if (bVar9) {
LAB_18003266c:
        lVar22 = *(longlong *)(param_1 + 0xb0);
        puVar1 = *(uint **)(param_1 + 0xb8);
        local_70 = 0x100;
        local_68 = 1;
        auVar26 = thunk_FUN_1800609d8(0x100);
        local_80 = auVar26._0_8_;
        plVar25 = (longlong *)0x0;
        local_78 = local_80;
        uVar23 = FUN_180042830(lVar18 + 0x2bf0,auVar26._8_8_,uVar2,lVar22,(ulonglong)*puVar1,
                               (longlong *)&local_80,in_x6,in_x7);
        puVar14 = local_80;
        if ((uVar23 & 1) != 0) {
          plVar25 = FUN_1800563d8(uVar23,(longlong)local_78 - (longlong)local_80,local_80);
        }
        thunk_FUN_180060a18(puVar14);
        plVar13 = (longlong *)0x0;
        if (plVar25 != (longlong *)0x0) {
          puVar14 = (undefined8 *)FUN_1800609d8(0x30);
          if (puVar14 == (undefined8 *)0x0) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            puVar14[5] = 0;
            puVar14[2] = CONCAT44(uStack_a4,uStack_a8);
            puVar14[1] = local_b0;
            puVar14[4] = uStack_98;
            puVar14[3] = uStack_a0;
            *puVar14 = &PTR_FUN_180065a18;
          }
          plVar13 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar10 * 8);
          iVar11 = *(int *)((longlong)plVar13 + 0xc);
          if ((int)plVar13[1] == iVar11) {
            uVar2 = iVar11 << 1;
            if (iVar11 == 0) {
              uVar2 = 0x10;
            }
            SVar20 = CONCAT44(0,uVar2) << 3;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = CONCAT44(0,uVar2);
            if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
              SVar20 = 0xffffffffffffffff;
            }
            puVar15 = (undefined8 *)thunk_FUN_1800609d8(SVar20);
            if (puVar15 == (undefined8 *)0x0) {
              plVar13 = (longlong *)0x0;
              goto LAB_180032798;
            }
            thunk_FUN_180001218(puVar15,(undefined8 *)*plVar13,
                                (ulonglong)*(uint *)((longlong)plVar13 + 0xc) << 3);
            thunk_FUN_180060a18((LPVOID)*plVar13);
            *plVar13 = (longlong)puVar15;
            *(uint *)((longlong)plVar13 + 0xc) = uVar2;
          }
          *(undefined8 **)(*plVar13 + (ulonglong)*(uint *)(plVar13 + 1) * 8) = puVar14;
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          puVar14[5] = plVar25;
          plVar13 = plVar25;
        }
      }
    }
  }
LAB_180032798:
  lVar18 = *(longlong *)(param_1 + 0x60);
  *(longlong **)(param_1 + 0xa0) = plVar13;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = *(longlong **)
               (param_1 + (longlong)
                          *(int *)(&DAT_180062e58 + (ulonglong)*(uint *)(lVar18 + 0x32d0) * 4) * 8 +
               0x68);
  }
LAB_1800327c0:
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  iVar11 = *(int *)(param_1 + 0x54);
  *(undefined8 *)(lVar18 + 0x3280) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(lVar18 + 0x3230) = uVar21;
  *(longlong **)(lVar18 + 0x3238) = plVar13;
  *(undefined4 *)(lVar18 + 0x328c) = *(undefined4 *)(&DAT_180064bf8 + (longlong)iVar11 * 4);
  *(undefined1 *)(lVar18 + 0x32da) = 1;
  FUN_18004c4c8(*(longlong *)(*(longlong *)(lVar18 + 0x31c0) + 0x1508),iVar11);
  iVar11 = 0;
  lVar18 = lVar19 - local_60;
  lVar19 = local_90 - lVar19;
  do {
    uVar23 = FUN_1800254f8(*(longlong *)(param_1 + 0x60),iVar11);
    FUN_18001ab78(*(longlong *)(param_1 + 0x60),bVar8);
    FUN_18001a4c0(*(longlong *)(param_1 + 0x60));
    bVar9 = FUN_18001a780(*(longlong *)(param_1 + 0x60),bVar8,1);
    lVar22 = *(longlong *)(param_1 + 0x60);
    if ((*(char *)(lVar22 + 0x3171) != '\0') || (bVar8)) {
      uVar21 = FUN_180023af0((ulonglong)bVar9,*(int *)(lVar22 + 0x2984));
      iVar12 = (int)uVar21;
      if (iVar12 != -1) {
        if (*(char *)(lVar22 + 0x32d9) == '\0') {
          lVar16 = extraout_x11 + (longlong)iVar12 * 0x170;
          local_60 = 0;
          plVar13 = &local_60;
          local_58 = *(undefined4 *)(lVar16 + 0x3658);
          uStack_54 = *(undefined4 *)(lVar16 + 0x365c);
        }
        else {
          iVar17 = *(int *)(extraout_x11 + 0x29b0);
          iVar4 = *(int *)(extraout_x11 + 0x29a8);
          if (*(int *)(extraout_x11 + 0x2bf8) == 1) {
            iVar3 = *(int *)(extraout_x11 + (longlong)iVar12 * 0x170 + 0x3654);
            iVar4 = iVar3 - iVar17;
            iVar17 = iVar3 - *(int *)(extraout_x11 + 0x29a8);
          }
          lVar16 = extraout_x11 + (longlong)iVar12 * 0x170;
          uVar2 = *(uint *)(lVar16 + 0x3650);
          if (uVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800328c4);
            (*pcVar7)();
          }
          uVar10 = 0;
          if (uVar2 != 0) {
            uVar10 = (uint)(*(int *)(extraout_x11 + 0x29a4) * *(int *)(lVar16 + 0x3658)) / uVar2;
          }
          local_90 = CONCAT44(local_90._4_4_,uVar10);
          uVar24 = *(uint *)(lVar16 + 0x3654);
          if (uVar24 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800328e0);
            (*pcVar7)();
          }
          uVar5 = 0;
          if (uVar24 != 0) {
            uVar5 = (uint)(*(int *)(lVar16 + 0x365c) * iVar4) / uVar24;
          }
          plVar13 = &local_90;
          uStack_88 = 0;
          if (uVar2 != 0) {
            uStack_88 = (uint)(*(int *)(extraout_x11 + 0x29ac) * *(int *)(lVar16 + 0x3658)) / uVar2;
          }
          local_84 = 0;
          if (uVar24 != 0) {
            local_84 = (uint)(*(int *)(lVar16 + 0x365c) * iVar17) / uVar24;
          }
          local_90 = CONCAT44(uVar5,uVar10);
        }
        FUN_18004cdf0(*(longlong *)(*(longlong *)(extraout_x11 + 0x31c0) + 0x1508),1,
                      (longlong)plVar13);
      }
      *(undefined1 *)(lVar22 + 0x3171) = 0;
    }
    FUN_18001af18(*(longlong *)(param_1 + 0x60),bVar8);
    FUN_18004d2f0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 0x1508),
                  (int)(lVar19 >> 2),1,(int)(lVar18 >> 2),0,0);
    iVar11 = iVar11 + 1;
    if ((uVar23 & 0xff) == 0) {
      uVar21 = FUN_18001afb8(*(longlong *)(param_1 + 0x60));
      uVar21 = FUN_180023af0(uVar21,*(int *)(*(longlong *)(param_1 + 8) + 0x2984));
      uVar23 = FUN_180023af0(uVar21,*(int *)(extraout_x8 + 0x2988));
      if (extraout_w9 != -1) {
        lVar18 = (**(code **)(**(longlong **)(extraout_x8_00 + 0x3180) + 0x58))
                           (*(longlong **)(extraout_x8_00 + 0x3180),extraout_w9);
        FUN_18002ab30(lVar18);
      }
      if ((((int)uVar23 != -1) &&
          (plVar13 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x3180),
          lVar18 = (**(code **)(*plVar13 + 0x58))(plVar13,uVar23 & 0xffffffff),
          *(char *)(*(longlong *)(param_1 + 8) + 0x2adc) != '\0')) &&
         (*(char *)(lVar18 + 0x48) != '\0')) {
        FUN_18002ab30(lVar18);
      }
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
      FUN_180045f40(*(longlong *)(param_1 + 0x90) + 0x40,(longlong *)&local_80,param_2 + 1,0,0);
      puVar14 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        FUN_180045f40(*(longlong *)(param_1 + 0x98) + 0x40,(longlong *)&local_80,param_3 + 1,0,0);
        if (local_78 == (undefined8 *)0x0) {
          if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
          }
        }
        else {
          *(undefined8 **)(param_1 + 0x30) = puVar14;
          *(undefined8 **)(param_1 + 0x40) = puVar14;
          *(undefined8 **)(param_1 + 0x48) = local_78;
          if ((param_2 & 1) == 0) {
            *(ulonglong *)(param_1 + 0x40) =
                 (longlong)puVar14 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x14)) * 0x3c;
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = 0x4000;
            *(undefined4 *)(param_1 + 0x50) = 0;
          }
          *(undefined8 **)(param_1 + 0x20) = local_78;
          if ((param_3 & 1) == 0) {
            local_78 = (undefined8 *)
                       ((longlong)local_78 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x18)) * 4);
            *(undefined8 **)(param_1 + 0x48) = local_78;
          }
          else {
            *(undefined4 *)(param_1 + 0x18) = 0x4000;
          }
          *(undefined8 **)(param_1 + 0x28) = local_78;
        }
      }
      return 1;
    }
  } while( true );
}

