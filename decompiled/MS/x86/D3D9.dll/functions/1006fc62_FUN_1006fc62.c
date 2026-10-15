/*
 * FUN_1006fc62 at 1006fc62
 * undefined __thiscall FUN_1006fc62(void * this, int param_1)
 * Address ranges: 1006fc62-1006fc91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006fc62(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x1ae);
  *pbVar1 = *pbVar1 & 0xf0;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 0x198) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  return;
}

