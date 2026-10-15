/*
 * FUN_1001da60 at 1001da60
 * undefined FUN_1001da60(void)
 * Address ranges: 1001da60-1001dadb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001da60(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong local_20 [2];
  
  (*(code *)PTR_FUN_100a80b0)(local_20);
  uVar4 = *(ulonglong *)(*(int *)(param_1 + 0x365c) + 0x10);
  local_20[0] = local_20[0] - *(longlong *)(*(int *)(param_1 + 0x365c) + 0x18);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x1001dab4);
    (*(code *)uVar3)();
  }
  lVar1 = 0;
  if (uVar4 != 0) {
    lVar1 = local_20[0] / (longlong)uVar4;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = ((local_20[0] - lVar1 * uVar4) * (ulonglong)(*(uint *)(param_1 + 0x9c) + 1)) / uVar4;
  }
  return uVar2 == *(uint *)(param_1 + 0x9c);
}

