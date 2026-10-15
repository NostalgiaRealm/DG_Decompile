/*
 * FUN_180060820 at 180060820
 * ulonglong __cdecl FUN_180060820(uint * param_1, uint param_2, uint param_3)
 * Address ranges: 180060820-18006085f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180060820(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  
  if ((DAT_18006b840 & 1) != 0) {
    uVar1 = *param_1;
    if (uVar1 == param_3) {
      *param_1 = param_2;
    }
    return (ulonglong)uVar1;
  }
  if (DAT_18006b840 == 0) {
    uVar4 = FUN_180060920();
    return uVar4;
  }
  do {
    uVar1 = *param_1;
    if (uVar1 != param_3) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return (ulonglong)uVar1;
}

