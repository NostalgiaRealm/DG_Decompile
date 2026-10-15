/*
 * FUN_100bca71 at 100bca71
 * int * __thiscall FUN_100bca71(void * this, int * param_1, void * param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 100bca71-100bcac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_100bca71(void *this,int *param_1,void *param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)((int)this + 0x8e0) != 0) {
    bVar1 = FUN_100c0821(param_2,param_3,param_1);
    if (bVar1) {
      FUN_100cff00((undefined4 *)*param_1,param_4,param_3);
      param_1[6] = param_3;
      param_1[8] = 0;
      param_1[7] = 0;
    }
  }
  return param_1;
}

