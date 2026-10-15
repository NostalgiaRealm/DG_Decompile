/*
 * FUN_10029380 at 10029380
 * undefined FUN_10029380(void)
 * Address ranges: 10029380-1002947b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029380(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  if (*(char *)(iVar2 + 0x7e9) != *(char *)(iVar2 + 0x5d1)) {
    auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff);
    *(char *)(*piVar1 + 0x7e9) = *(char *)(iVar2 + 0x5d1);
  }
  iVar3 = *piVar1;
  if (((*(int *)(iVar3 + 0x7dc) != *(int *)(iVar2 + 0x5c4)) ||
      (*(char *)(iVar3 + 0x7eb) != *(char *)(iVar2 + 0x5d3))) ||
     (*(int *)(iVar3 + 0x7e0) != *(int *)(iVar2 + 0x5c8))) {
    *(int *)(iVar3 + 0x7dc) = *(int *)(iVar2 + 0x5c4);
    *(undefined1 *)(*piVar1 + 0x7eb) = *(undefined1 *)(iVar2 + 0x5d3);
    *(undefined4 *)(*piVar1 + 0x7e0) = *(undefined4 *)(iVar2 + 0x5c8);
  }
  return;
}

