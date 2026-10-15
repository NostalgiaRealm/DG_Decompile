/*
 * FUN_100df7c0 at 100df7c0
 * undefined FUN_100df7c0(void)
 * Address ranges: 100df7c0-100df843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100df7c0(undefined8 param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  iVar3 = -8;
  if (param_2 != 0) {
    iVar3 = param_2 + -8;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_2 + -8;
  }
  FUN_100e95d0(iVar2);
  if (param_3 == '\0') {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = iVar3;
    }
    piVar1 = (int *)(iVar2 + 0xe8);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (*(int *)(iVar2 + 0xe4) + iVar3 + -1 == 0) {
      FUN_100e9550(iVar2);
    }
  }
  return;
}

