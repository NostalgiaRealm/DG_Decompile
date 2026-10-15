/*
 * FUN_100720b0 at 100720b0
 * undefined FUN_100720b0(void)
 * Address ranges: 100720b0-100721d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100720b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_100b2e58;
  param_1[0x142] = &PTR_FUN_100b2f34;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_100b2ea0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_100c2a70;
  if (DAT_100c2a70 != 0) {
    FUN_10077e70(DAT_100c2a70);
    FUN_10091460(iVar6,0x38);
  }
  DAT_100c2a70 = 0;
  param_1[0x1a8] = 0;
  FUN_1006c6a8(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_10071f30(puVar5);
  } while (iVar6 != 0);
  FUN_100863c0(puVar1);
  FUN_1006bf10(param_1);
  return;
}

