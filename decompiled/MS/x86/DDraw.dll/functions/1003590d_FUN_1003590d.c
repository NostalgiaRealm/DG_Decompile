/*
 * FUN_1003590d at 1003590d
 * int __stdcall FUN_1003590d(int param_1, RECT * param_2, int param_3, int * param_4, uint param_5, int * param_6)
 * Address ranges: 1003590d-10035963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003590d(int param_1,RECT *param_2,int param_3,int *param_4,uint param_5,int *param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_3 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(param_3 + 4);
  }
  cVar1 = FUN_10036604(*(void **)(param_1 + 4),piVar2);
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(param_3 + 4);
    }
    iVar3 = FUN_1002f8df(*(void **)(param_1 + 4),param_2,piVar2,param_4,param_5,param_6);
  }
  return iVar3;
}

