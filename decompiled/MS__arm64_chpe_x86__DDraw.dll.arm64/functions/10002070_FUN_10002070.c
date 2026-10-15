/*
 * FUN_10002070 at 10002070
 * undefined FUN_10002070(void)
 * Address ranges: 10002070-100020fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002070(void)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (DAT_100be0cc != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    if (DAT_100be0cc != 0) {
      uVar2 = (*pcVar1)();
      (*extraout_w11_00)(uVar2,1);
    }
    DAT_100be0cc = 0;
    FUN_1008d9d0(DAT_100be0c0);
    DAT_100be0c0 = 0;
  }
  return;
}

