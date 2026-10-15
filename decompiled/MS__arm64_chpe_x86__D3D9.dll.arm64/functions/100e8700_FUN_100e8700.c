/*
 * FUN_100e8700 at 100e8700
 * undefined FUN_100e8700(void)
 * Address ranges: 100e8700-100e87fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e8700(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  uint uVar6;
  
  uVar6 = 0;
  while (iVar4 = FUN_10132550(param_2,uVar6 * 0x10 + 0x10163278,0x10), iVar4 != 0) {
    uVar6 = uVar6 + 1;
    if (2 < uVar6) {
      return 0x80004002;
    }
  }
  piVar1 = (int *)(param_1 + 0x18);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = iVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  *param_3 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5);
    return 0;
  }
  if (iVar4 + 1 != 1) {
    return 0;
  }
  piVar1 = (int *)(&DAT_000066bc + *(int *)(param_1 + 0x24));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  return 0;
}

