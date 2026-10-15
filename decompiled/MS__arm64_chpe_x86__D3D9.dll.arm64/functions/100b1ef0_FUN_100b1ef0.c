/*
 * FUN_100b1ef0 at 100b1ef0
 * undefined FUN_100b1ef0(void)
 * Address ranges: 100b1ef0-100b1f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100b1ef0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xac) + 0x1c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x100b1f10);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xac) + 0x14) / uVar1;
  }
  return uVar2;
}

