/*
 * FUN_10092264 at 10092264
 * undefined4 __thiscall FUN_10092264(void * this, uint param_1)
 * Address ranges: 10092264-1009229e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10092264(void *this,uint param_1)

{
  uint in_EAX;
  undefined1 uVar1;
  
  uVar1 = 1;
  if (1 < *(uint *)((int)this + 0xd98)) {
    param_1 = -(uint)(param_1 != 0) & param_1 + 8;
    in_EAX = FUN_100086bd((void *)((int)this + 0xd94),(int *)&param_1);
    if (in_EAX != 0xffffffff) goto LAB_10092298;
  }
  uVar1 = 0;
LAB_10092298:
  return CONCAT31((int3)(in_EAX >> 8),uVar1);
}

