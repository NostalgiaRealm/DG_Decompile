/*
 * FUN_18000b708 at 18000b708
 * undefined FUN_18000b708(void)
 * Address ranges: 18000b708-18000bb27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18000b708(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong extraout_x11;
  int extraout_w13;
  int iVar15;
  longlong extraout_x14;
  longlong extraout_x14_00;
  int extraout_w15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    cVar6 = '\0';
  }
  else {
    uVar8 = func_0x000180117fe8();
    uVar2 = *(uint *)(param_1 + 0x50);
    iVar7 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x74) = iVar7;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 100);
    iVar15 = 0;
    uVar9 = uVar8;
    lVar11 = extraout_x14;
    if ((uVar2 & 3) != 0) {
      uVar9 = FUN_180006038(*(undefined8 *)(param_1 + 0x28),&local_60);
      if (param_2 != (undefined8 *)0x0) {
        uStack_58 = param_2[1];
        local_60 = *param_2;
      }
      if (local_60._4_4_ == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18000b778);
        (*pcVar5)();
      }
      uVar14 = 0;
      if (local_60._4_4_ != 0) {
        uVar14 = (uint)(iVar7 * (int)local_60) / local_60._4_4_;
      }
      *(uint *)(param_1 + 0x74) = uVar14;
      if (uStack_58._4_4_ == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18000b790);
        (*pcVar5)();
      }
      uVar14 = 0;
      if (uStack_58._4_4_ != 0) {
        uVar14 = (uint)(extraout_w15 * (int)uStack_58) / uStack_58._4_4_;
      }
      *(uint *)(param_1 + 0x78) = uVar14;
      lVar11 = extraout_x14_00;
      iVar15 = extraout_w13;
    }
    if (((5 < *(int *)(param_1 + 0x48) - 0x14U) && (*(int *)(param_1 + 0x48) != 0x20)) ||
       (uVar13 = 0xffffffffffffffff, *(int *)(param_1 + 0x54) == 1)) {
      uVar13 = 0;
    }
    *(undefined8 *)(lVar11 + 0xf8) = uVar13;
    iVar7 = *(int *)(param_1 + 0x54);
    plVar16 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x68);
    uVar17 = (undefined4)uVar8;
    if (iVar7 == 3) {
      FUN_18000cb28(param_1);
      iVar7 = (uint)*(ushort *)(*(longlong *)(param_1 + 8) + 0x16) *
              *(int *)(*(longlong *)(param_1 + 8) + 0x18);
      lVar11 = FUN_180102f80((ulonglong)(iVar7 + 0x20) + 8);
      uVar9 = lVar11 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar9 - 8) = lVar11;
      *(ulonglong *)(param_1 + 0x40) = uVar9;
      func_0x000180222c50(uVar9,0,iVar7);
      cVar6 = *(longlong *)(param_1 + 0x40) != 0;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) == 0) {
        if (iVar7 == 2) {
          uVar12 = 1;
        }
        else {
          uVar12 = 2;
          if (iVar7 != 1) {
            uVar12 = 0;
          }
        }
        if (iVar15 == 0) {
          uVar13 = (**(code **)(*plVar16 + 0x58))
                             (plVar16,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100)
                              ,*(undefined4 *)(param_1 + 0x70),1,uVar8 & 0xffffffff);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70) = uVar13;
        }
        else {
          iVar7 = FUN_180002fb0(uVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xea8),
                                *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xe68),
                                *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
          if (((*(char *)(DAT_18024de60 + 0x9f4) == '\0') &&
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
            iVar7 = *(int *)(param_1 + 0x58);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
          }
          plVar10 = (longlong *)
                    (**(code **)(*plVar16 + 0x50))
                              (plVar16,*(undefined4 *)(param_1 + 0x74),
                               *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x60),
                               *(undefined4 *)(param_1 + 100),iVar7,*(undefined4 *)(param_1 + 0x70),
                               1,uVar17,uVar12);
          *(longlong **)(*(longlong *)(param_1 + 8) + 0x70) = plVar10;
          if ((plVar10 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
            (**(code **)(*plVar10 + 0x88))();
          }
        }
      }
      cVar6 = '\0';
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) != 0) {
        FUN_18000cb28(param_1);
        lVar11 = *(longlong *)(param_1 + 8);
        cVar6 = '\x01';
        if (((*(uint *)(lVar11 + 0x100) >> 10 & 1) != 0) &&
           (iVar7 = *(int *)(param_1 + 0x54), iVar7 != 1)) {
          if ((iVar7 == 0) &&
             ((*(int *)(*(longlong *)(param_1 + 0x28) + 0xe68) == 1 &&
              (*(longlong *)(lVar11 + 0x28) == 0)))) {
            *(uint *)(lVar11 + 0x48) = *(uint *)(lVar11 + 0x48) | 0x10;
          }
          else {
            cVar6 = FUN_180024a08();
          }
        }
        if (((((*(uint *)(param_1 + 0x50) >> 10 & 1) == 0) || (*(int *)(param_1 + 0x68) == 0)) &&
            (*(int *)(*(longlong *)(param_1 + 8) + 0x20) == 0)) &&
           (*(int *)(param_1 + 0x48) != 0x51)) {
          uVar1 = *(uint *)(param_1 + 0x68);
          uVar3 = 1 << (ulonglong)(uVar1 & 0x1f);
          uVar14 = *(uint *)(param_1 + 100) >> (ulonglong)(uVar1 & 0x1f);
          if (*(uint *)(param_1 + 100) <= uVar3) {
            uVar14 = 1;
          }
          uVar4 = *(uint *)(param_1 + 0x60) >> (ulonglong)(uVar1 & 0x1f);
          if (*(uint *)(param_1 + 0x60) <= uVar3) {
            uVar4 = 1;
          }
          (**(code **)(*plVar16 + 0x100))
                    (0,0,(float)uVar4,(float)uVar14,plVar16,uVar1,*(undefined4 *)(param_1 + 0x6c),
                     *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),0);
        }
        lVar11 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar11 + 0x60) != '\0') {
          *(undefined8 *)(lVar11 + 0x50) = 0x300000102;
          *(undefined8 *)(lVar11 + 0x58) = 0x400000102;
        }
      }
    }
    if (cVar6 != '\0') {
      uVar13 = *(undefined8 *)(param_1 + 0x60);
      local_40 = *(int *)(param_1 + 0x58);
      local_38 = (uint)local_38._3_1_ << 0x18;
      if (local_40 == 0) {
        local_40 = 1;
      }
      lVar11 = *(longlong *)(param_1 + 8);
      local_38._0_2_ =
           CONCAT11((*(int *)(param_1 + 0x70) - 0x24U & 0xfffffffa) == 0,(uVar2 & 3) != 0);
      *(undefined8 *)(lVar11 + 0x94) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(lVar11 + 0x8c) = uVar13;
      *(ulonglong *)(lVar11 + 0x9c) = CONCAT44(uVar17,local_40);
      *(int *)(lVar11 + 0xa4) = local_38;
      uStack_3c = uVar17;
      (**(code **)(*plVar16 + 0x40))(plVar16,&local_60,*(undefined4 *)(param_1 + 0x70));
      lVar11 = *(longlong *)(param_1 + 8);
      *(uint *)(lVar11 + 0xb0) = local_60._4_4_;
      *(int *)(lVar11 + 0xb4) = (int)uStack_58;
      *(uint *)(lVar11 + 0xa8) = (uint)*(byte *)(lVar11 + 0x26) << 3;
      *(int *)(lVar11 + 0xac) = (int)local_60;
      *(int *)(*(longlong *)(param_1 + 8) + 0x104) =
           *(int *)(*(longlong *)(param_1 + 8) + 0x104) + 1;
    }
  }
  return cVar6;
}

