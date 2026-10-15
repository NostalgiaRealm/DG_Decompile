/*
 * FUN_1001c847 at 1001c847
 * undefined __fastcall FUN_1001c847(int param_1)
 * Address ranges: 1001c847-1001c8b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001c847(int param_1)

{
  int iVar1;
  int local_c [2];
  
  if (*(char *)(param_1 + 0x1e4) == '\0') {
    iVar1 = *(int *)(param_1 + 0x1e8);
    local_c[0] = 0x50;
    local_c[1] = 0;
    FUN_10044351(*(void **)(iVar1 + 0x3300),*(int *)(iVar1 + 0x3304),0,iVar1,
                 (int *)(param_1 + 0x208),local_c,local_c + 1);
    FUN_100443d7(*(void **)(*(int *)(param_1 + 0x1e8) + 0x3300),
                 *(int *)(*(int *)(param_1 + 0x1e8) + 0x3304),*(int *)(param_1 + 0x20c),0x2a);
    *(undefined1 *)(param_1 + 0x1e4) = 1;
  }
  return;
}

