/*
 * FUN_1001db60 at 1001db60
 * undefined FUN_1001db60(void)
 * Address ranges: 1001db60-1001dc6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001db60(int param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  longlong local_40 [2];
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  piVar1 = (int *)(param_1 + 0x365c);
  iVar8 = FUN_1001c3b8(*piVar1);
  (*(code *)PTR_FUN_100a80b0)(local_40);
  uVar10 = *(ulonglong *)(*piVar1 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x9c);
  local_40[0] = local_40[0] - *(longlong *)(*piVar1 + 0x18);
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x1001dbf0);
    (*(code *)uVar6)();
  }
  lVar3 = 0;
  if (uVar10 != 0) {
    lVar3 = local_40[0] / (longlong)uVar10;
  }
  uVar4 = 0;
  if (uVar10 != 0) {
    uVar4 = ((local_40[0] - lVar3 * uVar10) * (ulonglong)(uVar9 + 1)) / uVar10;
  }
  (*pcVar5)();
  cVar7 = (*extraout_w11_00)(param_1);
  uVar2 = 0xffff03f;
  if (uVar4 != uVar9) {
    uVar2 = 0xffff07f;
  }
  uVar9 = 0x280;
  if (cVar7 == '\0') {
    uVar9 = 0;
  }
  return uVar2 | (*(uint *)(*piVar1 + 0x120) | iVar8 << 0x12) << 10 | uVar9;
}

