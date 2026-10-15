/*
 * FUN_100c0bb0 at 100c0bb0
 * undefined FUN_100c0bb0(void)
 * Address ranges: 100c0bb0-100c0c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c0bb0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)(param_1 + 4);
  uVar5 = 0;
  if (*piVar1 != 0) {
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (*(int *)(param_1 + 8) + iVar2 + -1 == 0) {
      FUN_100c09d8(param_1 + -0x94);
    }
    uVar5 = FUN_100c18d0(*(int *)(param_1 + -0x34) + 200);
  }
  return uVar5;
}

