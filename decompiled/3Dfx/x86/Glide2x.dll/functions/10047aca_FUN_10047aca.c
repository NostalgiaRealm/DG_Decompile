/*
 * FUN_10047aca at 10047aca
 * undefined __thiscall FUN_10047aca(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10047aca-10047b2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10047aca(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = param_1 * 0x38;
  iVar3 = *(int *)this;
  param_1 = 0;
  *(undefined4 *)(iVar2 + iVar3) = param_2;
  *(undefined4 *)(iVar2 + 4 + iVar3) = param_3;
  puVar4 = param_4;
  puVar5 = (undefined4 *)(*(int *)this + iVar2 + 8);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x10) * 0x1510 + 0x510 + *(int *)((int)this + 0xc));
  (**(code **)(*piVar1 + 0x58))(piVar1,param_4,&param_1);
  *(int *)(iVar2 + 0x30 + *(int *)this) = param_1;
  return;
}

