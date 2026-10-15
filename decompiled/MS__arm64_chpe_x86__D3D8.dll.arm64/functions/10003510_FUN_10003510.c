/*
 * FUN_10003510 at 10003510
 * undefined FUN_10003510(void)
 * Address ranges: 10003510-100035af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10003510(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auStack_10 [16];
  
  puVar5 = &DAT_101387c0 + param_2 * 0x8a;
  if ((&DAT_101387c8)[param_2 * 0x8a] == 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11_00)(uVar2,puVar5[4]);
    uVar1 = 2 < iVar4;
  }
  else {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    puVar3 = (undefined1 *)(*extraout_w11)(uVar2,auStack_10);
    uVar1 = *puVar3;
  }
  return uVar1;
}

