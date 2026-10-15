/*
 * FUN_1002a1c6 at 1002a1c6
 * undefined __fastcall FUN_1002a1c6(void * param_1)
 * Address ranges: 1002a1c6-1002a214
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a1c6(void *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_10032861(param_1);
  FUN_10031350((int)param_1);
  iVar1 = FUN_10005fcf(*(undefined4 **)((int)param_1 + 4));
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xfc) + 0x11c) * 0x228;
  if ((*(int *)((int)param_1 + 4) == *(int *)(&DAT_1006c484 + iVar2)) && (iVar1 == 0)) {
    *(undefined4 *)(&DAT_1006c484 + iVar2) = 0;
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0xfc) = 0;
  return;
}

