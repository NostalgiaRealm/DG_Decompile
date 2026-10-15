/*
 * FUN_1005a295 at 1005a295
 * undefined __thiscall FUN_1005a295(void * this, int param_1, byte param_2)
 * Address ranges: 1005a295-1005a2c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a295(void *this,int param_1,byte param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x1a4);
  *pbVar1 = *pbVar1 & ~param_2;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 0x18c) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 0x18c));
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  return;
}

