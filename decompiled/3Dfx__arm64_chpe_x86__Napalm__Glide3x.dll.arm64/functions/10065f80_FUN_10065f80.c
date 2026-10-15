/*
 * FUN_10065f80 at 10065f80
 * undefined FUN_10065f80(void)
 * Address ranges: 10065f80-100660a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065f80(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_1009f2e8;
  param_1[0x142] = &PTR_FUN_1009f3c4;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_1009f330;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_100aab00;
  if (DAT_100aab00 != 0) {
    FUN_10061e90(DAT_100aab00);
    FUN_100833b0(iVar6,0x38);
  }
  DAT_100aab00 = 0;
  param_1[0x1a8] = 0;
  FUN_10071a88(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_10065e00(puVar5);
  } while (iVar6 != 0);
  FUN_1007bd40(puVar1);
  FUN_100712f0(param_1);
  return;
}

