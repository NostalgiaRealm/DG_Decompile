/*
 * FUN_1004e5fc at 1004e5fc
 * int __stdcall FUN_1004e5fc(int param_1, uint param_2, uint param_3, uint param_4, int * param_5, int param_6, int param_7, int param_8)
 * Address ranges: 1004e5fc-1004e63e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004e5fc(int param_1,uint param_2,uint param_3,uint param_4,int *param_5,int param_6,
                int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  
  if (param_7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_7 + 4);
  }
  iVar1 = -0x7ff8ffa9;
  if ((iVar2 != 0) && (param_5 != (int *)0x0)) {
    iVar1 = FUN_10041f8e(*(int *)(param_1 + 4),param_5,param_2,param_3,param_4,param_6,param_8);
  }
  return iVar1;
}

