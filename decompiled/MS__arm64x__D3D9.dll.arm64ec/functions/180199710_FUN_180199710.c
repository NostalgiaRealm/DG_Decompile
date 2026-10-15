/*
 * FUN_180199710 at 180199710
 * undefined FUN_180199710(void)
 * Address ranges: 180199710-1801999af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180199710(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
             undefined4 *param_6)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c;
  
  iVar4 = thunk_FUN_180223d24(param_6);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (iVar4 == 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_3,auStack_78);
    local_80 = *(undefined4 *)(param_1 + 0x24);
    uStack_7c = *(undefined4 *)(param_1 + 0x28);
    local_88 = 0;
    FUN_180202728(*(undefined8 *)(param_1 + 0x50),extraout_x1,param_1);
    iVar4 = thunk_FUN_180223c48(&local_88,param_6);
    if (((iVar4 == 0) || (local_70 != 1)) || (local_6c != 1)) {
      if (*(int *)(param_1 + 0x44) - 3U < 3) {
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_01)(param_2,&local_b8);
        uVar1 = local_98 & 0x40;
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_02)(param_3,&local_b8);
        uVar6 = local_98 >> 6 & 1;
        uVar5 = extraout_x1_01;
        if (uVar1 != 0) {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
        uVar5 = extraout_x1_00;
      }
      if (uVar6 == 0) {
        local_ac = param_6[2];
        local_a8 = param_6[3];
        uVar1 = *(uint *)(param_1 + 0x2c);
        local_b8 = *param_6;
        uStack_b4 = param_6[1];
        uStack_a4 = 1;
        bVar2 = (&DAT_18022dc08)[uVar1];
        local_b0 = 0;
        if ((*(uint *)(param_1 + 0x24) >> (ulonglong)(param_4 & 0x1f) < (uint)bVar2) &&
           ((&DAT_18022db28)[uVar1] != '\0')) {
          local_ac = (bVar2 + local_ac) - 1 & -(uint)bVar2;
        }
        bVar2 = (&DAT_18022dc38)[uVar1];
        if ((*(uint *)(param_1 + 0x28) >> (ulonglong)(param_4 & 0x1f) < (uint)bVar2) &&
           ((&DAT_18022db28)[uVar1] != '\0')) {
          local_a8 = (bVar2 + local_a8) - 1 & -(uint)bVar2;
        }
        uVar5 = (*(code *)puVar3)(0x180225000,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),
                                  uVar5,param_4 + *(int *)(param_1 + 0x3c) * param_5);
        (*extraout_x11_04)(uVar5,param_2);
      }
      else {
        uVar5 = (*(code *)puVar3)(0x180225000);
        (*extraout_x11_03)(uVar5,param_2);
      }
    }
    else {
      uVar5 = (*(code *)puVar3)(0x180224000);
      (*extraout_x11_00)(uVar5,param_2,param_3);
    }
    thunk_FUN_180223bf8(param_6);
    thunk_FUN_18022370c(*(longlong *)(param_1 + 0x50) + 0x620);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

