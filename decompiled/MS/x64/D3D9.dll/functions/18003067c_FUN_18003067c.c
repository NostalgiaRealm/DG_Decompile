/*
 * FUN_18003067c at 18003067c
 * undefined __fastcall FUN_18003067c(longlong * param_1, int * param_2, int * param_3)
 * Address ranges: 18003067c-180030715
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003067c(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  cVar2 = (**(code **)(*param_1 + 0x38))();
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar4 = (ulonglong)uVar3 * 600;
    if (*(int *)((longlong)param_1 + 0x14) == 1) {
      *param_2 = *(int *)(&DAT_180112a58 + (ulonglong)uVar3 * 0x4b);
      *param_3 = *(int *)((longlong)&DAT_180112a58 + lVar4 + 4);
    }
    else {
      iVar1 = *(int *)(&DAT_180112aa0 + lVar4);
      *param_2 = *(int *)(&DAT_180112a8c + lVar4) * *(int *)(&DAT_180112a9c + lVar4);
      *param_3 = iVar1 * *(int *)(&DAT_180112a90 + lVar4);
    }
  }
  return;
}

