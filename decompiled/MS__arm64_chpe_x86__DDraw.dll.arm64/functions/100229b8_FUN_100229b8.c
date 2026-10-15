/*
 * FUN_100229b8 at 100229b8
 * undefined FUN_100229b8(void)
 * Address ranges: 100229b8-10022a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100229b8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  code *extraout_w11;
  int local_10;
  int local_c;
  
  if ((*(int *)(param_1 + 0x98) != 0) && (1 < *(int *)(param_1 + 0x1c) - 0x19U)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x98) +
                    (param_2 + *(int *)(param_1 + 0x2c) * param_3) * 0x20);
    local_10 = *piVar1;
    local_c = piVar1[1] + *piVar1;
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,0,&local_10);
  }
  return;
}

