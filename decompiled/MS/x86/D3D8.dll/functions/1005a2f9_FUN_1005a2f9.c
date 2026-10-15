/*
 * FUN_1005a2f9 at 1005a2f9
 * undefined __thiscall FUN_1005a2f9(void * this, int param_1)
 * Address ranges: 1005a2f9-1005a328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a2f9(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x1aa);
  *pbVar1 = *pbVar1 & 0xf0;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 0x194) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  return;
}

