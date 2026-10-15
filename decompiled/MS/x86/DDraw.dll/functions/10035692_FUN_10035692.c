/*
 * FUN_10035692 at 10035692
 * int __thiscall FUN_10035692(void * this, int * param_1, int * param_2, uint param_3, int param_4)
 * Address ranges: 10035692-100356e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10035692(void *this,int *param_1,int *param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int local_80 [31];
  
  iVar2 = -0x7ff8ffa9;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x6c)) {
    FUN_10031855(param_2,local_80);
    iVar2 = FUN_10032b5b(*(void **)this,param_1,local_80,param_3,param_4);
    cVar1 = FUN_10031887(local_80,param_2);
    if (cVar1 == '\0') {
      iVar2 = -0x7ff8ffa9;
    }
  }
  return iVar2;
}

