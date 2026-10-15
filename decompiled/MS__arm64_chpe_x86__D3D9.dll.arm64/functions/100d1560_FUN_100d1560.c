/*
 * FUN_100d1560 at 100d1560
 * undefined FUN_100d1560(void)
 * Address ranges: 100d1560-100d159b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100d1560(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  return *(int *)(param_1 + 8) + iVar2 == 0;
}

