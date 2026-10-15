/*
 * FUN_1801041b0 at 1801041b0
 * undefined FUN_1801041b0(void)
 * Address ranges: 1801041b0-180104207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801041b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((ulonglong)param_1 & 7) != 0) {
    lVar3 = FUN_180104770(param_1,2,param_2,0,0);
    return lVar3;
  }
  if ((DAT_180246160 & 1) != 0) {
    LOAcquire();
    lVar3 = *param_1;
    *param_1 = lVar3 + param_2;
    LORelease();
    return lVar3 + param_2;
  }
  if (DAT_180246160 != 0) {
    do {
      lVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = lVar3 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3 + param_2;
  }
  lVar3 = FUN_180104350();
  return lVar3;
}

