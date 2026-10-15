/*
 * FUN_1002454b at 1002454b
 * undefined __thiscall FUN_1002454b(void * this, int param_1)
 * Address ranges: 1002454b-100245af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002454b(void *this,int param_1)

{
  char cVar1;
  
  if (((*(int *)((int)this + 0xf4) != 0) &&
      ((*(uint *)(*(int *)((int)this + 0xf4) + 0x1b8) & 0x8000) != 0)) &&
     ((&DAT_1006c49a)[*(int *)((int)this + 0x11c) * 0x228] != '\0')) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x118) + 0x5c))(*(undefined4 *)((int)this + 0xfc));
    if (cVar1 != '\0') {
      (**(code **)**(undefined4 **)((int)this + 0xf4))();
      FUN_10033299(*(void **)((int)this + 0xf4),0,0,param_1);
    }
  }
  return;
}

