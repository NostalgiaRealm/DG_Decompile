/*
 * FUN_1800607e0 at 1800607e0
 * longlong __cdecl FUN_1800607e0(longlong * param_1, longlong param_2)
 * Address ranges: 1800607e0-18006081b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800607e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((DAT_18006b840 & 1) != 0) {
    LOAcquire();
    lVar3 = *param_1;
    *param_1 = lVar3 + param_2;
    LORelease();
    return lVar3 + param_2;
  }
  if (DAT_18006b840 != 0) {
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
  lVar3 = FUN_180060920();
  return lVar3;
}

