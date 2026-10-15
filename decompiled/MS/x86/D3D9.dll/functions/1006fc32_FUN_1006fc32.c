/*
 * FUN_1006fc32 at 1006fc32
 * undefined __thiscall FUN_1006fc32(void * this, int param_1)
 * Address ranges: 1006fc32-1006fc61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006fc32(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x1ad);
  *pbVar1 = *pbVar1 & 0xf0;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 0x194) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  return;
}

