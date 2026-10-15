/*
 * FUN_1801168a8 at 1801168a8
 * undefined FUN_1801168a8(void)
 * Address ranges: 1801168a8-180116d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801168a8(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong extraout_x8;
  uint uVar14;
  longlong extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  int extraout_w15;
  int iVar15;
  undefined4 uVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  lVar11 = *(longlong *)(param_1 + 8);
  if (lVar11 == 0) {
    cVar4 = '\0';
  }
  else {
    uVar6 = FUN_180117fe8();
    uVar1 = *(uint *)(param_1 + 0x50);
    iVar9 = *(int *)(param_1 + 0x60);
    iVar10 = *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x74) = iVar9;
    *(int *)(param_1 + 0x78) = iVar10;
    iVar15 = 0;
    uVar7 = uVar6;
    if ((uVar1 & 3) != 0) {
      uVar7 = FUN_18010b708(*(undefined8 *)(param_1 + 0x28),&local_70);
      if (param_2 != (undefined8 *)0x0) {
        uStack_68 = param_2[1];
        local_70 = *param_2;
      }
      if (local_70._4_4_ == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18011691c);
        (*pcVar3)();
      }
      uVar14 = 0;
      if (local_70._4_4_ != 0) {
        uVar14 = (uint)(iVar9 * (int)local_70) / local_70._4_4_;
      }
      *(uint *)(param_1 + 0x74) = uVar14;
      if (uStack_68._4_4_ == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180116934);
        (*pcVar3)();
      }
      uVar14 = 0;
      if (uStack_68._4_4_ != 0) {
        uVar14 = (uint)(iVar10 * (int)uStack_68) / uStack_68._4_4_;
      }
      *(uint *)(param_1 + 0x78) = uVar14;
      iVar15 = extraout_w15;
    }
    if (((5 < *(int *)(param_1 + 0x48) - 0x14U) && (*(int *)(param_1 + 0x48) != 0x20)) ||
       (uVar13 = 0xffffffffffffffff, *(int *)(param_1 + 0x54) == 1)) {
      uVar13 = 0;
    }
    *(undefined8 *)(lVar11 + 0xf8) = uVar13;
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    iVar9 = *(int *)(param_1 + 0x54);
    uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x68);
    uVar16 = (undefined4)uVar6;
    if (iVar9 == 3) {
      FUN_180117f68(param_1);
      iVar9 = (uint)*(ushort *)(*(longlong *)(param_1 + 8) + 0x16) *
              *(int *)(*(longlong *)(param_1 + 8) + 0x18);
      lVar11 = FUN_1802229a8((ulonglong)(iVar9 + 0x20) + 8);
      uVar7 = lVar11 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar7 - 8) = lVar11;
      *(ulonglong *)(param_1 + 0x40) = uVar7;
      FUN_180222c50(uVar7,0,iVar9);
      cVar4 = *(longlong *)(param_1 + 0x40) != 0;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) == 0) {
        if (iVar9 == 2) {
          uVar12 = 1;
        }
        else {
          uVar12 = 2;
          if (iVar9 != 1) {
            uVar12 = 0;
          }
        }
        if (iVar15 == 0) {
          (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          uVar8 = (*extraout_x11_02)(uVar13,*(undefined4 *)(param_1 + 0x60),
                                     *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70),
                                     1,uVar6 & 0xffffffff);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70) = uVar8;
        }
        else {
          uVar7 = FUN_1801081f0(uVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xea8),
                                *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xe68),
                                *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
          if (((*(char *)(DAT_18024d928 + 0x9f4) == '\0') &&
              ((uVar14 = *(uint *)(param_1 + 0x60), uVar14 == 1 || ((uVar14 - 1 & uVar14) == 0))))
             && ((uVar14 = *(uint *)(param_1 + 100), uVar14 == 1 || ((uVar14 - 1 & uVar14) == 0))))
          {
            uVar14 = 0;
          }
          else {
            uVar14 = 1;
          }
          *(uint *)(extraout_x11 + 0x100) = *(uint *)(extraout_x11 + 0x100) & 0xfffffffe | uVar14;
          if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x100) & 1) == 0) {
            *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x60);
            *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 100);
            uVar14 = *(uint *)(param_1 + 0x58);
            if (uVar14 == 0) {
              uVar14 = 1;
            }
            uVar7 = (ulonglong)uVar14;
          }
          uVar5 = (*(code *)puVar2)(0x180225000,uVar7);
          lVar11 = (*extraout_x11_00)(uVar13,*(undefined4 *)(param_1 + 0x74),
                                      *(undefined4 *)(param_1 + 0x78),
                                      *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100)
                                      ,uVar5,*(undefined4 *)(param_1 + 0x70),1,uVar16,uVar12);
          *(longlong *)(*(longlong *)(param_1 + 8) + 0x70) = lVar11;
          if ((lVar11 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_01)();
          }
        }
      }
      cVar4 = '\0';
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) != 0) {
        FUN_180117f68(param_1);
        lVar11 = *(longlong *)(param_1 + 8);
        cVar4 = '\x01';
        if (((*(uint *)(lVar11 + 0x100) >> 10 & 1) != 0) &&
           (iVar9 = *(int *)(param_1 + 0x54), iVar9 != 1)) {
          if ((iVar9 == 0) &&
             ((*(int *)(*(longlong *)(param_1 + 0x28) + 0xe68) == 1 &&
              (*(longlong *)(lVar11 + 0x28) == 0)))) {
            *(uint *)(lVar11 + 0x48) = *(uint *)(lVar11 + 0x48) | 0x10;
          }
          else {
            cVar4 = FUN_180131468();
          }
        }
        if (((((*(uint *)(param_1 + 0x50) >> 10 & 1) == 0) || (*(int *)(param_1 + 0x68) == 0)) &&
            (*(int *)(*(longlong *)(param_1 + 8) + 0x20) == 0)) &&
           (*(int *)(param_1 + 0x48) != 0x51)) {
          (*(code *)puVar2)();
          (*extraout_x11_03)(0,0,uVar13,extraout_x1,*(undefined4 *)(param_1 + 0x6c),
                             *(undefined8 *)(extraout_x8 + 0x70),0);
        }
        lVar11 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar11 + 0x60) != '\0') {
          *(undefined8 *)(lVar11 + 0x50) = 0x300000102;
          *(undefined8 *)(lVar11 + 0x58) = 0x400000102;
        }
      }
    }
    if (cVar4 != '\0') {
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      local_50 = *(int *)(param_1 + 0x58);
      local_48 = (uint)local_48._3_1_ << 0x18;
      if (local_50 == 0) {
        local_50 = 1;
      }
      lVar11 = *(longlong *)(param_1 + 8);
      local_48._0_2_ =
           CONCAT11((*(int *)(param_1 + 0x70) - 0x24U & 0xfffffffa) == 0,(uVar1 & 3) != 0);
      *(undefined8 *)(lVar11 + 0x94) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(lVar11 + 0x8c) = uVar8;
      *(ulonglong *)(lVar11 + 0x9c) = CONCAT44(uVar16,local_50);
      *(int *)(lVar11 + 0xa4) = local_48;
      uStack_4c = uVar16;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_04)(uVar13,&local_70,*(undefined4 *)(param_1 + 0x70));
      lVar11 = *(longlong *)(param_1 + 8);
      *(uint *)(lVar11 + 0xb0) = local_70._4_4_;
      *(int *)(lVar11 + 0xb4) = (int)uStack_68;
      *(uint *)(lVar11 + 0xa8) = (uint)*(byte *)(lVar11 + 0x26) << 3;
      *(int *)(lVar11 + 0xac) = (int)local_70;
      *(int *)(*(longlong *)(param_1 + 8) + 0x104) =
           *(int *)(*(longlong *)(param_1 + 8) + 0x104) + 1;
    }
  }
  return cVar4;
}

