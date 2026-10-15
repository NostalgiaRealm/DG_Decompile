/*
 * FUN_180025b18 at 180025b18
 * undefined8 __cdecl FUN_180025b18(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180025b18-18002663b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180025b18(longlong param_1,byte param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  uint uVar9;
  uint uVar11;
  bool bVar8;
  int iVar10;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong in_x6;
  undefined8 in_x7;
  uint uVar15;
  int iVar16;
  SIZE_T SVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  longlong local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint local_90;
  longlong local_88;
  undefined8 local_80;
  uint uStack_78;
  uint local_74;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  local_90 = (uint)param_2;
  if (*(longlong *)(param_1 + 0x248) == *(longlong *)(param_1 + 0x268)) {
    return 0;
  }
  lVar22 = *(longlong *)(param_1 + 0x280);
  iVar10 = 0;
  if (0 < *(int *)(*(longlong *)(lVar22 + 8) + 0x33)) {
    local_88 = lVar22 + 0x32f9;
    do {
      if (*(char *)(local_88 + iVar10) != '\0') {
        lVar18 = (longlong)iVar10 * 0x1a0;
        uVar9 = *(uint *)(lVar22 + 0x2dbc + lVar18);
        uVar23 = (ulonglong)uVar9;
        uVar21 = *(uint *)(lVar22 + 0x2e10 + ((longlong)iVar10 * 0xd + uVar23) * 0x20);
        uVar11 = uVar21;
        if (uVar9 <= *(uint *)(lVar22 + 0x2db8 + lVar18)) {
          lVar18 = lVar22 + lVar18;
          do {
            lVar26 = uVar23 * 0x20;
            if (*(uint *)(lVar18 + 0x2e10 + lVar26) == uVar11) {
              uVar11 = (int)(*(float *)(lVar18 + 0x2e20 + lVar26) *
                            *(float *)(lVar18 + 0x2e1c + lVar26)) + uVar11;
            }
            else {
              plVar25 = *(longlong **)(lVar22 + 0x3300);
              uVar9 = 3;
              do {
                lVar12 = (**(code **)(*plVar25 + 0x58))(plVar25,uVar9);
                uVar2 = *(uint *)(lVar12 + 0x18);
                if ((uVar21 < uVar2 && uVar11 <= uVar2) ||
                   (uVar15 = *(uint *)(lVar12 + 0x1c), uVar15 <= uVar21 && uVar15 < uVar11)) {
                  uVar15 = *(uint *)(lVar12 + 0x1c);
                  bVar7 = true;
                }
                else {
                  bVar7 = false;
                }
                if ((((uVar15 != uVar2 && !bVar7) && (*(int *)(lVar12 + 0x74) == 0)) &&
                    (*(int *)(lVar12 + 0x78) == 0)) && ((*(byte *)(lVar12 + 0x4a) >> 1 & 1) != 0)) {
                  (**(code **)(*plVar25 + 0x40))(plVar25,uVar9,1,0);
                  FUN_18002df68((longlong *)plVar25[1],uVar9);
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < 7);
              uVar21 = *(uint *)(lVar18 + 0x2e10 + lVar26);
              uVar11 = uVar21;
            }
            uVar9 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar9;
          } while (uVar9 <= *(uint *)(lVar18 + 0x2db8));
        }
        FUN_1800170a0(*(longlong **)(lVar22 + 0x3300),uVar21,uVar11,0,0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(*(longlong *)(lVar22 + 8) + 0x33));
  }
  FUN_1800176c0(*(longlong **)(param_1 + 0x280),-1);
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340);
  uVar19 = *(undefined8 *)(*(longlong *)(lVar22 + 0x1508) + 0xb78);
  lVar18 = *(longlong *)(param_1 + 0x2c0);
  *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(*(longlong *)(lVar22 + 0x1500) + 0x18);
  *(undefined8 *)(lVar18 + 0x20) = uVar19;
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340);
  uVar19 = *(undefined8 *)(*(longlong *)(lVar22 + 0x1508) + 0xb78);
  lVar18 = *(longlong *)(param_1 + 0x2c8);
  *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(*(longlong *)(lVar22 + 0x1500) + 0x18);
  *(undefined8 *)(lVar18 + 0x20) = uVar19;
  if (*(int *)(*(longlong *)(param_1 + 0x2c8) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x34) = 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x34) = 0;
  }
  bVar7 = FUN_18000db68(*(longlong *)(param_1 + 0x280));
  local_80 = *(longlong *)(param_1 + 0x240);
  lVar22 = *(longlong *)(param_1 + 0x248);
  lVar18 = *(longlong *)(param_1 + 0x2c8);
  lVar12 = *(longlong *)(param_1 + 0x280);
  lVar26 = *(longlong *)(param_1 + 0x268);
  local_b0 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x80);
  uStack_a8 = *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x30);
  uStack_a4 = 0x50;
  FUN_18004f6b8(*(longlong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),0,1,(longlong)&local_b0);
  if (lVar18 != 0) {
    local_b0 = *(longlong *)(lVar18 + 0x80);
    uStack_a8 = *(undefined4 *)(lVar18 + 0x30);
    uStack_a4 = 0x2a;
    FUN_18004f798(*(longlong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),&local_b0);
  }
  lVar12 = *(longlong *)(param_1 + 0x280);
  local_70 = *(undefined8 **)(lVar12 + 0x3390);
  uVar23 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508) + 0xb78);
  local_68 = *(undefined8 **)(lVar12 + 0x3398);
  FUN_18004f018(*(longlong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),2,&local_70);
  FUN_180049c38(*(longlong *)(*(longlong *)(lVar12 + 0x3330) + 0x1b500),
                *(ulonglong *)(lVar12 + 0x3390),
                *(ulonglong *)(*(longlong *)(lVar12 + 0x3340) + 0x1500),
                *(ulonglong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),uVar23);
  FUN_180049c38(*(longlong *)(*(longlong *)(lVar12 + 0x3330) + 0x1b500),
                *(ulonglong *)(lVar12 + 0x3398),
                *(ulonglong *)(*(longlong *)(lVar12 + 0x3340) + 0x1500),
                *(ulonglong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),uVar23);
  plVar25 = (longlong *)
            (**(code **)(**(longlong **)(lVar12 + 0x3390) + 0x50))
                      (*(longlong **)(lVar12 + 0x3390),&local_b0);
  FUN_18004f410(*(longlong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),7,*plVar25);
  lVar18 = (**(code **)(**(longlong **)(lVar12 + 0x3380) + 0x58))();
  FUN_18004f478(*(longlong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),6,lVar18);
  uVar19 = FUN_18004ec28(*(ulonglong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),
                         *(ulonglong *)(lVar12 + 0x3380),0,1,0x80);
  iVar10 = 0;
  if (0 < *(int *)(*(longlong *)(lVar12 + 8) + 0x33)) {
    local_b0 = lVar26;
    local_88 = lVar22;
    do {
      if (*(char *)(lVar12 + 0x32f6 + (longlong)iVar10) != '\0') {
        lVar22 = *(longlong *)(lVar12 + 0xd830 + (longlong)iVar10 * 8);
        lVar18 = *(longlong *)(*(longlong *)(lVar22 + 0x3028) + 0x3340);
        if ((*(char *)(lVar22 + 0x3020) != '\0') &&
           (bVar8 = FUN_180050ec8(*(ulonglong *)(lVar18 + 0x1508),*(ulonglong *)(lVar22 + 0x3038),
                                  (longlong *)(lVar18 + 0x16d0),*(int *)(lVar22 + 0x3030) << 2,
                                  *(int *)(lVar22 + 0x3030) * 5,(undefined8 *)(lVar22 + 0x20)),
           bVar8)) {
          if (*(int *)(lVar18 + 4) == 0x10de) {
            FUN_18004ec28(*(ulonglong *)(lVar18 + 0x1508),*(ulonglong *)(lVar22 + 0x3038),0,1,0);
          }
          *(undefined1 *)(lVar22 + 0x3020) = 0;
        }
        if ((*(char *)(lVar22 + 0x3021) != '\0') &&
           (bVar8 = FUN_180050ec8(*(ulonglong *)(lVar18 + 0x1508),*(ulonglong *)(lVar22 + 0x3038),
                                  (longlong *)(lVar18 + 0x16d0),*(int *)(lVar22 + 0x3030) << 1,
                                  *(int *)(lVar22 + 0x3030) * 3,(undefined8 *)(lVar22 + 0x1020)),
           bVar8)) {
          if (*(int *)(lVar18 + 4) == 0x10de) {
            FUN_18004ec28(*(ulonglong *)(lVar18 + 0x1508),*(ulonglong *)(lVar22 + 0x3038),0,1,0);
          }
          *(undefined1 *)(lVar22 + 0x3021) = 0;
        }
        if ((*(char *)(lVar22 + 0x3022) != '\0') &&
           (bVar8 = FUN_180050ec8(*(ulonglong *)(lVar18 + 0x1508),*(ulonglong *)(lVar22 + 0x3038),
                                  (longlong *)(lVar18 + 0x16d0),*(int *)(lVar22 + 0x3030) * 3,
                                  *(int *)(lVar22 + 0x3030) << 2,(undefined8 *)(lVar22 + 0x2020)),
           bVar8)) {
          if (*(int *)(lVar18 + 4) == 0x10de) {
            FUN_18004ec28(*(ulonglong *)(lVar18 + 0x1508),*(ulonglong *)(lVar22 + 0x3038),0,1,0);
          }
          *(undefined1 *)(lVar22 + 0x3022) = 0;
        }
        *(undefined1 *)(lVar12 + 0x32f6 + (longlong)iVar10) = 0;
      }
      uVar19 = FUN_18002df08(*(undefined8 **)(lVar12 + 0xd830 + (longlong)iVar10 * 8));
      iVar10 = iVar10 + 1;
      lVar22 = local_88;
      lVar26 = local_b0;
    } while (iVar10 < *(int *)(*(longlong *)(lVar12 + 8) + 0x33));
  }
  lVar18 = *(longlong *)(param_1 + 0x280);
  if (((*(char *)(lVar18 + 0x32f0) == '\0') && (*(char *)(param_1 + 600) == '\0')) &&
     (plVar25 = *(longlong **)(param_1 + 0x2d0), plVar25 != (longlong *)0x0)) goto LAB_180026300;
  plVar25 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x2dc) != '\0') {
    uVar11 = *(uint *)(lVar18 + 0x3450);
    FUN_18002f970(uVar19,&local_b0,lVar18 + 0x2c90,uVar11);
    uVar9 = FUN_1800277c8((longlong *)(param_1 + 0x2f8),(uint *)&local_b0);
    if (uVar9 < *(uint *)(param_1 + 0x318)) {
      uVar23 = 0;
      uVar21 = 0;
      plVar25 = *(longlong **)(*(longlong *)(param_1 + 0x310) + (ulonglong)uVar9 * 8);
      uVar2 = *(uint *)(plVar25 + 1);
      if (uVar2 != 0) {
        lVar12 = *plVar25;
        do {
          lVar20 = *(longlong *)(lVar12 + uVar23 * 8);
          iVar10 = FUN_180063e48((byte *)(lVar20 + 8),(byte *)&local_b0,0x20);
          if (iVar10 == 0) {
            plVar25 = *(longlong **)(lVar20 + 0x28);
            goto LAB_1800262d8;
          }
          uVar21 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar21;
        } while (uVar21 < uVar2);
      }
      plVar25 = (longlong *)0x0;
      if (uVar21 == uVar2) goto LAB_1800261a8;
    }
    else {
      puVar13 = (undefined8 *)FUN_1800636c0(0x10);
      if (puVar13 == (undefined8 *)0x0) {
LAB_180026144:
        bVar8 = false;
      }
      else {
        *puVar13 = 0;
        puVar13[1] = 0;
        iVar10 = *(int *)(param_1 + 0x31c);
        if (*(int *)(param_1 + 0x318) == iVar10) {
          uVar21 = iVar10 << 1;
          if (iVar10 == 0) {
            uVar21 = 0x10;
          }
          SVar17 = CONCAT44(0,uVar21) << 3;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = CONCAT44(0,uVar21);
          if (SUB168(auVar27 * ZEXT816(8),8) != 0) {
            SVar17 = 0xffffffffffffffff;
          }
          puVar14 = (undefined8 *)thunk_FUN_1800636c0(SVar17);
          if (puVar14 == (undefined8 *)0x0) goto LAB_180026144;
          thunk_FUN_1800010d8(puVar14,*(undefined8 **)(param_1 + 0x310),
                              (ulonglong)*(uint *)(param_1 + 0x31c) << 3);
          thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x310));
          *(undefined8 **)(param_1 + 0x310) = puVar14;
          *(uint *)(param_1 + 0x31c) = uVar21;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x310) + (ulonglong)*(uint *)(param_1 + 0x318) * 8)
             = puVar13;
        *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
        bVar8 = true;
      }
      plVar25 = (longlong *)0x0;
      if (bVar8) {
LAB_1800261a8:
        lVar12 = *(longlong *)(param_1 + 0x2e0);
        puVar1 = *(uint **)(param_1 + 0x2e8);
        local_60 = 0x100;
        local_58 = 1;
        auVar27 = thunk_FUN_1800636c0(0x100);
        local_70 = auVar27._0_8_;
        plVar24 = (longlong *)0x0;
        local_68 = local_70;
        uVar23 = FUN_180036ed8(lVar18 + 0x2c90,auVar27._8_8_,uVar11,lVar12,(ulonglong)*puVar1,
                               (longlong *)&local_70,in_x6,in_x7);
        puVar13 = local_70;
        if ((uVar23 & 1) != 0) {
          plVar24 = FUN_180058e58(uVar23,(longlong)local_68 - (longlong)local_70,local_70);
        }
        thunk_FUN_180063700(puVar13);
        plVar25 = (longlong *)0x0;
        if (plVar24 != (longlong *)0x0) {
          puVar13 = (undefined8 *)FUN_1800636c0(0x30);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)0x0;
          }
          else {
            puVar13[5] = 0;
            puVar13[2] = CONCAT44(uStack_a4,uStack_a8);
            puVar13[1] = local_b0;
            puVar13[4] = uStack_98;
            puVar13[3] = uStack_a0;
            *puVar13 = &PTR_FUN_180067848;
          }
          plVar25 = *(longlong **)(*(longlong *)(param_1 + 0x310) + (ulonglong)uVar9 * 8);
          iVar10 = *(int *)((longlong)plVar25 + 0xc);
          if ((int)plVar25[1] == iVar10) {
            uVar11 = iVar10 << 1;
            if (iVar10 == 0) {
              uVar11 = 0x10;
            }
            SVar17 = CONCAT44(0,uVar11) << 3;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = CONCAT44(0,uVar11);
            if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
              SVar17 = 0xffffffffffffffff;
            }
            puVar14 = (undefined8 *)thunk_FUN_1800636c0(SVar17);
            if (puVar14 == (undefined8 *)0x0) {
              plVar25 = (longlong *)0x0;
              goto LAB_1800262d8;
            }
            thunk_FUN_1800010d8(puVar14,(undefined8 *)*plVar25,
                                (ulonglong)*(uint *)((longlong)plVar25 + 0xc) << 3);
            thunk_FUN_180063700((LPVOID)*plVar25);
            *plVar25 = (longlong)puVar14;
            *(uint *)((longlong)plVar25 + 0xc) = uVar11;
          }
          *(undefined8 **)(*plVar25 + (ulonglong)*(uint *)(plVar25 + 1) * 8) = puVar13;
          *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
          puVar13[5] = plVar24;
          plVar25 = plVar24;
        }
      }
    }
  }
LAB_1800262d8:
  lVar18 = *(longlong *)(param_1 + 0x280);
  *(longlong **)(param_1 + 0x2d0) = plVar25;
  *(undefined1 *)(param_1 + 600) = 0;
  if (plVar25 == (longlong *)0x0) {
    plVar25 = *(longlong **)
               (param_1 + (longlong)
                          *(int *)(&DAT_180065b38 + (ulonglong)*(uint *)(lVar18 + 0x3450) * 4) * 8 +
               0x288);
  }
LAB_180026300:
  iVar10 = *(int *)(param_1 + 0x274);
  lVar12 = param_1 + (ulonglong)*(uint *)(param_1 + 0x168) * 8;
  uVar19 = *(undefined8 *)(lVar12 + 0x2a0);
  *(undefined8 *)(lVar18 + 0x3400) = *(undefined8 *)(lVar12 + 0x2b0);
  *(undefined8 *)(lVar18 + 0x33b0) = uVar19;
  *(longlong **)(lVar18 + 0x33b8) = plVar25;
  *(undefined4 *)(lVar18 + 0x340c) = *(undefined4 *)(&DAT_180066998 + (longlong)iVar10 * 4);
  *(undefined1 *)(lVar18 + 0x345a) = 1;
  FUN_18004f208(*(longlong *)(*(longlong *)(lVar18 + 0x3340) + 0x1508),iVar10);
  iVar10 = 0;
  lVar18 = lVar22 - local_80;
  do {
    uVar23 = FUN_180013b90(*(longlong *)(param_1 + 0x280),iVar10);
    FUN_18000e2a0(*(longlong *)(param_1 + 0x280),bVar7);
    FUN_18000dbe8(*(longlong *)(param_1 + 0x280));
    FUN_18000dea8(*(longlong *)(param_1 + 0x280),bVar7,1);
    lVar12 = *(longlong *)(param_1 + 0x280);
    if ((*(char *)(lVar12 + 0x32f1) != '\0') || (bVar7)) {
      uVar11 = FUN_180016f80((longlong *)(lVar12 + 0x3668),*(int *)(lVar12 + 0x29fc));
      if (uVar11 != 0xffffffff) {
        if (*(char *)(lVar12 + 0x3459) == '\0') {
          lVar20 = lVar12 + (longlong)(int)uVar11 * 0x170;
          local_b0 = 0;
          plVar25 = &local_b0;
          uStack_a8 = *(undefined4 *)(lVar20 + 0x37d8);
          uStack_a4 = *(undefined4 *)(lVar20 + 0x37dc);
        }
        else {
          iVar16 = *(int *)(lVar12 + 0x2a28);
          iVar4 = *(int *)(lVar12 + 0x2a20);
          if (*(int *)(lVar12 + 0x2c98) == 1) {
            iVar3 = *(int *)(lVar12 + (longlong)(int)uVar11 * 0x170 + 0x37d4);
            iVar4 = iVar3 - iVar16;
            iVar16 = iVar3 - *(int *)(lVar12 + 0x2a20);
          }
          lVar20 = lVar12 + (longlong)(int)uVar11 * 0x170;
          uVar11 = *(uint *)(lVar20 + 0x37d0);
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180026410);
            (*pcVar6)();
          }
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = (uint)(*(int *)(lVar12 + 0x2a1c) * *(int *)(lVar20 + 0x37d8)) / uVar11;
          }
          local_80 = CONCAT44(local_80._4_4_,uVar9);
          uVar21 = *(uint *)(lVar20 + 0x37d4);
          if (uVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18002642c);
            (*pcVar6)();
          }
          uVar2 = 0;
          if (uVar21 != 0) {
            uVar2 = (uint)(*(int *)(lVar20 + 0x37dc) * iVar4) / uVar21;
          }
          plVar25 = &local_80;
          uStack_78 = 0;
          if (uVar11 != 0) {
            uStack_78 = (uint)(*(int *)(lVar12 + 0x2a24) * *(int *)(lVar20 + 0x37d8)) / uVar11;
          }
          local_74 = 0;
          if (uVar21 != 0) {
            local_74 = (uint)(*(int *)(lVar20 + 0x37dc) * iVar16) / uVar21;
          }
          local_80 = CONCAT44(uVar2,uVar9);
        }
        FUN_18004fb30(*(longlong *)(*(longlong *)(lVar12 + 0x3340) + 0x1508),1,(longlong)plVar25);
      }
      *(undefined1 *)(lVar12 + 0x32f1) = 0;
    }
    FUN_18000e660(*(longlong *)(param_1 + 0x280),bVar7);
    FUN_180050030(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 0x1508),
                  (int)(lVar26 - lVar22 >> 2),1,(int)(lVar18 >> 2),0,0);
    iVar10 = iVar10 + 1;
    if ((uVar23 & 0xff) == 0) {
      FUN_18000e700(*(longlong *)(param_1 + 0x280));
      uVar11 = FUN_180016f80(*(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
                             *(int *)(*(longlong *)(param_1 + 0x228) + 0x29fc));
      uVar9 = FUN_180016f80(*(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
                            *(int *)(*(longlong *)(param_1 + 0x228) + 0x2a00));
      if (uVar11 != 0xffffffff) {
        plVar25 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300);
        lVar22 = (**(code **)(*plVar25 + 0x58))(plVar25,uVar11);
        FUN_18001d7d8(lVar22);
      }
      if (((uVar9 != 0xffffffff) &&
          (plVar25 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
          lVar22 = (**(code **)(*plVar25 + 0x58))(plVar25,uVar9),
          *(char *)(*(longlong *)(param_1 + 0x228) + 0x2b74) != '\0')) &&
         (*(char *)(lVar22 + 0x48) != '\0')) {
        FUN_18001d7d8(lVar22);
      }
      uVar11 = local_90;
      *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
      FUN_180048c80(*(longlong *)(param_1 + 0x2c0) + 0x40,(longlong *)&local_70,local_90 + 1,0,0);
      puVar13 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        FUN_180048c80(*(longlong *)(param_1 + 0x2c8) + 0x40,(longlong *)&local_70,param_3 + 1,0,0);
        if (local_68 == (undefined8 *)0x0) {
          if (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x34) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x34) = 0;
          }
        }
        else {
          *(undefined8 **)(param_1 + 0x250) = puVar13;
          *(undefined8 **)(param_1 + 0x260) = puVar13;
          *(undefined8 **)(param_1 + 0x268) = local_68;
          if (uVar11 == 0) {
            *(undefined8 **)(param_1 + 0x260) =
                 puVar13 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x234)) * 10;
          }
          else {
            *(undefined4 *)(param_1 + 0x234) = 0x4000;
            *(undefined4 *)(param_1 + 0x270) = 0;
          }
          *(undefined8 **)(param_1 + 0x240) = local_68;
          if (param_3 == 0) {
            local_68 = (undefined8 *)
                       ((longlong)local_68 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x238)) * 4);
            *(undefined8 **)(param_1 + 0x268) = local_68;
          }
          else {
            *(undefined4 *)(param_1 + 0x238) = 0x4000;
          }
          *(undefined8 **)(param_1 + 0x248) = local_68;
        }
      }
      return 1;
    }
  } while( true );
}

