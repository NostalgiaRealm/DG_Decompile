/*
 * _guDrawPolygonVertexListWithClip@8_native at 100058a0
 * undefined _guDrawPolygonVertexListWithClip@8_native(void)
 * Address ranges: 100058a0-10005953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guDrawPolygonVertexListWithClip_8_native(undefined8 param_1,ulonglong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar7 [16];
  
  uVar5 = param_2 & 0xffffffff;
  iVar4 = FUN_1001beb0(param_1,param_2,uVar5);
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
      iVar6 = 0x400;
      if (extraout_w11 < 0x401) {
        iVar6 = extraout_w11;
      }
      auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (*(undefined4 *)(iVar4 + 0xc),iVar6);
      (*extraout_w11_00)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_,uVar5 & 0xffffffff,1);
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

