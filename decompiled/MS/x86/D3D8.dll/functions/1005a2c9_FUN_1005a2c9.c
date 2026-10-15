/*
 * FUN_1005a2c9 at 1005a2c9
 * undefined __thiscall FUN_1005a2c9(void * this, int param_1)
 * Address ranges: 1005a2c9-1005a2f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a2c9(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x1a9);
  *pbVar1 = *pbVar1 & 0xf0;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 400) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 400));
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
}

