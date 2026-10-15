/*
 * FUN_100289ff at 100289ff
 * undefined4 * __thiscall FUN_100289ff(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100289ff-10028a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100289ff(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1002c201(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10053d80;
  *(undefined4 *)((int)this + 0x3094) = 0;
  *(undefined4 *)((int)this + 0x3098) = 0;
  *(undefined4 *)((int)this + 0x309c) = 0;
  *(undefined4 *)((int)this + 0x30a0) = 0;
  FUN_10050561((int *)((int)this + 0x301c),0,0x3c);
  FUN_10050561((int *)((int)this + 0x3058),0,0x3c);
  return this;
}

