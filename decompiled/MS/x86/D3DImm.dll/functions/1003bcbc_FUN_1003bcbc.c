/*
 * FUN_1003bcbc at 1003bcbc
 * undefined __thiscall FUN_1003bcbc(void * this, int param_1)
 * Address ranges: 1003bcbc-1003bceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bcbc(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x18d);
  *pbVar1 = *pbVar1 & 0xf0;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 0x174) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 0x174));
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  return;
}

