/*
 * FUN_100c18d0 at 100c18d0
 * undefined FUN_100c18d0(void)
 * Address ranges: 100c18d0-100c193f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c18d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  
  piVar1 = (int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + -0xb4);
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
    FUN_100c1570(param_1 + -200);
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

