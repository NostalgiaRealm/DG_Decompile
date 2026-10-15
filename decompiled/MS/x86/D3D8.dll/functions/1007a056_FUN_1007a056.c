/*
 * FUN_1007a056 at 1007a056
 * int __stdcall FUN_1007a056(int param_1, uint param_2)
 * Address ranges: 1007a056-1007a0b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007a056(int param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  int extraout_EDX;
  
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    iVar1 = FUN_10022a31();
    puVar2 = &DAT_100ba930;
    if ((char)iVar1 == '\0') {
      puVar2 = &DAT_100ba924;
    }
    iVar1 = extraout_EDX *
            *(int *)(puVar2 + *(int *)(*(int *)(param_1 + -0x28) + param_2 * 4) * 0x228);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

