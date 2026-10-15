/*
 * FUN_18004d278 at 18004d278
 * undefined FUN_18004d278(void)
 * Address ranges: 18004d278-18004d2ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d278(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (((((int)param_1[1] != *(int *)(lVar1 + 0xe60)) ||
       (*(int *)((longlong)param_1 + 0xc) != *(int *)(lVar1 + 0xe64))) ||
      ((int)param_1[2] != *(int *)(lVar1 + 0xe68))) ||
     (*(int *)((longlong)param_1 + 0x14) != *(int *)(lVar1 + 0xe6c))) {
    FUN_18003feb0(lVar1,0,0,0);
    lVar3 = param_1[2];
    lVar2 = param_1[1];
    *(undefined1 *)(lVar1 + 0xf6c1) = 1;
    *(longlong *)(lVar1 + 0xe68) = lVar3;
    *(longlong *)(lVar1 + 0xe60) = lVar2;
  }
  return;
}

