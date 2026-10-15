/*
 * FUN_100e66c0 at 100e66c0
 * undefined FUN_100e66c0(void)
 * Address ranges: 100e66c0-100e67e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e66c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_1012ab10;
  param_1[0x142] = &PTR_FUN_1012abec;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_1012ab58;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_1013d1a4;
  if (DAT_1013d1a4 != 0) {
    FUN_100eb970(DAT_1013d1a4);
    FUN_100fec90(iVar6,0x38);
  }
  DAT_1013d1a4 = 0;
  param_1[0x1a8] = 0;
  FUN_100dad58(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_100e6540(puVar5);
  } while (iVar6 != 0);
  FUN_100f7030(puVar1);
  FUN_100da5c0(param_1);
  return;
}

