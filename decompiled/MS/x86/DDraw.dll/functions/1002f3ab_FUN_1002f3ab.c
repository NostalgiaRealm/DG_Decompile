/*
 * FUN_1002f3ab at 1002f3ab
 * int __thiscall FUN_1002f3ab(void * this, RECT * param_1, int * param_2, int * param_3, uint param_4, int param_5)
 * Address ranges: 1002f3ab-1002f406
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002f3ab(void *this,RECT *param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  
  if (*(char *)((int)this + 8) != '\0') {
    FUN_10033038((int)this);
  }
  iVar1 = -0x7789fe3e;
  if (((*(char *)((int)this + 8) == '\0') &&
      (iVar1 = -0x7789fe52, *(int *)(*(int *)((int)this + 4) + 0xb0) == 0)) &&
     ((param_2 == (int *)0x0 || (*(int *)(param_2[1] + 0xb0) == 0)))) {
    iVar1 = FUN_1002eecd(this,param_1,param_2,param_3,param_4,param_5);
  }
  return iVar1;
}

