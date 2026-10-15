/*
 * FUN_18005519c at 18005519c
 * undefined __fastcall FUN_18005519c(longlong * param_1)
 * Address ranges: 18005519c-180055205
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005519c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (((((int)param_1[1] != *(int *)(lVar1 + 0xe60)) ||
       (*(int *)((longlong)param_1 + 0xc) != *(int *)(lVar1 + 0xe64))) ||
      ((int)param_1[2] != *(int *)(lVar1 + 0xe68))) ||
     (*(int *)((longlong)param_1 + 0x14) != *(int *)(lVar1 + 0xe6c))) {
    FUN_180049b30(lVar1,0,0,0);
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    *(undefined1 *)(lVar1 + 0xf6c1) = 1;
    *(longlong *)(lVar1 + 0xe60) = lVar2;
    *(longlong *)(lVar1 + 0xe68) = lVar3;
  }
  return;
}

