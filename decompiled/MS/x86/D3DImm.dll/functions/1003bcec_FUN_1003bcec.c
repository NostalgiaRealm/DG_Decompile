/*
 * FUN_1003bcec at 1003bcec
 * undefined __thiscall FUN_1003bcec(void * this, int param_1)
 * Address ranges: 1003bcec-1003bd1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bcec(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x18e);
  *pbVar1 = *pbVar1 & 0xf0;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 0x178) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 0x178));
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  return;
}

