/*
 * FUN_1801bda88 at 1801bda88
 * undefined FUN_1801bda88(void)
 * Address ranges: 1801bda88-1801bdabb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801bda88(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  if (uVar1 < 3) {
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + (ulonglong)uVar1 * 4 + 8) = param_2[1];
    *(undefined8 *)(param_1 + (ulonglong)uVar1 * 4 + 6) = uVar2;
    *param_1 = *param_1 + 1;
  }
  return uVar1 < 3;
}

