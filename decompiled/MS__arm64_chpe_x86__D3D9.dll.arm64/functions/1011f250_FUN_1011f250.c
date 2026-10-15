/*
 * FUN_1011f250 at 1011f250
 * undefined FUN_1011f250(void)
 * Address ranges: 1011f250-1011f30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1011f250(int param_1,undefined4 param_2)

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
  (*(code *)PTR_FUN_1016c074)(param_1 + 0x1c);
  bVar1 = true;
  iVar2 = FUN_1011f580(param_1,&local_30);
  if ((iVar2 != 0) && (iVar2 = FUN_1011f7e8(iVar2 + 4,auStack_2c), iVar2 != 0)) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar4 = (*extraout_w11)(uVar3);
    bVar1 = *(ulonglong *)(iVar2 + 0x10) <= uVar4;
  }
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x1c);
  return bVar1;
}

