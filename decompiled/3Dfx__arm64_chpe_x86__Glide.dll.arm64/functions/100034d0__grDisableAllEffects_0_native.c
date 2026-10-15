/*
 * _grDisableAllEffects@0_native at 100034d0
 * undefined _grDisableAllEffects@0_native(void)
 * Address ranges: 100034d0-1000357b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDisableAllEffects_0_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = FUN_1001beb0();
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
    FUN_1001dc78(iVar4,4,0,4,0);
    FUN_1001ddb0(iVar4,7);
    FUN_1001de70(iVar4,0);
    FUN_1001db00(iVar4,0);
    FUN_1001e5d8(iVar4,0);
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

