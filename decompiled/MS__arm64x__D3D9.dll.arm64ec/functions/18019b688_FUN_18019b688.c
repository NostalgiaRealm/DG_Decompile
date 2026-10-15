/*
 * FUN_18019b688 at 18019b688
 * undefined FUN_18019b688(void)
 * Address ranges: 18019b688-18019baa7;18019bad0-18019bb73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18019b688(longlong param_1,ulonglong param_2,int param_3,longlong param_4,int param_5,
             int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong extraout_x1;
  uint uVar10;
  uint uVar11;
  uint extraout_w11;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong extraout_x11_01;
  code *extraout_x11_02;
  int extraout_w15;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  undefined *local_78;
  uint local_70;
  int local_6c;
  uint local_68;
  longlong local_60;
  longlong lStack_50;
  
  uVar3 = (uint)param_2;
  local_60 = param_4;
  FUN_180202728(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  FUN_180199c00(param_1 + -0xe0,0);
  local_68 = uVar3 + *(int *)(param_1 + -0xa4) * param_3;
  if (((*(longlong *)(param_1 + -0x28) == 0) ||
      (iVar6 = thunk_FUN_180223d24(*(longlong *)(param_1 + -0x50) + (ulonglong)local_68 * 0x28 +
                                   0x18), iVar6 == 0)) && (2 < *(int *)(param_1 + -0x9c) - 3U)) {
    uVar13 = *(uint *)(param_1 + -0xb4);
    iVar6 = *param_6;
    uVar11 = param_6[2];
    uVar14 = param_6[3];
    bVar1 = (&DAT_18022dc38)[uVar13];
    uVar8 = *(uint *)(&DAT_18022e050 + (ulonglong)uVar13 * 4);
    uVar10 = (uint)(byte)(&DAT_18022dc08)[uVar13];
    uVar7 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff);
    uVar13 = uVar7;
    if (uVar8 < 8) {
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18019b788);
        (*pcVar5)();
      }
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = uVar7 / uVar10;
      }
    }
    uVar7 = extraout_w11;
    if (iVar6 != 0) {
      uVar7 = extraout_w15 + 1;
      FUN_18019b1e8(param_1 + -0xe0);
    }
    if ((uVar7 < uVar14) && (FUN_18019b1e8(param_1 + -0xe0), uVar7 = uVar14, uVar11 == uVar13)) {
      uVar7 = uVar14 + 1;
    }
    if (uVar14 == uVar7) {
      FUN_18019b1e8(param_1 + -0xe0);
    }
    uVar11 = param_6[1];
    if (uVar8 < 8) {
      uVar11 = uVar11 * bVar1;
    }
    local_78 = (undefined *)((ulonglong)uVar11 << 0x20);
    local_70 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar3 & 0x1f);
    if (local_70 == 0) {
      local_70 = 1;
    }
    local_6c = param_6[3] + 1;
    if (uVar8 < 8) {
      local_6c = (uint)bVar1 + param_6[3] * (uint)bVar1;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar9 = (ulonglong)local_68;
    pcVar5 = extraout_x11;
LAB_18019b94c:
    (*pcVar5)(param_1 + -0xe0,uVar9,&local_78);
    uVar12 = 1;
  }
  else {
    auVar15 = FUN_18019a0d0(param_1 + -0xe0,param_2 & 0xffffffff,param_3);
    puVar4 = __hybrid_os_arm64x_dispatch_icall;
    if ((auVar15._0_8_ & 1) != 0) {
      uVar12 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                         (0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
                          auVar15._8_8_,uVar3 + *(int *)(param_1 + -0xa4) * param_3);
      iVar6 = (*extraout_x11_00)(uVar12,*(undefined8 *)(param_1 + -0x28));
      if (-1 < iVar6) {
        uVar14 = *(uint *)(param_1 + -0xb4);
        bVar1 = (&DAT_18022dc38)[uVar14];
        uVar11 = *(uint *)(&DAT_18022e050 + (ulonglong)uVar14 * 4);
        if (uVar11 == 0x18) {
          uVar11 = 0x20;
        }
        uVar13 = uVar11 >> 3;
        if (uVar11 < 8) {
          uVar13 = *(uint *)(&DAT_18022db60 + (ulonglong)uVar14 * 4);
        }
        uVar8 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff,
                              uVar13);
        uVar14 = uVar8;
        if (uVar11 < 8) {
          bVar2 = (&DAT_18022dc08)[extraout_x11_01 & 0xffffffff];
          if (bVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18019ba24);
            (*pcVar5)();
          }
          uVar14 = 0;
          if (bVar2 != 0) {
            uVar14 = uVar8 / bVar2;
          }
        }
        uVar8 = param_6[1];
        uVar7 = (uint)bVar1;
        if (uVar8 <= (uint)param_6[3]) {
          local_78 = puVar4;
          if (uVar8 == param_6[3]) {
            uVar14 = param_6[2];
          }
          uVar3 = *param_6 * uVar13;
          local_68 = uVar11;
          lStack_50 = param_1;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48((ulonglong)(uVar8 * local_90) + (ulonglong)uVar3 +
                              CONCAT44(uStack_94,local_98),
                              (ulonglong)(uVar8 * param_5) + (ulonglong)uVar3 + local_60,
                              (uVar14 - *param_6) * uVar13);
        }
        uVar12 = FUN_18019a160(param_1 + -0xe0,param_2 & 0xffffffff,param_3);
        uVar14 = param_6[1];
        if (uVar11 < 8) {
          uVar14 = uVar14 * uVar7;
        }
        local_78 = (undefined *)((ulonglong)uVar14 << 0x20);
        local_70 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar3 & 0x1f);
        if (local_70 == 0) {
          local_70 = 1;
        }
        local_6c = param_6[3] + 1;
        if (uVar11 < 8) {
          local_6c = uVar7 + param_6[3] * uVar7;
        }
        (*(code *)puVar4)(0x180224000,uVar12,uVar3 + *(int *)(param_1 + -0xa4) * param_3);
        uVar9 = extraout_x1;
        pcVar5 = extraout_x11_02;
        goto LAB_18019b94c;
      }
    }
    uVar12 = 0;
  }
  thunk_FUN_18022370c(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar12;
}

