/*
 * FUN_10002c58 at 10002c58
 * undefined FUN_10002c58(void)
 * Address ranges: 10002c58-10002d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10002c58(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  if (DAT_10170ab8 == 0) {
    if (DAT_10170ab0 != 0) {
      (*(code *)PTR_FUN_1016c07c)(DAT_10170ab0);
      DAT_10170ab0 = 0;
    }
    FUN_100d1d70();
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (DAT_10170acc != 0) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2);
      if (DAT_10170acc != 0) {
        uVar2 = (*pcVar1)();
        (*extraout_w11_00)(uVar2,1);
      }
      DAT_10170acc = 0;
      FUN_1012ec50(DAT_10170ad0);
      DAT_10170ad0 = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

