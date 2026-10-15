/*
 * _grSstOrigin@4_native at 10002730
 * undefined _grSstOrigin@4_native(void)
 * Address ranges: 10002730-1000285f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstOrigin_4_native(uint param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  iVar6 = FUN_1001beb0();
  if (*(char *)(iVar6 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar6 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    piVar2 = (int *)(iVar6 + 0xc);
    if ((param_1 != *(byte *)(*piVar2 + 0x11a)) && (param_1 < 2)) {
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar7,param_1);
      *(char *)(*piVar2 + 0x11a) = (char)param_1;
      cVar3 = *(char *)(*piVar2 + 0x102);
      if (cVar3 != '\0') {
        uVar7 = 1;
        if (cVar3 == '\x01') {
          uVar7 = 2;
        }
        uVar7 = (*pcVar5)(*piVar2,uVar7);
        (*extraout_w11_00)(uVar7);
      }
      uVar7 = (*pcVar5)(*piVar2,*piVar2 + 0x10a);
      (*extraout_w11_01)(uVar7);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

