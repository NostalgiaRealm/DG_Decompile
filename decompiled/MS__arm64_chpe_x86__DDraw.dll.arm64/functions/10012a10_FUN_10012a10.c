/*
 * FUN_10012a10 at 10012a10
 * undefined FUN_10012a10(void)
 * Address ranges: 10012a10-10012b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10012a10(int param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar5 [16];
  undefined4 local_4c;
  
  FUN_1006e8d0(*(int *)(param_1 + -0x48),param_2,param_1 + -0x88);
  auVar5 = FUN_10012660(param_1 + -0x88);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if ((auVar5._0_8_ & 1) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(*(int *)(param_1 + -0x44) + 4),auVar5._8_8_,
                       (int)param_2 + *(int *)(param_1 + -0x5c) * param_3);
    iVar3 = (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + -0x14));
    if (-1 < iVar3) {
      uVar4 = (*pcVar1)(*(undefined4 *)(*(int *)(param_1 + -0x44) + 4),extraout_x1,
                        (int)param_2 + *(int *)(param_1 + -0x5c) * param_3);
      (*extraout_w11_00)(uVar4,*(undefined4 *)(param_1 + -0x14));
      uVar4 = local_4c;
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + -0x48) + 0x4a0);
  return uVar4;
}

