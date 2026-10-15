/*
 * FUN_100c4160 at 100c4160
 * undefined FUN_100c4160(void)
 * Address ranges: 100c4160-100c4187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100c4160(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x1c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x100c4180);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x14) / uVar1;
  }
  return uVar2;
}

