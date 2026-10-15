/*
 * FUN_10005800 at 10005800
 * undefined FUN_10005800(void)
 * Address ranges: 10005800-10005993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005800(int param_1)

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
      FUN_10002110(param_1,uVar4,0x10,*(undefined4 *)(param_1 + 0x534 + uVar4 * 100));
      FUN_10002110(param_1,uVar4,0x11,*(undefined4 *)(param_1 + 0x538 + uVar4 * 100));
      FUN_10002110(param_1,uVar4,0x12,*(undefined4 *)(param_1 + 0x53c + uVar4 * 100));
      FUN_10002110(param_1,uVar4,0x15,*(undefined4 *)(param_1 + 0x548 + uVar4 * 100));
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  return;
}

