/*
 * FUN_100343c0 at 100343c0
 * undefined __thiscall FUN_100343c0(void * this, int * param_1)
 * Address ranges: 100343c0-100343ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100343c0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0xf830);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0xf840);
  }
  FUN_1004f4e0(this,(int)this + 0x90,(int)this + 0xf660,param_1,piVar1);
  return;
}

