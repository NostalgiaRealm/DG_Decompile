/*
 * FUN_100dac70 at 100dac70
 * undefined FUN_100dac70(void)
 * Address ranges: 100dac70-100dacff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100dac70(int param_1)

{
  undefined8 uVar1;
  
  if (((((*(int *)(param_1 + 0x6d0) == 0) ||
        (*(int *)(*(int *)(param_1 + 0x18) + 0x28) == 0x4c4c554e)) &&
       ((*(int *)(param_1 + 0x1c) == 0 || (*(int *)(*(int *)(param_1 + 0x1c) + 0x28) == 0x4c4c554e))
       )) && ((*(int *)(param_1 + 0x20) == 0 ||
              (*(int *)(*(int *)(param_1 + 0x20) + 0x28) == 0x4c4c554e)))) &&
     ((*(int *)(param_1 + 0x24) == 0 || (*(int *)(*(int *)(param_1 + 0x24) + 0x28) == 0x4c4c554e))))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

