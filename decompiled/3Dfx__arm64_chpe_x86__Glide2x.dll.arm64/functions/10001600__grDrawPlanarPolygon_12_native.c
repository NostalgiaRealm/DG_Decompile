/*
 * _grDrawPlanarPolygon@12_native at 10001600
 * undefined _grDrawPlanarPolygon@12_native(void)
 * Address ranges: 10001600-100016b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPlanarPolygon_12_native(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar6 [16];
  
  param_2 = param_2 & 0xffffffff;
  iVar4 = FUN_1001ba50();
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
    if (2 < extraout_w11) {
      iVar5 = 0x400;
      if (extraout_w11 < 0x401) {
        iVar5 = extraout_w11;
      }
      auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (*(undefined4 *)(iVar4 + 0xc),iVar5);
      (*extraout_w11_00)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_,param_2 & 0xffffffff,
                         param_3 & 0xffffffff);
    }
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

