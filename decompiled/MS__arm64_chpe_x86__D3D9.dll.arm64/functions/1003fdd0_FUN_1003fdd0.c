/*
 * FUN_1003fdd0 at 1003fdd0
 * undefined FUN_1003fdd0(void)
 * Address ranges: 1003fdd0-1003febf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1003fdd0(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x78) - 3U < 2) {
    puVar6 = (undefined4 *)(iVar1 + 0x50);
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(uVar5,param_2,*puVar6);
    uVar3 = *(int *)(iVar1 + 0x60) == -1;
    if (cVar4 == '\0') {
      if ((bool)uVar3) {
        uVar3 = 0;
      }
      else {
        puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x54) + *(int *)(iVar1 + 0x60) * 4);
        uVar5 = (*pcVar2)();
        uVar3 = (*extraout_w11_00)(uVar5,param_2,*puVar6);
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

