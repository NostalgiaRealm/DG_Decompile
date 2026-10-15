/*
 * FUN_1008d9d0 at 1008d9d0
 * undefined FUN_1008d9d0(void)
 * Address ranges: 1008d9d0-1008da37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008d9d0(int param_1)

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
      FUN_1008e1f8(param_1,0);
      FUN_1008cdc0(param_1);
      FUN_1008cf60(param_1);
      FUN_10091460(param_1,0x974);
    }
  }
  return;
}

