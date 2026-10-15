/*
 * FUN_1008e170 at 1008e170
 * undefined __thiscall FUN_1008e170(void * this, int param_1, int param_2)
 * Address ranges: 1008e170-1008e1b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008e170(void *this,int param_1,int param_2)

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
    FUN_100b92a4(*(void **)((int)this + 0x10),param_2,piVar2,(undefined4 *)((int)this + 0xc));
  }
  return;
}

