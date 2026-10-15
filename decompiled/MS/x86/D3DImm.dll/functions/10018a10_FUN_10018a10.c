/*
 * FUN_10018a10 at 10018a10
 * undefined __thiscall FUN_10018a10(void * this, int * param_1)
 * Address ranges: 10018a10-10018a3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018a10(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x1e58);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0x1e68);
  }
  FUN_10029490(this,(int)this + 0x80,(int)this + 0x1d30,param_1,piVar1);
  return;
}

