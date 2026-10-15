/*
 * FUN_10053a90 at 10053a90
 * undefined FUN_10053a90(void)
 * Address ranges: 10053a90-10053b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10053a90(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *extraout_w11;
  undefined4 local_30 [4];
  
  local_30[0] = param_2;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_2);
  piVar2 = (int *)FUN_100594a0(param_1 + 0x17c8,local_30);
  if (piVar2 == (int *)0x0) {
    iVar3 = FUN_10062ed0(*(undefined4 *)(*(int *)(param_1 + 0xa70) + 0xc),param_2);
    if (iVar3 == 0) {
      iVar3 = iVar1;
    }
    FUN_10053a40(param_1,iVar3,param_2);
  }
  else {
    iVar3 = *piVar2;
  }
  return iVar3;
}

