/*
 * FUN_1801de0c8 at 1801de0c8
 * undefined FUN_1801de0c8(void)
 * Address ranges: 1801de0c8-1801de117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801de0c8(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1801042d0(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar1 == 0) {
    *param_1 = &PTR_FUN_18022eda8;
    FUN_1802229d8(param_1,0x20);
  }
  return iVar1;
}

