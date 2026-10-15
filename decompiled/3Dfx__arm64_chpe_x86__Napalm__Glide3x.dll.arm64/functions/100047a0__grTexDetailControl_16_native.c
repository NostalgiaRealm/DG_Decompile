/*
 * _grTexDetailControl@16_native at 100047a0
 * undefined _grTexDetailControl@16_native(void)
 * Address ranges: 100047a0-100048e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDetailControl_16_native(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_w1;
  int iVar7;
  uint uVar8;
  uint extraout_w11;
  code *extraout_w11_00;
  float extraout_s0;
  float fVar9;
  float fVar10;
  
  iVar5 = FUN_1000ae60();
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
    if (param_1 < *(int *)(*(int *)(iVar5 + 0x1c) + 0x797)) {
      iVar7 = extraout_w1;
      if (extraout_w1 < -0x20) {
        iVar7 = -0x20;
      }
      if (0x1f < iVar7) {
        iVar7 = 0x1f;
      }
      uVar8 = extraout_w11;
      if (7 < extraout_w11) {
        uVar8 = 7;
      }
      fVar10 = 0.0;
      piVar2 = (int *)(iVar5 + 0xc);
      if (0.0 <= extraout_s0) {
        fVar10 = extraout_s0;
      }
      fVar9 = 1.0;
      if (fVar10 <= 1.0) {
        fVar9 = fVar10;
      }
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_00)(uVar6,param_1,iVar7);
      *(char *)(*piVar2 + param_1 * 0x9d + 0x253) = (char)iVar7;
      *(char *)(*piVar2 + param_1 * 0x9d + 0x254) = (char)uVar8;
      *(float *)(*piVar2 + param_1 * 0x9d + 0x255) = fVar9;
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

