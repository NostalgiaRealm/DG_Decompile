/*
 * FUN_1001aaf0 at 1001aaf0
 * undefined __fastcall FUN_1001aaf0(int param_1)
 * Address ranges: 1001aaf0-1001ab42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001aaf0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_10053347(*(void **)(param_1 + 0xcc),*(int **)(param_1 + 0xbc + uVar1 * 4));
    *(undefined4 *)(param_1 + 0xbc + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  FUN_10051a23(*(void **)(*(int *)(param_1 + 0xd4) + 0x15d8),*(uint *)(param_1 + 200),3,(int *)0x0,0
               ,0);
  return;
}

