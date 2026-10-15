/*
 * FUN_1003e36b at 1003e36b
 * undefined __thiscall FUN_1003e36b(void * this, uint param_1)
 * Address ranges: 1003e36b-1003e3ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003e36b(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 * 0x20 + 0x18 + *(int *)this);
  FUN_1003f38b(*(void **)((int)this + 0xc),(uint)piVar1,(undefined *)0x0,'\x01');
  (**(code **)(*piVar1 + 8))(piVar1);
  while( true ) {
    param_1 = param_1 + 1;
    if (*(uint *)((int)this + 8) <= param_1) break;
    puVar3 = (undefined4 *)(param_1 * 0x20 + *(int *)this);
    puVar4 = puVar3 + -8;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) - 1;
  return;
}

