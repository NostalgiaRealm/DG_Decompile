/*
 * _grDrawLine@8_native at 10001380
 * undefined _grDrawLine@8_native(void)
 * Address ranges: 10001380-1000142b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawLine_8_native(ulonglong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  undefined1 auVar8 [16];
  
  uVar5 = param_1 & 0xffffffff;
  iVar4 = FUN_100093b8(param_1,param_2,uVar5);
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
    piVar6 = (int *)(iVar4 + 0xc);
    FUN_1000c798(*piVar6);
    puVar7 = (undefined4 *)(*piVar6 + 0x294);
    auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar8._0_8_ & 0xffffffff,*puVar7,uVar5 & 0xffffffff,auVar8._8_8_ & 0xffffffff);
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

