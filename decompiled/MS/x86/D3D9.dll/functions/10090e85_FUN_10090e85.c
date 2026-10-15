/*
 * FUN_10090e85 at 10090e85
 * int __stdcall FUN_10090e85(int param_1, uint param_2, int * param_3)
 * Address ranges: 10090e85-10090ec5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090e85(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_EDX;
  int iVar2;
  
  iVar2 = 0;
  if ((param_3 != (int *)0x0) && (*param_3 == 0xc)) {
    uVar1 = FUN_1000271b(param_3[1]);
    if (((char)uVar1 != '\0') &&
       ((*(int *)(extraout_EDX + 8) == 0 || (*(int *)(extraout_EDX + 8) == 1)))) {
      iVar2 = FUN_10003aee((void *)(param_1 + -0x70),param_2,extraout_ECX);
    }
  }
  return iVar2;
}

