/*
 * FUN_10077f98 at 10077f98
 * undefined __thiscall FUN_10077f98(void * this, int param_1, int param_2)
 * Address ranges: 10077f98-10077fda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077f98(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = (int *)(param_1 * 0xc18 + 0x100a8 + (int)this);
  piVar3 = (int *)((int)this + 0x1c228);
  piVar4 = piVar2;
  for (iVar1 = 0x300; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  if (param_2 != 0) {
    FUN_10096c51(*(void **)((int)this + 0x10),param_2,piVar2,(undefined4 *)((int)this + 0xc));
  }
  return;
}

