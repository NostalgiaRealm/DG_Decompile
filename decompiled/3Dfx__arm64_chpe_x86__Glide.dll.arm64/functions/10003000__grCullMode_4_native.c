/*
 * _grCullMode@4_native at 10003000
 * undefined _grCullMode@4_native(void)
 * Address ranges: 10003000-100030df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grCullMode_4_native(uint param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  
  iVar5 = FUN_1001beb0();
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    iVar2 = *(int *)(iVar5 + 0xc);
    if (param_1 != *(byte *)(iVar2 + 0x102)) {
      if (((param_1 != 0) && (*(char *)(iVar2 + 0x11a) == '\x01')) &&
         (bVar4 = param_1 == 1, param_1 = 1, bVar4)) {
        param_1 = 2;
      }
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,param_1);
      *(char *)(*(int *)(iVar5 + 0xc) + 0x102) = (char)param_1;
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

