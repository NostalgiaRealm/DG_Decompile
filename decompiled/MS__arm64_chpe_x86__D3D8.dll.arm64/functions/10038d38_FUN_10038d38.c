/*
 * FUN_10038d38 at 10038d38
 * undefined FUN_10038d38(void)
 * Address ranges: 10038d38-10038e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10038d38(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_40 [4];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,param_2,0,4,0,local_40);
  if (-1 < iVar3) {
    FUN_100ff660(local_40[0],param_3,param_4);
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,param_2,0);
  }
  return 0;
}

