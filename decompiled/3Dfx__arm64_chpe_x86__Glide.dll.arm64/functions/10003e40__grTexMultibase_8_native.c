/*
 * _grTexMultibase@8_native at 10003e40
 * undefined _grTexMultibase@8_native(void)
 * Address ranges: 10003e40-10003ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibase_8_native(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int extraout_w1;
  int extraout_w11;
  
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
    if (extraout_w11 < *(int *)(*(int *)(iVar5 + 0x1c) + 0x797)) {
      pcVar2 = (char *)(extraout_w11 * 0x41 + *(int *)(iVar5 + 0xc) + 0x191);
      if ((bool)*pcVar2 != (extraout_w1 != 0)) {
        *pcVar2 = extraout_w1 != 0;
        FUN_1001f760(iVar5,extraout_w11,1);
      }
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

