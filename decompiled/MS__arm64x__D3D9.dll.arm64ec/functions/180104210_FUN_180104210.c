/*
 * FUN_180104210 at 180104210
 * undefined FUN_180104210(void)
 * Address ranges: 180104210-18010426b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180104210(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  
  if (((ulonglong)param_1 & 3) != 0) {
    uVar4 = FUN_1801043a0(param_1,1,param_2,param_3,0);
    return uVar4;
  }
  if ((DAT_180246160 & 1) != 0) {
    uVar1 = *param_1;
    if (uVar1 == (uint)param_3) {
      *param_1 = (uint)param_2;
    }
    return (ulonglong)uVar1;
  }
  if (DAT_180246160 == 0) {
    uVar4 = FUN_180104350();
    return uVar4;
  }
  do {
    uVar1 = *param_1;
    if (uVar1 != (uint)param_3) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = (uint)param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return (ulonglong)uVar1;
}

