/*
 * FUN_10045250 at 10045250
 * undefined FUN_10045250(void)
 * Address ranges: 10045250-1004532f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10045250(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auStack_30 [12];
  int local_24;
  
  uVar3 = FUN_10044618(param_1);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 1) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2,auStack_30,2,0,0);
      if (local_24 != 0) {
        uVar2 = (*pcVar1)();
        (*extraout_w11_00)(uVar2);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

