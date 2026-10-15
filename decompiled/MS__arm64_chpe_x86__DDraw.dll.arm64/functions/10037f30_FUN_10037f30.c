/*
 * FUN_10037f30 at 10037f30
 * undefined FUN_10037f30(void)
 * Address ranges: 10037f30-10038007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037f30(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *(int *)(param_1 + 0xf4);
  if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x1b8) >> 0xf & 1) != 0)) &&
     ((&DAT_100be33a)[*(int *)(param_1 + 0x11c) * 0x228] != '\0')) {
    puVar5 = (undefined4 *)(param_1 + 0xfc);
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar3 = (*extraout_w11)(uVar4,*puVar5);
    if (cVar3 != '\0') {
      uVar4 = (*pcVar2)();
      (*extraout_w11_00)(uVar4);
      FUN_1004f930(*(int *)(param_1 + 0xf4),0,0,param_2);
    }
  }
  return;
}

