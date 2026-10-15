/*
 * FUN_1003af5d at 1003af5d
 * undefined __thiscall FUN_1003af5d(void * this, uint param_1)
 * Address ranges: 1003af5d-1003afac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003af5d(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 * 0x20 + 0x18 + *(int *)this);
  FUN_1003bf7d(*(void **)((int)this + 0xc),(uint)piVar1,(undefined *)0x0,'\x01');
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

