/*
 * FUN_180104270 at 180104270
 * undefined FUN_180104270(void)
 * Address ranges: 180104270-1801042cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180104270(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((ulonglong)param_1 & 7) != 0) {
    lVar3 = FUN_180104770(param_1,1,param_2,param_3,0);
    return lVar3;
  }
  if ((DAT_180246160 & 1) == 0) {
    if (DAT_180246160 == 0) {
      lVar3 = FUN_180104350();
      return lVar3;
    }
    do {
      lVar3 = *param_1;
      if (lVar3 != param_3) {
        return lVar3;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_1;
  if (lVar3 == param_3) {
    *param_1 = param_2;
  }
  return lVar3;
}

