/*
 * FUN_10028675 at 10028675
 * undefined4 * __thiscall FUN_10028675(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10028675-100286d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10028675(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1002be77(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10053d80;
  *(undefined4 *)((int)this + 0x3094) = 0;
  *(undefined4 *)((int)this + 0x3098) = 0;
  *(undefined4 *)((int)this + 0x309c) = 0;
  *(undefined4 *)((int)this + 0x30a0) = 0;
  FUN_100501d1((int *)((int)this + 0x301c),0,0x3c);
  FUN_100501d1((int *)((int)this + 0x3058),0,0x3c);
  return this;
}

