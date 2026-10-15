/*
 * FUN_10019468 at 10019468
 * undefined FUN_10019468(void)
 * Address ranges: 10019468-10019587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019468(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  piVar1 = (int *)(param_1 + 0x1b0);
  iVar3 = FUN_1001cae0(*(undefined4 *)(*piVar1 + 0x365c),*(undefined4 *)(*piVar1 + 0x2b1c));
  iVar4 = FUN_1001cae0(*(undefined4 *)(*piVar1 + 0x365c),*(undefined4 *)(*piVar1 + 0x2b20));
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 != -1) {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar5 = (*extraout_w11)(uVar5,iVar3);
    FUN_10024830(uVar5);
  }
  if (iVar4 != -1) {
    uVar5 = (*pcVar2)();
    iVar3 = (*extraout_w11_00)(uVar5,iVar4);
    if ((*(char *)(*piVar1 + 0x2c9c) != '\0') && (*(char *)(iVar3 + 0x48) != '\0')) {
      FUN_10024830(iVar3);
    }
  }
  return;
}

