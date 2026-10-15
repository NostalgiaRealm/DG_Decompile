/*
 * _grAADrawTriangle@24_native at 100018c0
 * undefined _grAADrawTriangle@24_native(void)
 * Address ranges: 100018c0-1000196b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawTriangle_24_native
               (ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
               ulonglong param_5,ulonglong param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  
  param_1 = param_1 & 0xffffffff;
  iVar4 = FUN_1001beb0();
  if (*(char *)(iVar4 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar4 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,param_1 & 0xffffffff,auVar5._8_8_ & 0xffffffff,
                    param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,
                    param_6 & 0xffffffff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

