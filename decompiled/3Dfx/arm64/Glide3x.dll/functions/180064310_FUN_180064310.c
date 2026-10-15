/*
 * FUN_180064310 at 180064310
 * longlong __cdecl FUN_180064310(longlong * param_1, longlong param_2)
 * Address ranges: 180064310-18006434b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180064310(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((DAT_18006f9a0 & 1) != 0) {
    LOAcquire();
    lVar3 = *param_1;
    *param_1 = lVar3 + param_2;
    LORelease();
    return lVar3 + param_2;
  }
  if (DAT_18006f9a0 != 0) {
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
  lVar3 = FUN_180064450();
  return lVar3;
}

