/*
 * FUN_1802116e0 at 1802116e0
 * undefined FUN_1802116e0(void)
 * Address ranges: 1802116e0-18021188b;18021189c-18021190f;180211924-180211a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1802116e0(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  param_5[1] = 0;
  *param_5 = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  lVar14 = *(longlong *)(param_1 + 0x18);
  if ((uint)(*(int *)(lVar14 + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x18) + param_2) <=
      *(uint *)(param_1 + 0x34)) goto LAB_1802119b4;
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x28) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180211744);
    (*pcVar8)();
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar1 / uVar4;
  }
  uVar1 = uVar1 - uVar5 * uVar4;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar10 = (*extraout_x11)();
  if (*(ulonglong *)(lVar14 + (ulonglong)uVar1 * 0x30 + 0x28) <= uVar10) {
    *(uint *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x30 + 0x18) = 0;
    goto LAB_1802119b4;
  }
  local_88 = *(undefined4 *)(param_1 + 0x2c);
  local_80 = *(undefined4 *)(param_1 + 0x30);
  uStack_84 = *(undefined4 *)(param_1 + 0x34);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_7c = 0;
  uStack_48 = 0;
  local_50 = 0;
  uVar11 = (*(code *)puVar7)(0x180224000);
  iVar9 = (*extraout_x11_00)(uVar11,&local_88,&DAT_180238fa8,&local_60);
  if (iVar9 < 0) goto LAB_18021197c;
  uVar11 = (*(code *)puVar7)(0x180224000);
  puVar12 = (undefined8 *)(*extraout_x11_01)(uVar11,auStack_90);
  local_70 = *puVar12;
  uVar11 = (*(code *)puVar7)(0x180224000);
  puVar12 = (undefined8 *)(*extraout_x11_02)(uVar11,auStack_90);
  uStack_68 = *puVar12;
  iVar9 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) == 0) {
    if (iVar9 != 0) {
      uVar1 = *(uint *)(param_1 + 0x20);
      goto LAB_18021192c;
    }
    lVar14 = FUN_1802229a8(0x300);
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar14,*(undefined8 *)(param_1 + 0x18),
                          (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != iVar9) {
      uVar1 = *(int *)(param_1 + 0x28) + 1;
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x20);
      while (uVar1 < (uint)uVar10) {
        uVar13 = (ulonglong)((uint)uVar10 - 1);
        puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar10 * 0x30);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x30);
        uVar11 = *puVar2;
        uVar16 = puVar2[3];
        uVar15 = puVar2[2];
        puVar12[1] = puVar2[1];
        *puVar12 = uVar11;
        puVar12[3] = uVar16;
        puVar12[2] = uVar15;
        uVar11 = puVar2[4];
        puVar12[5] = puVar2[5];
        puVar12[4] = uVar11;
        uVar10 = uVar13;
      }
LAB_18021192c:
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x30);
      puVar12[1] = uStack_68;
      *puVar12 = local_70;
      puVar12[3] = uStack_58;
      puVar12[2] = local_60;
      puVar12[5] = uStack_48;
      puVar12[4] = local_50;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_1802119b4:
      plVar3 = (longlong *)
               (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30);
      *param_5 = *plVar3 + (ulonglong)(uint)((int)plVar3[3] * *(int *)(param_1 + 0x38));
      param_5[1] = plVar3[1] + (ulonglong)(uint)((int)plVar3[3] * *(int *)(param_1 + 0x38));
      param_5[2] = plVar3[2];
      *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_1 + 0x38);
      *(int *)(plVar3 + 3) = (int)plVar3[3] + param_2;
      plVar3[4] = param_3;
      plVar3[5] = param_4;
      return 1;
    }
    uVar1 = iVar9 << 1;
    if (iVar9 == 0) {
      uVar1 = 0x10;
    }
    lVar14 = CONCAT44(0,uVar1) * 0x30;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,uVar1);
    if (SUB168(auVar6 * ZEXT816(0x30),8) != 0) {
      lVar14 = -1;
    }
    lVar14 = FUN_1802229a8(lVar14);
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar14,*(undefined8 *)(param_1 + 0x18),
                          (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
    }
  }
  (*(code *)puVar7)(0x180224000);
  (*extraout_x11_03)();
LAB_18021197c:
  FUN_1801ed3b8(s__dgVoodoo__D3D12_Core__FATAL_ERR_180238ff0,
                s_a_resource_descriptor_ring_buffe_180239128);
  thunk_FUN_180223720();
  return 0;
}

