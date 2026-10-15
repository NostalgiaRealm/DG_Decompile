/*
 * FUN_100d5e00 at 100d5e00
 * undefined FUN_100d5e00(void)
 * Address ranges: 100d5e00-100d5ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100d5e00(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined4 *puVar4;
  
  iVar1 = FUN_100febf0(0x15654);
  puVar2 = (undefined4 *)(iVar1 + 0x43U & 0xffffffc0);
  puVar2[-1] = iVar1;
  FUN_100dce28(puVar2,param_1,&PTR_s_DGD3D11ROOT_10135160);
  *puVar2 = &PTR_FUN_1012a8f8;
  puVar4 = puVar2 + 0x144;
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
    FUN_100d5b30(puVar4);
    puVar4 = puVar4 + 0x544;
  } while (iVar1 != 0);
  uVar3 = FUN_100da820(puVar2);
  if ((uVar3 & 1) == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(puVar2,0);
    FUN_100fed20(puVar2[-1]);
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

