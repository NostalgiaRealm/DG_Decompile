/*
 * FUN_180211158 at 180211158
 * undefined FUN_180211158(void)
 * Address ranges: 180211158-180211293;1802112a4-180211387;18021139c-1802113cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180211158(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_x7;
  longlong lVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_40 = 0;
  local_70[0] = 1;
  uStack_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lStack_60 = ((ulonglong)(*(int *)(param_1 + 0x30) + 0xffU & 0xffffff00) & 0x3fffff) << 10;
  local_68 = 0x10000;
  local_48 = 0x100000000;
  local_58 = 0x1000100000001;
  uStack_50 = 0x100000000;
  uVar8 = FUN_18020d338(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),&DAT_1802390e0,
                        0,local_70,0xac3,0,in_x7,&local_90);
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar9 = (*extraout_x11)();
  uVar10 = (*(code *)puVar6)(0x180224000);
  iVar7 = (*extraout_x11_00)(uVar10,0,0,&uStack_98);
  if (-1 < iVar7) {
    iVar7 = *(int *)(param_1 + 100);
    if (*(int *)(param_1 + 0x60) == 0) {
      if (iVar7 != 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 0x30);
        puVar1[1] = uStack_98;
        *puVar1 = uVar9;
        puVar1[3] = uStack_88;
        puVar1[2] = local_90;
        puVar1[5] = uStack_78;
        puVar1[4] = local_80;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        return 1;
      }
      lVar11 = FUN_1802229a8(0x300);
      if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar11,*(undefined8 *)(param_1 + 0x58),
                            (ulonglong)*(uint *)(param_1 + 100) * 0x30);
      }
    }
    else {
      if (*(int *)(param_1 + 0x60) == iVar7) {
        uVar4 = iVar7 << 1;
        if (iVar7 == 0) {
          uVar4 = 0x10;
        }
        lVar11 = CONCAT44(0,uVar4) * 0x30;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = CONCAT44(0,uVar4);
        if (SUB168(auVar5 * ZEXT816(0x30),8) != 0) {
          lVar11 = -1;
        }
        lVar11 = FUN_1802229a8(lVar11);
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar11,*(undefined8 *)(param_1 + 0x58),
                              (ulonglong)*(uint *)(param_1 + 100) * 0x30);
        }
        iVar7 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x60);
        uVar4 = *(int *)(param_1 + 0x68) + 1;
        while (uVar8 = (ulonglong)uVar3, uVar4 < uVar3) {
          uVar3 = uVar3 - 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar8 * 0x30);
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar3 * 0x30);
          uVar10 = *puVar2;
          uVar13 = puVar2[3];
          uVar12 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar10;
          puVar1[3] = uVar13;
          puVar1[2] = uVar12;
          uVar10 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar10;
        }
        iVar7 = 1;
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 0x30);
        puVar1[1] = uStack_98;
        *puVar1 = uVar9;
        puVar1[3] = uStack_88;
        puVar1[2] = local_90;
        puVar1[5] = uStack_78;
        puVar1[4] = local_80;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      }
      if (iVar7 != 0) {
        return iVar7;
      }
    }
  }
  (*(code *)puVar6)(0x180224000);
  (*extraout_x11_01)();
  return 0;
}

