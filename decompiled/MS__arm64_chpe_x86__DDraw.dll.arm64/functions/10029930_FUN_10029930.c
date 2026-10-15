/*
 * FUN_10029930 at 10029930
 * undefined FUN_10029930(void)
 * Address ranges: 10029930-10029957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10029930(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x1c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x10029950);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x14) / uVar1;
  }
  return uVar2;
}

