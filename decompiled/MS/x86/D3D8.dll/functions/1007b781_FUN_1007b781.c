/*
 * FUN_1007b781 at 1007b781
 * undefined __stdcall FUN_1007b781(int param_1, int param_2, int param_3)
 * Address ranges: 1007b781-1007b7f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007b781(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((((param_2 == 0) || (param_2 == 1)) && (param_3 != 0)) && (*(char *)(param_1 + -0x20) == '\0')
     ) {
    FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    (**(code **)(**(int **)(param_1 + -0x4dbc) + 0x50))
              (*(undefined4 *)(**(int **)(param_1 + -0x4e10) + 0xa8),iVar1,iVar1 + 0x200,
               iVar1 + 0x400,0x477fff00);
    FUN_10003881((char *)((int)&param_2 + 3));
  }
  return;
}

