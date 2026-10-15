/*
 * FUN_1007c375 at 1007c375
 * undefined __thiscall FUN_1007c375(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1007c375-1007c3b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007c375(void *this,int param_1,undefined4 *param_2)

{
  FUN_100bcb98(*(void **)(*(int *)((int)this + 0x1cf04) + 0x130c),*(int **)((int)this + 0x1cf08),
               (void *)(*(int *)((int)this + 0x1cf04) + 0x1430),param_1 * 0x1000,
               param_1 * 0x1000 + 0x1000,param_2,'\0','\0');
  return;
}

