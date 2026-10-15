/*
 * FUN_1004be2b at 1004be2b
 * int * __thiscall FUN_1004be2b(void * this, int * param_1, uint param_2, int param_3)
 * Address ranges: 1004be2b-1004be7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1004be2b(void *this,int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  void *local_c;
  void *pvStack_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    piVar1 = *(int **)(*(int *)((int)this + 0x34) + (param_2 >> 0x10) * 8);
    local_c = this;
    pvStack_8 = this;
    puVar3 = (uint *)(**(code **)(*piVar1 + 0x28))(piVar1,&local_c);
    uVar4 = ((param_2 & 0xffff) + param_3) * *(int *)((int)this + 0x18);
    uVar2 = *puVar3;
    *param_1 = uVar4 + *puVar3;
    param_1[1] = puVar3[1] + (uint)CARRY4(uVar4,uVar2);
  }
  return param_1;
}

