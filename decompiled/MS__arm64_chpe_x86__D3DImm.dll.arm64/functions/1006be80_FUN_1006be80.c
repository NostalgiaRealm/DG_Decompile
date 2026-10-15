/*
 * FUN_1006be80 at 1006be80
 * undefined FUN_1006be80(void)
 * Address ranges: 1006be80-1006bebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006be80(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = (int *)(iVar2 + 0xc);
  if (*piVar1 != 0) {
    *piVar1 = 0;
    piVar1 = (int *)(iVar2 + 0x1c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return 0;
}

