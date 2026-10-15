/*
 * FUN_18019eab0 at 18019eab0
 * undefined FUN_18019eab0(void)
 * Address ranges: 18019eab0-18019ec73;18019ec98-18019ed7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18019eab0(longlong param_1,ulonglong param_2,int param_3,longlong param_4,undefined8 param_5,
             int *param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined *local_90;
  uint local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int iStack_78;
  uint local_74;
  uint uStack_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  int local_48;
  
  uVar15 = param_2 & 0xffffffff;
  local_80 = (int)param_5;
  uVar14 = (uint)param_2;
  local_68 = param_4;
  if (*(char *)(param_1 + 0x169) == '\0') {
    uVar9 = FUN_18019b688(param_1,uVar15,param_3,param_4,param_5,param_6);
    return uVar9;
  }
  FUN_180202728(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar10 = (*extraout_x11)(param_1 + -0xe0);
  if ((lVar10 != 0) && (uVar11 = FUN_180199fb8(param_1 + -0xe0), (uVar11 & 1) != 0)) {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_00)(param_1 + -0xe0,uVar15,param_3);
    uVar12 = (*(code *)puVar5)(0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
                               extraout_x1,uVar14 + *(int *)(param_1 + -0xa4) * param_3);
    iVar7 = (*extraout_x11_01)(uVar12,*(undefined8 *)(param_1 + -0x28));
    if (-1 < iVar7) {
      uVar16 = *(uint *)(param_1 + -0xb4);
      bVar2 = (&DAT_18022dc38)[uVar16];
      uVar1 = *(uint *)(&DAT_18022e050 + (ulonglong)uVar16 * 4);
      if (uVar1 == 0x18) {
        uVar1 = 0x20;
      }
      uVar13 = uVar1 >> 3;
      if (uVar1 < 8) {
        uVar13 = *(uint *)(&DAT_18022db60 + (ulonglong)uVar16 * 4);
      }
      uVar8 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),uVar15,uVar13);
      uVar16 = uVar8;
      if (uVar1 < 8) {
        bVar3 = (&DAT_18022dc08)[extraout_x11_02 & 0xffffffff];
        if (bVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18019ebf4);
          (*pcVar6)();
        }
        uVar16 = 0;
        if (bVar3 != 0) {
          uVar16 = uVar8 / bVar3;
        }
      }
      uVar8 = param_6[1];
      local_74 = (uint)bVar2;
      if (uVar8 <= (uint)param_6[3]) {
        local_90 = puVar5;
        local_60 = local_50;
        if (uVar8 == param_6[3]) {
          uVar16 = param_6[2];
        }
        uVar4 = *param_6 * uVar13;
        local_7c = uVar14;
        iStack_78 = param_3;
        uStack_70 = uVar1;
        lStack_58 = param_1;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48((ulonglong)(uVar8 * local_48) + (ulonglong)uVar4 + local_50,
                            (ulonglong)(uVar8 * local_80) + (ulonglong)uVar4 + local_68,
                            (uVar16 - *param_6) * uVar13);
      }
      uVar12 = (*(code *)puVar5)(0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
                                 uVar8,uVar14 + *(int *)(param_1 + -0xa4) * param_3);
      uVar12 = (*extraout_x11_03)(uVar12,*(undefined8 *)(param_1 + -0x28));
      uVar16 = param_6[1];
      if (uVar1 < 8) {
        uVar16 = uVar16 * local_74;
      }
      local_90 = (undefined *)((ulonglong)uVar16 << 0x20);
      local_88 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar14 & 0x1f);
      if (local_88 == 0) {
        local_88 = 1;
      }
      local_84 = param_6[3] + 1;
      if (uVar1 < 8) {
        local_84 = local_74 + param_6[3] * local_74;
      }
      (*(code *)puVar5)(0x180224000,uVar12,uVar14 + *(int *)(param_1 + -0xa4) * param_3);
      (*extraout_x11_04)(param_1 + -0xe0,extraout_x1_00,&local_90);
      uVar9 = 1;
      goto LAB_18019ed3c;
    }
  }
  uVar9 = 0;
LAB_18019ed3c:
  thunk_FUN_18022370c(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar9;
}

