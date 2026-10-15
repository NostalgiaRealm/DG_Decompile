/*
 * FUN_100344d0 at 100344d0
 * undefined FUN_100344d0(void)
 * Address ranges: 100344d0-10034527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100344d0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  DAT_1013cf20 = DAT_1013cf20 + -1;
  (*(code *)PTR_FUN_101340bc)(DAT_1013cf24);
  piVar1 = (int *)(DAT_1013d014 + 0x20);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  return;
}

