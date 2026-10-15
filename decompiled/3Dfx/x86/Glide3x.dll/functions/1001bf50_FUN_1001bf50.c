/*
 * FUN_1001bf50 at 1001bf50
 * undefined4 * __thiscall FUN_1001bf50(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1001bf50-1001bfb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1001bf50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001faf6(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x3018) = param_1;
  *(undefined ***)this = &PTR_FUN_10055e94;
  *(undefined4 *)((int)this + 0x3094) = 0;
  *(undefined4 *)((int)this + 0x3098) = 0;
  *(undefined4 *)((int)this + 0x309c) = 0;
  *(undefined4 *)((int)this + 0x30a0) = 0;
  FUN_10052de1((int *)((int)this + 0x301c),0,0x3c);
  FUN_10052de1((int *)((int)this + 0x3058),0,0x3c);
  return this;
}

