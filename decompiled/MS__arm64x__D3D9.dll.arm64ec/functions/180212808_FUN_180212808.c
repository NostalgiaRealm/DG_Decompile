/*
 * FUN_180212808 at 180212808
 * undefined FUN_180212808(void)
 * Address ranges: 180212808-180212a0b;180212a1c-180212a8f;180212aa4-180212bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180212808(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  lVar12 = param_1[2];
  local_b0 = param_2;
  if (*(int *)(lVar12 + (ulonglong)*(uint *)(param_1 + 4) * 0x30 + 0x18) + 1U <=
      *(uint *)(param_1 + 5)) goto LAB_180212b50;
  uVar4 = *(uint *)(param_1 + 3);
  uVar1 = *(uint *)(param_1 + 4) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180212870);
    (*pcVar8)();
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar1 / uVar4;
  }
  uVar1 = uVar1 - uVar5 * uVar4;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar10 = (*extraout_x11)();
  if (*(ulonglong *)(lVar12 + (ulonglong)uVar1 * 0x30 + 0x28) <= uVar10) {
    *(uint *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1[2] + (ulonglong)uVar1 * 0x30 + 0x18) = 0;
    goto LAB_180212b50;
  }
  local_f0 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_ec = (undefined4)param_1[5];
  local_e8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uVar11 = (*(code *)puVar7)(0x180224000);
  iVar9 = (*extraout_x11_00)(uVar11,&local_f0,&DAT_180239178,&local_e0);
  if (iVar9 < 0) goto LAB_180212b18;
  local_a8 = 3;
  uStack_a0 = 0;
  local_80[0] = 1;
  local_98 = 0;
  local_78 = 0;
  if ((*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x14) & 1) == 0) {
    uVar1 = (int)param_1[5] << 3;
  }
  else {
    uVar1 = (int)param_1[5] * 0xc;
  }
  local_70 = (ulonglong)uVar1;
  local_50 = 0;
  uStack_68 = 0x1000100000001;
  local_60 = 0x100000000;
  uStack_58 = 0x100000000;
  uVar10 = FUN_18020d338(*param_1,(ulonglong)*(uint *)(param_1 + 1),&local_a8,0,local_80,0x400,0);
  if ((uVar10 & 1) != 0) {
    local_90 = 0;
    uStack_88 = 0;
    uVar11 = (*(code *)puVar7)(0x180224000);
    (*extraout_x11_01)(uVar11,0,&local_90,&uStack_d0);
    iVar9 = *(int *)((longlong)param_1 + 0x1c);
    if ((int)param_1[3] == 0) {
      if (iVar9 != 0) {
        uVar1 = *(uint *)(param_1 + 3);
        goto LAB_180212aac;
      }
      lVar12 = FUN_1802229a8(0x300);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar12,param_1[2],(ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30)
        ;
      }
    }
    else {
      if ((int)param_1[3] != iVar9) {
        uVar1 = (int)param_1[4] + 1;
        uVar10 = (ulonglong)*(uint *)(param_1 + 3);
        while (uVar1 < (uint)uVar10) {
          uVar13 = (ulonglong)((uint)uVar10 - 1);
          puVar3 = (undefined8 *)(param_1[2] + uVar10 * 0x30);
          puVar2 = (undefined8 *)(param_1[2] + uVar13 * 0x30);
          uVar11 = *puVar2;
          uVar15 = puVar2[3];
          uVar14 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar11;
          puVar3[3] = uVar15;
          puVar3[2] = uVar14;
          uVar11 = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar11;
          uVar10 = uVar13;
        }
LAB_180212aac:
        puVar3 = (undefined8 *)(param_1[2] + (ulonglong)uVar1 * 0x30);
        puVar3[1] = uStack_d8;
        *puVar3 = local_e0;
        puVar3[3] = uStack_c8;
        puVar3[2] = uStack_d0;
        puVar3[5] = uStack_b8;
        puVar3[4] = local_c0;
        *(int *)(param_1 + 3) = (int)param_1[3] + 1;
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
LAB_180212b50:
        puVar3 = (undefined8 *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 0x30);
        *param_4 = *puVar3;
        param_4[1] = puVar3[1];
        *(undefined4 *)(param_4 + 2) = *(undefined4 *)(puVar3 + 3);
        param_4[3] = puVar3[2] + (ulonglong)*(uint *)(puVar3 + 3) * 8;
        *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
        puVar3[4] = local_b0;
        puVar3[5] = param_3;
        return 1;
      }
      uVar1 = iVar9 << 1;
      if (iVar9 == 0) {
        uVar1 = 0x10;
      }
      lVar12 = CONCAT44(0,uVar1) * 0x30;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = CONCAT44(0,uVar1);
      if (SUB168(auVar6 * ZEXT816(0x30),8) != 0) {
        lVar12 = -1;
      }
      lVar12 = FUN_1802229a8(lVar12);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar12,param_1[2],(ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30)
        ;
      }
    }
    (*(code *)puVar7)(0x180224000);
    (*extraout_x11_02)();
  }
  (*(code *)puVar7)(0x180224000);
  (*extraout_x11_03)();
LAB_180212b18:
  FUN_1801ed3b8(s__dgVoodoo__D3D12_Core__FATAL_ERR_180238ff0,s_a_query_ring_buffer_180239160);
  thunk_FUN_180223720();
  return 0;
}

