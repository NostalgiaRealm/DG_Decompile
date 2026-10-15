/*
 * FUN_180064390 at 180064390
 * longlong __cdecl FUN_180064390(longlong * param_1, longlong param_2, longlong param_3)
 * Address ranges: 180064390-1800643cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180064390(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((DAT_18006f9a0 & 1) != 0) {
    lVar3 = *param_1;
    if (lVar3 == param_3) {
      *param_1 = param_2;
    }
    return lVar3;
  }
  if (DAT_18006f9a0 != 0) {
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
  lVar3 = FUN_180064450();
  return lVar3;
}

