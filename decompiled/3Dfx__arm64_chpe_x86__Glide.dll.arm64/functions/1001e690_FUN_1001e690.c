/*
 * FUN_1001e690 at 1001e690
 * undefined FUN_1001e690(void)
 * Address ranges: 1001e690-1001e747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001e690(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = FUN_1001c150(param_1);
  if ((uVar4 & 1) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if (param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
      if (*(char *)(param_1 + 0x3c) == '\0') {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x793);
      }
      else {
        piVar1 = (int *)(param_1 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + param_2 * 0x4e8 + 0x2a4);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
      }
    }
    iVar5 = iVar5 + -0x10;
  }
  return iVar5;
}

