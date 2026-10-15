/*
 * FUN_100504a0 at 100504a0
 * undefined FUN_100504a0(void)
 * Address ranges: 100504a0-1005077b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100504a0(int param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int iVar9;
  undefined1 auVar10 [16];
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c;
  
  iVar1 = *(int *)(param_1 + 0xc) + 0x10;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 4);
  *param_2 = 0;
  iVar9 = iVar9 + iVar8 * 0x1510;
  puVar2 = (undefined4 *)(iVar9 + 0x510);
  local_50 = 0x100;
  local_4c = 1;
  local_58 = FUN_101322b0(0x100);
  iVar8 = param_1 + 0x10;
  local_54 = local_58;
  if (((uint)param_3 >> 8 & 1) == 0) {
    uVar5 = 0x10050;
    if (*(int *)(iVar9 + 0x520) < 0xb000) {
      uVar5 = 0x10040;
    }
    auVar10 = FUN_100a2720(iVar8,*(undefined4 *)(param_1 + 0x24),param_3,uVar3,uVar7,iVar1,
                           param_1 + 0x2c,uVar5,&local_58);
    iVar9 = local_58;
    if ((auVar10._0_8_ & 1) != 0) {
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*puVar2,auVar10._8_8_,local_54 - local_58);
      (*extraout_w11_02)(uVar7,iVar9);
    }
    goto LAB_10050750;
  }
  auVar10 = FUN_10093d88(iVar8,param_3,uVar7,iVar1,0x10050,&local_58);
  iVar9 = local_58;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((auVar10._0_8_ & 1) == 0) goto LAB_10050750;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*puVar2,auVar10._8_8_,local_54 - local_58);
  iVar6 = (*extraout_w11)(uVar5,iVar9);
  if (iVar6 < 0) goto LAB_10050750;
  local_50 = 0x100;
  local_4c = 1;
  local_58 = FUN_101322b0(0x100);
  local_54 = local_58;
  auVar10 = FUN_10094488(iVar8,param_3,uVar7,*(undefined4 *)(param_1 + 0x24),iVar1,uVar3,
                         param_1 + 0x2c,0x20050,&local_58);
  iVar1 = local_58;
  if ((auVar10._0_8_ & 1) == 0) {
LAB_10050678:
    uVar7 = (*pcVar4)();
    (*extraout_w11_01)(uVar7);
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar7 = (*pcVar4)(*puVar2,auVar10._8_8_,local_54 - local_58);
    iVar8 = (*extraout_w11_00)(uVar7,iVar1);
    if (iVar8 < 0) goto LAB_10050678;
  }
  FUN_101322d0(iVar1);
LAB_10050750:
  FUN_101322d0(iVar9);
  return param_2;
}

