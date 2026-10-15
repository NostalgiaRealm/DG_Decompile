/*
 * FUN_1005cc50 at 1005cc50
 * undefined FUN_1005cc50(void)
 * Address ranges: 1005cc50-1005cd77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005cc50(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_1009508c;
  param_1[0x142] = &PTR_FUN_10095168;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_100950d4;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_1009f7c8;
  if (DAT_1009f7c8 != 0) {
    FUN_10058b50(DAT_1009f7c8);
    FUN_10079ff0(iVar6,0x38);
  }
  DAT_1009f7c8 = 0;
  param_1[0x1a8] = 0;
  FUN_10068748(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_1005cad0(puVar5);
  } while (iVar6 != 0);
  FUN_10072a00(puVar1);
  FUN_10067fb0(param_1);
  return;
}

