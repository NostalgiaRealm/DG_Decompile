/*
 * FUN_100ece10 at 100ece10
 * undefined FUN_100ece10(void)
 * Address ranges: 100ece10-100ece6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ece10(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  
  piVar2 = (int *)(param_1 + (param_2 + 0xe) * 4);
  iVar4 = *piVar2;
  piVar1 = (int *)(iVar4 + 0x98);
  do {
    iVar3 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar6) {
      *piVar1 = iVar3 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(iVar4 + 0x94) + iVar3 + -1 == 0) {
    FUN_100ec338(iVar4);
  }
  *piVar2 = 0;
  return;
}

