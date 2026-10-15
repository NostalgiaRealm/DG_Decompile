/*
 * _grDisableAllEffects@0_native at 10003410
 * undefined _grDisableAllEffects@0_native(void)
 * Address ranges: 10003410-100034bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDisableAllEffects_0_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = FUN_1000ae60();
  if (*(char *)(iVar4 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar4 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    FUN_1000d708(iVar4,4,0,4,0);
    FUN_1000d878(iVar4,7);
    FUN_1000d938(iVar4,0);
    FUN_1000d590(iVar4,0);
    FUN_1000e120(iVar4,0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

