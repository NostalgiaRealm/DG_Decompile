/*
 * FUN_100eca00 at 100eca00
 * undefined FUN_100eca00(void)
 * Address ranges: 100eca00-100ecabb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100eca00(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  undefined4 local_30;
  undefined4 auStack_2c [3];
  
  auStack_2c[0] = 0;
  local_30 = param_2;
  (*(code *)PTR_FUN_10134070)(param_1 + 0x1c);
  bVar1 = true;
  iVar2 = FUN_100ecd30(param_1,&local_30);
  if ((iVar2 != 0) && (iVar2 = FUN_100ecf98(iVar2 + 4,auStack_2c), iVar2 != 0)) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar4 = (*extraout_w11)(uVar3);
    bVar1 = *(ulonglong *)(iVar2 + 0x10) <= uVar4;
  }
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x1c);
  return bVar1;
}

