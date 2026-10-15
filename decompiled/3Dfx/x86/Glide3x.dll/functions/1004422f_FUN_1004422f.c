/*
 * FUN_1004422f at 1004422f
 * undefined __thiscall FUN_1004422f(void * this, int param_1)
 * Address ranges: 1004422f-1004428d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004422f(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = param_1 * 0x1510;
  uVar2 = FUN_1004a03b((void *)(iVar3 + 0x8ac + (int)this),(uint *)&DAT_10054bc0);
  puVar4 = (uint *)(iVar3 + 0x594 + (int)this);
  if (*puVar4 != uVar2) {
    FUN_1004a174((void *)(iVar3 + 0x8ac + (int)this),(int *)*puVar4);
    *puVar4 = uVar2;
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x28))(piVar1,0,1,puVar4);
  }
  return;
}

