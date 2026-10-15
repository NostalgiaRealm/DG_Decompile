/*
 * FUN_10069eb0 at 10069eb0
 * undefined FUN_10069eb0(void)
 * Address ranges: 10069eb0-10069f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10069eb0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_20;
  int local_1c [3];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_20 = 0;
  iVar4 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    if (*(int *)(param_2 + 0x34) == 3) {
      iVar4 = 1;
    }
    else {
      local_1c[0] = 0;
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar3 = (*extraout_w11)(uVar2,&local_20,local_1c);
      iVar4 = local_20;
      if ((-1 < iVar3) && (local_1c[0] != 0)) {
        uVar2 = (*pcVar1)();
        (*extraout_w11_00)(uVar2);
        iVar4 = local_20;
      }
    }
  }
  return iVar4 == 1;
}

