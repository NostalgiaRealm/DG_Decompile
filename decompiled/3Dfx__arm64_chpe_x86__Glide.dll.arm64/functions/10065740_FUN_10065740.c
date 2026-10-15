/*
 * FUN_10065740 at 10065740
 * undefined FUN_10065740(void)
 * Address ranges: 10065740-1006580f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10065740(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined4 *puVar4;
  
  iVar1 = FUN_1007a3d0(0x15654);
  puVar2 = (undefined4 *)(iVar1 + 0x43U & 0xffffffc0);
  puVar2[-1] = iVar1;
  FUN_1006abe8(puVar2,param_1,&PTR_s_DGD3D11ROOT_1009e170);
  *puVar2 = &PTR_FUN_1009532c;
  puVar4 = puVar2 + 0x144;
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
    FUN_10065470(puVar4);
    puVar4 = puVar4 + 0x544;
  } while (iVar1 != 0);
  uVar3 = FUN_10068690(puVar2);
  if ((uVar3 & 1) == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(puVar2,0);
    FUN_1007adc0(puVar2[-1]);
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

