/*
 * FUN_1006b630 at 1006b630
 * undefined FUN_1006b630(void)
 * Address ranges: 1006b630-1006b673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006b630(int param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar5 = 0x887602cb;
  pcVar1 = (char *)(*(int *)(param_1 + 4) + 0x99);
  if (*pcVar1 != '\0') {
    piVar2 = (int *)(*(int *)(param_1 + 4) + 0x94);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    *pcVar1 = '\0';
    uVar5 = 0;
  }
  return uVar5;
}

