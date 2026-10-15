/*
 * FUN_100d9030 at 100d9030
 * undefined FUN_100d9030(void)
 * Address ranges: 100d9030-100d9093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d9030(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != *(int *)(param_1 + 0xc28c)) {
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DataMemoryBarrier(2,3);
    }
    if (*(int *)(param_1 + 0xc28c) != 0) {
      FUN_100eb670(*(int *)(param_1 + 0xc28c));
    }
    *(int *)(param_1 + 0xc28c) = param_2;
    *(undefined1 *)(param_1 + 0xc2ee) = 1;
  }
  return;
}

