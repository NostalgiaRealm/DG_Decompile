/*
 * FUN_100c4130 at 100c4130
 * undefined FUN_100c4130(void)
 * Address ranges: 100c4130-100c4157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100c4130(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x100c4150);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x10) / uVar1;
  }
  return uVar2;
}

