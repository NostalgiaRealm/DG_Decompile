/*
 * FUN_180117130 at 180117130
 * undefined FUN_180117130(void)
 * Address ranges: 180117130-180117443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180117130(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  longlong lVar8;
  longlong extraout_x15;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 local_88;
  int local_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  iVar14 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  uVar10 = 0;
  uVar16 = *(ulonglong *)(param_1 + 0x60);
  uVar15 = *(ulonglong *)(param_1 + 0x58);
  lVar8 = *(longlong *)(param_1 + 0x30);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x3c) != 0)) {
    lVar8 = **(longlong **)(lVar8 + 0x40);
    iVar14 = (int)((ulonglong)*(undefined8 *)(lVar8 + 0x48) >> 0x20);
    uVar16 = *(ulonglong *)(lVar8 + 0x60);
    uVar15 = *(ulonglong *)(lVar8 + 0x58);
  }
  lVar8 = *(longlong *)(param_1 + 0x28);
  uVar5 = FUN_18010b708(lVar8,&local_88);
  if (local_88._4_4_ == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801171a4);
    (*pcVar4)();
  }
  uVar13 = 0;
  if (local_88._4_4_ != 0) {
    uVar13 = ((uint)uVar16 * (int)local_88) / local_88._4_4_;
  }
  uVar17 = (uint)(uVar16 >> 0x20);
  *(uint *)(param_1 + 0x74) = uVar13;
  if (uStack_7c != 0) {
    uVar9 = 0;
    if (uStack_7c != 0) {
      uVar9 = (uVar17 * local_80) / uStack_7c;
    }
    *(uint *)(param_1 + 0x78) = uVar9;
    FUN_1801081f0(uVar5,*(undefined4 *)(lVar8 + 0xea8),*(undefined4 *)(lVar8 + 0xe68),
                  uVar15 & 0xffffffff,uVar15 >> 0x20);
    uVar11 = 1;
    uVar6 = 6;
    if (iVar14 != 5) {
      uVar6 = 1;
    }
    if (extraout_x15 != 0) {
      uVar11 = (uint)*(ushort *)(extraout_x15 + 0x3c);
    }
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x68);
    local_78 = uVar5;
    FUN_180117fe8(param_1);
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    lVar8 = (*extraout_x11)(uVar5,uVar13,uVar9,uVar16 & 0xffffffff,uVar17);
    if (lVar8 != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_00)(param_1);
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xee) = 0;
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_01)(lVar8);
      uVar10 = local_78;
      lVar7 = *(longlong *)(param_1 + 8);
      uVar13 = 0;
      uVar5 = *(undefined8 *)(lVar7 + 0x70);
      *(uint *)(lVar7 + 0x100) = *(uint *)(lVar7 + 0x100) | 1;
      local_44 = 1;
      local_50 = 0;
      local_48 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      local_88 = param_1;
      do {
        uVar9 = 0;
        if (uVar11 != 0) {
          do {
            uVar1 = (uint)uVar16 >> (ulonglong)(uVar9 & 0x1f);
            uVar2 = uVar17 >> (ulonglong)(uVar9 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            thunk_FUN_180223c20(&uStack_60,0,0,uVar1,uVar2);
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11_02)(uVar10,uVar9,uVar13,uVar9,uVar13,lVar8,uVar5,&local_70);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar11);
        }
        lVar7 = local_88;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar6);
      lVar12 = *(longlong *)(local_88 + 0x30);
      if (lVar12 == 0) {
        *(longlong *)(*(longlong *)(local_88 + 8) + 0x70) = lVar8;
      }
      else {
        *(longlong *)(lVar12 + 0x58) = lVar8;
        uVar13 = 0;
        if (*(int *)(lVar12 + 0x80) != 0) {
          do {
            uVar17 = 0;
            if (*(short *)(lVar12 + 0x3c) != 0) {
              do {
                FUN_180116e78(*(undefined8 *)
                               (*(longlong *)(lVar12 + 0x40) +
                               (ulonglong)(uVar17 + uVar13 * 0x10) * 8),lVar8);
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(ushort *)(lVar12 + 0x3c));
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(lVar12 + 0x80));
        }
      }
      FUN_18010b470(*(undefined8 *)(lVar7 + 0x28),lVar7);
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_03)(uVar5);
      uVar10 = 1;
    }
    return uVar10;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801171c0);
  (*pcVar4)();
}

