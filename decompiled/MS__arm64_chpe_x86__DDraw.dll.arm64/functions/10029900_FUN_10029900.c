/*
 * FUN_10029900 at 10029900
 * undefined FUN_10029900(void)
 * Address ranges: 10029900-10029927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10029900(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x10029920);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x10) / uVar1;
  }
  return uVar2;
}

