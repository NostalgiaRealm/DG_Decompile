/*
 * FUN_100c04f0 at 100c04f0
 * undefined FUN_100c04f0(void)
 * Address ranges: 100c04f0-100c055f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c04f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  
  piVar1 = (int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + -0x3c);
  do {
    iVar2 = *piVar1 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar6) {
      *piVar1 = iVar2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_1001c640(param_1 + -0x68);
  }
  if (iVar2 == 0) {
    iVar3 = 0x58e0;
    if (iVar4 != 0) {
      iVar3 = iVar4;
    }
    FUN_100b1f90(iVar3);
  }
  return iVar2;
}

