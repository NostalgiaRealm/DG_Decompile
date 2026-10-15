/*
 * FUN_10018d40 at 10018d40
 * undefined FUN_10018d40(void)
 * Address ranges: 10018d40-10018e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018d40(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  piVar1 = (int *)(param_1 + 0x1b0);
  iVar3 = FUN_1001c518(*(undefined4 *)(*piVar1 + 0x32dc),*(undefined4 *)(*piVar1 + 0x29e0));
  iVar4 = FUN_1001c518(*(undefined4 *)(*piVar1 + 0x32dc),*(undefined4 *)(*piVar1 + 0x29e4));
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 != -1) {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar5 = (*extraout_w11)(uVar5,iVar3);
    FUN_10023e18(uVar5);
  }
  if (iVar4 != -1) {
    uVar5 = (*pcVar2)();
    iVar3 = (*extraout_w11_00)(uVar5,iVar4);
    if ((*(char *)(*piVar1 + 0x2b5c) != '\0') && (*(char *)(iVar3 + 0x48) != '\0')) {
      FUN_10023e18(iVar3);
    }
  }
  return;
}

