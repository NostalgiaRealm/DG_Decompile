/*
 * FUN_100b4d9e at 100b4d9e
 * undefined __thiscall FUN_100b4d9e(void * this, int param_1, uint * param_2, int * param_3, int param_4, char param_5)
 * Address ranges: 100b4d9e-100b4e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100b4d9e(void *this,int param_1,uint *param_2,int *param_3,int param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x1510;
  if (param_5 == '\0') {
    iVar2 = FUN_100b55d3((void *)(iVar3 + 0x834 + (int)this),(int *)param_2);
  }
  else {
    iVar2 = FUN_100b54df((void *)(iVar3 + 0x848 + (int)this),param_2);
  }
  if (((iVar2 != *(int *)(iVar3 + 0x530 + (int)this)) ||
      (param_4 != *(int *)(iVar3 + 0x53c + (int)this))) ||
     ((param_3 != (int *)0x0 &&
      ((((*param_3 != *(int *)(iVar3 + 0x540 + (int)this) ||
         (param_3[1] != *(int *)(iVar3 + 0x544 + (int)this))) ||
        (param_3[2] != *(int *)(iVar3 + 0x548 + (int)this))) ||
       (param_3[3] != *(int *)(iVar3 + 0x54c + (int)this))))))) {
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x8c))(piVar1,iVar2,param_3,param_4);
    *(int *)(iVar3 + 0x530 + (int)this) = iVar2;
    *(int *)(iVar3 + 0x53c + (int)this) = param_4;
    if (param_3 != (int *)0x0) {
      *(int *)(iVar3 + 0x540 + (int)this) = *param_3;
      *(int *)(iVar3 + 0x544 + (int)this) = param_3[4];
      *(int *)(iVar3 + 0x548 + (int)this) = param_3[8];
      *(int *)(iVar3 + 0x54c + (int)this) = param_3[0xc];
    }
  }
  return;
}

