/*
 * FUN_10091f40 at 10091f40
 * undefined FUN_10091f40(void)
 * Address ranges: 10091f40-10091f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10091f40(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xac) + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x10091f60);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xac) + 0x10) / uVar1;
  }
  return uVar2;
}

