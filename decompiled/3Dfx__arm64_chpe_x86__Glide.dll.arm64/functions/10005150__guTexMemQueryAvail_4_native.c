/*
 * _guTexMemQueryAvail@4_native at 10005150
 * undefined _guTexMemQueryAvail@4_native(void)
 * Address ranges: 10005150-100051f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _guTexMemQueryAvail_4_native(ulonglong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int extraout_w1;
  
  iVar5 = FUN_1001beb0(param_1,param_1 & 0xffffffff);
  iVar6 = 0;
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (extraout_w1 < *(int *)(*(int *)(iVar5 + 0x1c) + 0x797)) {
      iVar2 = *(int *)(iVar5 + extraout_w1 * 4 + 100);
      iVar6 = FUN_1001e690(iVar5,extraout_w1);
      iVar6 = iVar6 - iVar2;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return iVar6;
}

