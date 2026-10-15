/*
 * FUN_100a3ae0 at 100a3ae0
 * undefined FUN_100a3ae0(void)
 * Address ranges: 100a3ae0-100a3b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100a3ae0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x1c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x100a3b00);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x14) / uVar1;
  }
  return uVar2;
}

