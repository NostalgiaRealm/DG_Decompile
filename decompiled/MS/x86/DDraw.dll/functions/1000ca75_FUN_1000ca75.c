/*
 * FUN_1000ca75 at 1000ca75
 * undefined __thiscall FUN_1000ca75(void * this, int * param_1)
 * Address ranges: 1000ca75-1000cabd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ca75(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + -0x80);
  if (piVar2 != (int *)0x0) {
    if (param_1 == (int *)0x0) {
      FUN_10060d45(piVar2,0,0x400);
    }
    else {
      for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar2 = *param_1;
        param_1 = param_1 + 1;
        piVar2 = piVar2 + 1;
      }
    }
    *(undefined1 *)((int)this + 0x51) = 1;
    FUN_1000b5ba((void *)((int)this + -0x88),'\0');
  }
  return;
}

