/*
 * FUN_18015cdc8 at 18015cdc8
 * undefined FUN_18015cdc8(void)
 * Address ranges: 18015cdc8-18015ce4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015cdc8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (((((int)param_1[1] != *(int *)(lVar1 + 0xe60)) ||
       (*(int *)((longlong)param_1 + 0xc) != *(int *)(lVar1 + 0xe64))) ||
      ((int)param_1[2] != *(int *)(lVar1 + 0xe68))) ||
     (*(int *)((longlong)param_1 + 0x14) != *(int *)(lVar1 + 0xe6c))) {
    FUN_18014e9a0(lVar1,0,0,0);
    lVar3 = param_1[2];
    lVar2 = param_1[1];
    *(undefined1 *)(lVar1 + 0xf6c1) = 1;
    *(longlong *)(lVar1 + 0xe68) = lVar3;
    *(longlong *)(lVar1 + 0xe60) = lVar2;
  }
  return;
}

