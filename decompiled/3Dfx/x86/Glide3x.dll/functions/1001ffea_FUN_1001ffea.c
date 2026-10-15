/*
 * FUN_1001ffea at 1001ffea
 * bool __thiscall FUN_1001ffea(void * this, undefined4 param_1, uint param_2, uint param_3)
 * Address ranges: 1001ffea-1002001b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1001ffea(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x32dc) + 0x2c))(param_1);
  if (param_2 < *(uint *)(iVar1 + 0x18)) {
    param_2 = *(uint *)(iVar1 + 0x18);
  }
  if (*(uint *)(iVar1 + 0x1c) < param_3) {
    param_3 = *(uint *)(iVar1 + 0x1c);
  }
  return param_2 < param_3;
}

