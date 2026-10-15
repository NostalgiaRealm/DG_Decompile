/*
 * FUN_10031887 at 10031887
 * undefined1 __fastcall FUN_10031887(int * param_1, int * param_2)
 * Address ranges: 10031887-100318a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10031887(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7c)) {
    uVar1 = 1;
    piVar3 = param_2;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_1;
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
    }
    *param_2 = 0x6c;
  }
  return uVar1;
}

