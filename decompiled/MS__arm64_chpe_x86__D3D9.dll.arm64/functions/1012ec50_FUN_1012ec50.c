/*
 * FUN_1012ec50 at 1012ec50
 * undefined FUN_1012ec50(void)
 * Address ranges: 1012ec50-1012ecb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1012ec50(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x48);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar2 + -1 == 0) {
      FUN_1012ee10(param_1,0);
      FUN_1012e040(param_1);
      FUN_1012e1e0(param_1);
      FUN_10132260(param_1,0x974);
    }
  }
  return;
}

