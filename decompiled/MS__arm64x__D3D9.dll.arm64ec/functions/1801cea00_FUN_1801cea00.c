/*
 * FUN_1801cea00 at 1801cea00
 * undefined FUN_1801cea00(void)
 * Address ranges: 1801cea00-1801cea67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801cea00(longlong param_1)

{
  undefined8 uVar1;
  
  if (((((*(int *)(param_1 + 0x718) == 0) ||
        (*(int *)(*(longlong *)(param_1 + 0x30) + 0x48) == 0x4c4c554e)) &&
       ((*(longlong *)(param_1 + 0x38) == 0 ||
        (*(int *)(*(longlong *)(param_1 + 0x38) + 0x48) == 0x4c4c554e)))) &&
      ((*(longlong *)(param_1 + 0x40) == 0 ||
       (*(int *)(*(longlong *)(param_1 + 0x40) + 0x48) == 0x4c4c554e)))) &&
     ((*(longlong *)(param_1 + 0x48) == 0 ||
      (*(int *)(*(longlong *)(param_1 + 0x48) + 0x48) == 0x4c4c554e)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

