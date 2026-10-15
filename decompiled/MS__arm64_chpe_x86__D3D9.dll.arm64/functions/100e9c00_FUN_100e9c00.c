/*
 * FUN_100e9c00 at 100e9c00
 * undefined FUN_100e9c00(void)
 * Address ranges: 100e9c00-100e9c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e9c00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int local_20 [4];
  
  local_20[0] = 0;
  iVar4 = FUN_100d14a0(param_1 + 0xe0,param_2,param_3,local_20);
  if (-1 < iVar4 && local_20[0] == 1) {
    piVar1 = (int *)(&DAT_000066bc + *(int *)(param_1 + 0x120));
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
  return iVar4;
}

