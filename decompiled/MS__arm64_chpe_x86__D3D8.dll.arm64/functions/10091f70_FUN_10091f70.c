/*
 * FUN_10091f70 at 10091f70
 * undefined FUN_10091f70(void)
 * Address ranges: 10091f70-10091f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10091f70(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xac) + 0x1c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x10091f90);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xac) + 0x14) / uVar1;
  }
  return uVar2;
}

