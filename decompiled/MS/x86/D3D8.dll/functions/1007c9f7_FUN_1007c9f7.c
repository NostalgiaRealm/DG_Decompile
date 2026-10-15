/*
 * FUN_1007c9f7 at 1007c9f7
 * undefined __fastcall FUN_1007c9f7(void * param_1)
 * Address ranges: 1007c9f7-1007ca2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007c9f7(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0xc);
  FUN_10015cb0(param_1);
  iVar1 = *(int *)(iVar1 + 0x737);
  if (*(int *)(*(int *)((int)param_1 + 0xc) + 0x94f) != iVar1) {
    *(int *)(*(int *)((int)param_1 + 0xc) + 0x94f) = iVar1;
    FUN_1007b11b((int)param_1);
    return;
  }
  return;
}

