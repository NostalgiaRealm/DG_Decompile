/*
 * FUN_10041ad7 at 10041ad7
 * undefined __thiscall FUN_10041ad7(void * this, int param_1)
 * Address ranges: 10041ad7-10041b35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10041ad7(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = param_1 * 0x1510;
  uVar2 = FUN_100478e3((void *)(iVar3 + 0x8ac + (int)this),(uint *)&DAT_10051d40);
  puVar4 = (uint *)(iVar3 + 0x594 + (int)this);
  if (*puVar4 != uVar2) {
    FUN_10047a1c((void *)(iVar3 + 0x8ac + (int)this),(int *)*puVar4);
    *puVar4 = uVar2;
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x28))(piVar1,0,1,puVar4);
  }
  return;
}

