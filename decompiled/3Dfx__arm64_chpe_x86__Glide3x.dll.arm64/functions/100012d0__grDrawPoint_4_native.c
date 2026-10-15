/*
 * _grDrawPoint@4_native at 100012d0
 * undefined _grDrawPoint@4_native(void)
 * Address ranges: 100012d0-10001377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPoint_4_native(ulonglong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined4 *puVar8;
  code *extraout_w11;
  
  uVar6 = param_1 & 0xffffffff;
  iVar4 = FUN_100093b8(param_1,param_2,uVar6);
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
    piVar7 = (int *)(iVar4 + 0xc);
    FUN_1000c798(*piVar7);
    puVar8 = (undefined4 *)(*piVar7 + 0x294);
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,*puVar8,uVar6 & 0xffffffff);
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

