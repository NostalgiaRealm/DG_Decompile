/*
 * FUN_100bf800 at 100bf800
 * undefined FUN_100bf800(void)
 * Address ranges: 100bf800-100bf86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bf800(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  piVar1 = (int *)(param_1 + 0xe0);
  iVar3 = *(int *)(param_1 + 0xec);
  do {
    iVar2 = *piVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar5) {
      *piVar1 = iVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(param_1 + 0xe4) + iVar2 == 0) {
    FUN_100bf080(param_1);
  }
  if (iVar2 == 0) {
    FUN_100b1f90(iVar3 + 0x58e0);
  }
  return iVar2;
}

