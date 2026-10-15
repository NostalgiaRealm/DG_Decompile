/*
 * FUN_1004e4e7 at 1004e4e7
 * int __stdcall FUN_1004e4e7(int param_1, uint param_2, uint param_3, uint param_4, int param_5, uint param_6, int param_7, int param_8)
 * Address ranges: 1004e4e7-1004e532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004e4e7(int param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
                int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_7 + 4);
  }
  if (param_5 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_5 + 4);
  }
  iVar1 = -0x7ff8ffa9;
  if (iVar2 != 0) {
    iVar1 = FUN_10041c4b(*(int *)(param_1 + 4),iVar3,param_2,param_3,param_4,param_6,param_8,1);
  }
  return iVar1;
}

