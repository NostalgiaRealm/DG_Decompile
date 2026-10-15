/*
 * FUN_100034a4 at 100034a4
 * int __stdcall FUN_100034a4(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100034a4-100034ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100034a4(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_100dea74 + 2000);
  if (*(int *)(DAT_100dea74 + 2000) == 0) {
    if (param_3 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = param_3;
      if (param_3 == 1) {
        puVar1 = &DAT_100deeec;
        if (param_2 != 2) {
          puVar1 = &DAT_100deee0;
        }
        iVar2 = *(int *)(puVar1[param_1 * 8] + param_4 * 4);
      }
    }
  }
  return iVar2;
}

