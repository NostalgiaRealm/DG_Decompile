/*
 * FUN_1006fbfe at 1006fbfe
 * undefined __thiscall FUN_1006fbfe(void * this, int param_1, byte param_2)
 * Address ranges: 1006fbfe-1006fc31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006fbfe(void *this,int param_1,byte param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x1a8);
  *pbVar1 = *pbVar1 & ~param_2;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 400) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 400));
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
}

