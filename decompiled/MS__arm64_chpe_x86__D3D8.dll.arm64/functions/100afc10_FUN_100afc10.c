/*
 * FUN_100afc10 at 100afc10
 * undefined FUN_100afc10(void)
 * Address ranges: 100afc10-100afc4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100afc10(ulonglong param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  do {
    piVar4 = (int *)param_1;
    iVar1 = *piVar4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1 & 0xffffffff,0x10);
    if (bVar3) {
      *piVar4 = iVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return piVar4[1] + iVar1 == 0;
}

