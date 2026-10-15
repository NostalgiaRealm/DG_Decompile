/*
 * FUN_10023850 at 10023850
 * undefined FUN_10023850(void)
 * Address ranges: 10023850-100239e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023850(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  uint uVar4;
  undefined1 auVar5 [16];
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  if (*(char *)(iVar2 + 0x7e9) != *(char *)(iVar2 + 0x5d1)) {
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
    *(char *)(*piVar1 + 0x7e9) = *(char *)(iVar2 + 0x5d1);
  }
  iVar3 = *piVar1;
  if (((*(int *)(iVar3 + 0x7dc) != *(int *)(iVar2 + 0x5c4)) ||
      (*(char *)(iVar3 + 0x7eb) != *(char *)(iVar2 + 0x5d3))) ||
     (*(int *)(iVar3 + 0x7e0) != *(int *)(iVar2 + 0x5c8))) {
    *(int *)(iVar3 + 0x7dc) = *(int *)(iVar2 + 0x5c4);
    uVar4 = 0;
    *(undefined1 *)(*piVar1 + 0x7eb) = *(undefined1 *)(iVar2 + 0x5d3);
    *(undefined4 *)(*piVar1 + 0x7e0) = *(undefined4 *)(iVar2 + 0x5c8);
    do {
      FUN_10020030(param_1,uVar4,0x10,*(undefined4 *)(param_1 + 0x584 + uVar4 * 0x74));
      FUN_10020030(param_1,uVar4,0x11,*(undefined4 *)(param_1 + 0x588 + uVar4 * 0x74));
      FUN_10020030(param_1,uVar4,0x12,*(undefined4 *)(param_1 + 0x58c + uVar4 * 0x74));
      FUN_10020030(param_1,uVar4,0x15,*(undefined4 *)(param_1 + 0x598 + uVar4 * 0x74));
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  return;
}

