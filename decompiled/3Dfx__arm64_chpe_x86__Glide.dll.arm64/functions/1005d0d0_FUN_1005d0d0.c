/*
 * FUN_1005d0d0 at 1005d0d0
 * undefined FUN_1005d0d0(void)
 * Address ranges: 1005d0d0-1005d1f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005d0d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_100950bc;
  param_1[0x142] = &PTR_FUN_10095198;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_10095104;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_1009f7fc;
  if (DAT_1009f7fc != 0) {
    FUN_10058fd0(DAT_1009f7fc);
    FUN_1007a470(iVar6,0x38);
  }
  DAT_1009f7fc = 0;
  param_1[0x1a8] = 0;
  FUN_10068bc8(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_1005cf50(puVar5);
  } while (iVar6 != 0);
  FUN_10072e80(puVar1);
  FUN_10068430(param_1);
  return;
}

