/*
 * FUN_1802124a0 at 1802124a0
 * undefined FUN_1802124a0(void)
 * Address ranges: 1802124a0-18021261f;180212630-1802126ab;1802126c0-180212747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802124a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 in_x7;
  longlong lVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  local_c8 = 0;
  local_d0 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_cc = (undefined4)param_1[5];
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar8 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar7 = (*extraout_x11)(uVar8,&local_d0,&DAT_180239178,&local_c0);
  if (-1 < iVar7) {
    local_90 = 3;
    uStack_88 = 0;
    local_68[0] = 1;
    local_80 = 0;
    local_60 = 0;
    if ((*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x14) & 1) == 0) {
      uVar4 = (int)param_1[5] << 3;
    }
    else {
      uVar4 = (int)param_1[5] * 0xc;
    }
    local_58 = (ulonglong)uVar4;
    local_38 = 0;
    uStack_50 = 0x1000100000001;
    local_48 = 0x100000000;
    uStack_40 = 0x100000000;
    uVar9 = FUN_18020d338(*param_1,(ulonglong)*(uint *)(param_1 + 1),&local_90,0,local_68,0x400,0,
                          in_x7,&uStack_b8);
    if ((uVar9 & 1) != 0) {
      local_78 = 0;
      uStack_70 = 0;
      uVar8 = (*(code *)puVar6)(0x180224000);
      (*extraout_x11_00)(uVar8,0,&local_78,&uStack_b0);
      iVar7 = *(int *)((longlong)param_1 + 0x1c);
      if ((int)param_1[3] == 0) {
        if (iVar7 != 0) {
          uVar4 = *(uint *)(param_1 + 3);
          lVar10 = param_1[2];
          goto LAB_1802126cc;
        }
        lVar10 = FUN_1802229a8(0x300);
        if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar10,param_1[2],
                              (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
        }
      }
      else {
        if ((int)param_1[3] != iVar7) {
          uVar3 = *(uint *)(param_1 + 3);
          uVar4 = (int)param_1[4] + 1;
          while (uVar9 = (ulonglong)uVar3, uVar4 < uVar3) {
            uVar3 = uVar3 - 1;
            puVar1 = (undefined8 *)(param_1[2] + uVar9 * 0x30);
            puVar2 = (undefined8 *)(param_1[2] + (ulonglong)uVar3 * 0x30);
            uVar8 = *puVar2;
            uVar12 = puVar2[3];
            uVar11 = puVar2[2];
            puVar1[1] = puVar2[1];
            *puVar1 = uVar8;
            puVar1[3] = uVar12;
            puVar1[2] = uVar11;
            uVar8 = puVar2[4];
            puVar1[5] = puVar2[5];
            puVar1[4] = uVar8;
          }
          lVar10 = param_1[2];
LAB_1802126cc:
          puVar1 = (undefined8 *)(lVar10 + (ulonglong)uVar4 * 0x30);
          puVar1[1] = uStack_b8;
          *puVar1 = local_c0;
          puVar1[3] = uStack_a8;
          puVar1[2] = uStack_b0;
          puVar1[5] = uStack_98;
          puVar1[4] = local_a0;
          *(int *)(param_1 + 3) = (int)param_1[3] + 1;
          return 1;
        }
        uVar4 = iVar7 << 1;
        if (iVar7 == 0) {
          uVar4 = 0x10;
        }
        lVar10 = CONCAT44(0,uVar4) * 0x30;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = CONCAT44(0,uVar4);
        if (SUB168(auVar5 * ZEXT816(0x30),8) != 0) {
          lVar10 = -1;
        }
        lVar10 = FUN_1802229a8(lVar10);
        if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar10,param_1[2],
                              (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
        }
      }
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_01)();
    }
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_02)();
  }
  return 0;
}

