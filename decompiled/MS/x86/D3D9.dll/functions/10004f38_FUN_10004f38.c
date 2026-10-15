/*
 * FUN_10004f38 at 10004f38
 * undefined4 __thiscall FUN_10004f38(void * this, uint param_1)
 * Address ranges: 10004f38-10004f69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10004f38(void *this,uint param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (((param_1 == 0) || (*(uint *)((int)this + 0x3b8) < param_1)) ||
     (in_EAX = *(uint *)((int)this + 0x3b4), *(int *)((in_EAX - 4) + param_1 * 4) == 0)) {
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    uVar1 = FUN_10006954(this,param_1 - 1);
    uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}

