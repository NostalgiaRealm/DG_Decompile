/*
 * FUN_10118f10 at 10118f10
 * undefined FUN_10118f10(void)
 * Address ranges: 10118f10-10119037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10118f10(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_10160210;
  param_1[0x142] = &PTR_FUN_101602ec;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_10160258;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_10175b7c;
  if (DAT_10175b7c != 0) {
    FUN_1011e1c0(DAT_10175b7c);
    FUN_10132260(iVar6,0x38);
  }
  DAT_10175b7c = 0;
  param_1[0x1a8] = 0;
  FUN_1010d498(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_10118d90(puVar5);
  } while (iVar6 != 0);
  FUN_1012a600(puVar1);
  FUN_1010cd00(param_1);
  return;
}

