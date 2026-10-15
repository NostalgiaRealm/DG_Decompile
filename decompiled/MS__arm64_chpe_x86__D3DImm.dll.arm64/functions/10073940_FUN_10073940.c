/*
 * FUN_10073940 at 10073940
 * undefined FUN_10073940(void)
 * Address ranges: 10073940-10073a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073940(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &DAT_1009cf80;
  param_1[0x142] = &PTR_FUN_1009d05c;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_1009cfc8;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_100acbc8;
  if (DAT_100acbc8 != 0) {
    FUN_10077840(DAT_100acbc8);
    FUN_10081d50(iVar6,0x38);
  }
  DAT_100acbc8 = 0;
  param_1[0x1a8] = 0;
  FUN_10070900(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_100737c0(puVar5);
  } while (iVar6 != 0);
  FUN_1007c9c0(puVar1);
  FUN_1006fe50(param_1);
  return;
}

