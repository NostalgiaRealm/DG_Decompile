/*
 * FUN_180022388 at 180022388
 * undefined FUN_180022388(void)
 * Address ranges: 180022388-18002242f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022388(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  cVar2 = (**(code **)(*param_1 + 0x38))();
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    if (*(int *)((longlong)param_1 + 0x14) == 1) {
      *param_2 = *(int *)(&DAT_1802539c8 + (uVar3 & 0xffffffff) * 0x4b);
      iVar4 = *(int *)((longlong)&DAT_1802539c8 + (uVar3 & 0xffffffff) * 600 + 4);
    }
    else {
      lVar1 = (uVar3 & 0xffffffff) * 600;
      iVar4 = *(int *)(&DAT_180253a10 + lVar1);
      *param_2 = *(int *)(&DAT_1802539fc + lVar1) * *(int *)(&DAT_180253a0c + lVar1);
      iVar4 = *(int *)(&DAT_180253a00 + lVar1) * iVar4;
    }
    *param_3 = iVar4;
  }
  return;
}

