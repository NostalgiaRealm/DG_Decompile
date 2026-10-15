/*
 * FUN_100796ed at 100796ed
 * undefined __thiscall FUN_100796ed(void * this, int * param_1)
 * Address ranges: 100796ed-10079735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100796ed(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + -0x80);
  if (piVar2 != (int *)0x0) {
    if (param_1 == (int *)0x0) {
      FUN_100cfed0(piVar2,0,0x400);
    }
    else {
      for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar2 = *param_1;
        param_1 = param_1 + 1;
        piVar2 = piVar2 + 1;
      }
    }
    *(undefined1 *)((int)this + 0x51) = 1;
    FUN_10078233((void *)((int)this + -0x88),'\0');
  }
  return;
}

