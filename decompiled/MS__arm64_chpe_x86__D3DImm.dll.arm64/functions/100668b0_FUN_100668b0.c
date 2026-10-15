/*
 * FUN_100668b0 at 100668b0
 * undefined FUN_100668b0(void)
 * Address ranges: 100668b0-100669a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100668b0(undefined4 *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  code *extraout_w11;
  uint uVar3;
  
  uVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1004bc70(uVar2 & 0xffffffff);
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 0x14) = 0;
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(uVar1);
  }
  uVar3 = 0;
  do {
    if (param_1[uVar3 * 7 + 9] != 0) {
      uVar2 = FUN_10066628(uVar2,param_1 + uVar3 * 7 + 3,param_1[uVar3 * 7 + 9]);
      (param_1 + uVar3 * 7 + 3)[6] = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  *param_1 = &PTR_FUN_1009ca5c;
  FUN_10081d50(param_1,100);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return;
}

