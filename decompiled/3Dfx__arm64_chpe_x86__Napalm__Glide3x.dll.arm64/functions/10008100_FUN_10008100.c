/*
 * FUN_10008100 at 10008100
 * undefined FUN_10008100(void)
 * Address ranges: 10008100-10008167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008100(int param_1)

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
      FUN_100081b8(param_1,0);
      FUN_100074f0(param_1);
      FUN_10007690(param_1);
      FUN_100833b0(param_1,0x974);
    }
  }
  return;
}

