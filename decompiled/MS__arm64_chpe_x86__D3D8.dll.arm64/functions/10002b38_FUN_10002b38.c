/*
 * FUN_10002b38 at 10002b38
 * undefined FUN_10002b38(void)
 * Address ranges: 10002b38-10002bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10002b38(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  if (DAT_1013ced4 == 0) {
    if (DAT_1013cecc != 0) {
      (*(code *)PTR_FUN_10134078)(DAT_1013cecc);
      DAT_1013cecc = 0;
    }
    FUN_100b08d0();
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (DAT_1013cee8 != 0) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2);
      if (DAT_1013cee8 != 0) {
        uVar2 = (*pcVar1)();
        (*extraout_w11_00)(uVar2,1);
      }
      DAT_1013cee8 = 0;
      FUN_100fb680(DAT_1013ceec);
      DAT_1013ceec = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

