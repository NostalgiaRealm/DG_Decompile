/*
 * FUN_1001fc05 at 1001fc05
 * bool __thiscall FUN_1001fc05(void * this, undefined4 param_1, uint param_2, uint param_3)
 * Address ranges: 1001fc05-1001fc36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1001fc05(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(param_1);
  if (param_2 < *(uint *)(iVar1 + 0x18)) {
    param_2 = *(uint *)(iVar1 + 0x18);
  }
  if (*(uint *)(iVar1 + 0x1c) < param_3) {
    param_3 = *(uint *)(iVar1 + 0x1c);
  }
  return param_2 < param_3;
}

