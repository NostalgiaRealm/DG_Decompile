/*
 * FUN_10051850 at 10051850
 * undefined FUN_10051850(void)
 * Address ranges: 10051850-10051adb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10051850(int param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined1 auVar9 [16];
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined1 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c;
  
  piVar1 = (int *)(param_1 + 8);
  *param_2 = 0;
  piVar2 = (int *)(param_1 + 4);
  iVar5 = *piVar2 + *piVar1 * 0x1510;
  iVar4 = *(int *)(iVar5 + 0x524);
  local_60 = 0x100;
  if (((uint)param_3 >> 8 & 1) == 0) {
    local_5c = 1;
    local_68 = FUN_101322b0(0x100);
    uVar7 = 0x10050;
    if (*(int *)(iVar5 + 0x520) < 0xb000) {
      uVar7 = 0x10040;
    }
    local_64 = local_68;
    auVar9 = FUN_1009e818(param_1 + 0x10,param_1 + 0x18,param_3,uVar7,&local_68,
                          *(undefined1 *)(param_1 + 0x2cc),0);
    iVar4 = local_68;
    if ((auVar9._0_8_ & 1) != 0) {
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*(undefined4 *)(*piVar2 + *piVar1 * 0x1510 + 0x510),auVar9._8_8_,
                         local_64 - local_68);
      (*extraout_w11)(uVar7,iVar4);
    }
  }
  else {
    local_5c = 1;
    local_68 = FUN_101322b0(0x100);
    local_50 = 0x100;
    local_4c = 1;
    local_64 = local_68;
    local_58 = FUN_101322b0(0x100);
    local_54 = local_58;
    auVar9 = FUN_100929f8(param_1 + 0x10,param_1 + 0x18,param_3,*(undefined1 *)(param_1 + 0x2cc),
                          iVar4 == 0x1002,0x10050,&local_68,0,0x20050);
    iVar5 = local_58;
    iVar4 = local_68;
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if ((auVar9._0_8_ & 1) != 0) {
      puVar3 = (undefined4 *)(*piVar2 + *piVar1 * 0x1510 + 0x510);
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*puVar3,auVar9._8_8_,local_64 - local_68);
      iVar8 = (*extraout_w11_00)(uVar7,iVar4);
      if (-1 < iVar8) {
        uVar7 = (*pcVar6)(*puVar3,extraout_x1,local_54 - iVar5);
        iVar8 = (*extraout_w11_01)(uVar7,iVar5);
        if (iVar8 < 0) {
          uVar7 = (*pcVar6)();
          (*extraout_w11_02)(uVar7);
          *(undefined4 *)param_2 = 0;
        }
      }
    }
    FUN_101322d0(iVar5);
  }
  FUN_101322d0(iVar4);
  return param_2;
}

