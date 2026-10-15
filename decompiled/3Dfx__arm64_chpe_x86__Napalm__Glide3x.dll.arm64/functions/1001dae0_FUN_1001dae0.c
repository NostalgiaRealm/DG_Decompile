/*
 * FUN_1001dae0 at 1001dae0
 * undefined FUN_1001dae0(void)
 * Address ranges: 1001dae0-1001db5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001dae0(int param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong local_20 [2];
  
  (*(code *)PTR_FUN_100a80b0)(local_20);
  uVar4 = *(ulonglong *)(*(int *)(param_1 + 0x365c) + 0x10);
  local_20[0] = local_20[0] - *(longlong *)(*(int *)(param_1 + 0x365c) + 0x18);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x1001db34);
    (*(code *)uVar3)();
  }
  lVar2 = 0;
  if (uVar4 != 0) {
    lVar2 = local_20[0] / (longlong)uVar4;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = (uint)(((local_20[0] - lVar2 * uVar4) * (ulonglong)(*(uint *)(param_1 + 0x9c) + 1)) /
                  uVar4);
  }
  if (*(uint *)(param_1 + 0x9c) <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}

