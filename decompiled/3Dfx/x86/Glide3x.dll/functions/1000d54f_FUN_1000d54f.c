/*
 * FUN_1000d54f at 1000d54f
 * undefined __thiscall FUN_1000d54f(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1000d54f-1000d585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000d54f(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  if ((*(int *)((int)this + 0x44) != 0) && (*(char *)((int)this + 0x59) != '\0')) {
    (**(code **)((int)this + 0x54))(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

