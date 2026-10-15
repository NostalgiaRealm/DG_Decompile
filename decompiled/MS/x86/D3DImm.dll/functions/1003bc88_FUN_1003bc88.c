/*
 * FUN_1003bc88 at 1003bc88
 * undefined __thiscall FUN_1003bc88(void * this, int param_1, byte param_2)
 * Address ranges: 1003bc88-1003bcbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bc88(void *this,int param_1,byte param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x188);
  *pbVar1 = *pbVar1 & ~param_2;
  if ((*pbVar1 == 0) && (*(int *)(param_1 + 0x170) != 0)) {
    (**(code **)(*(int *)this + 4))(param_1,*(int *)(param_1 + 0x170));
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return;
}

