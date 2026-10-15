/*
 * FUN_1001ea34 at 1001ea34
 * undefined __fastcall FUN_1001ea34(int param_1)
 * Address ranges: 1001ea34-1001eaa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001ea34(int param_1)

{
  int iVar1;
  int local_c [2];
  
  if (*(char *)(param_1 + 0x1e4) == '\0') {
    iVar1 = *(int *)(param_1 + 0x1e8);
    local_c[0] = 0x50;
    local_c[1] = 0;
    FUN_1004775a(*(void **)(iVar1 + 0x3680),*(int *)(iVar1 + 0x3684),0,iVar1,
                 (int *)(param_1 + 0x208),local_c,local_c + 1);
    FUN_100477e0(*(void **)(*(int *)(param_1 + 0x1e8) + 0x3680),
                 *(int *)(*(int *)(param_1 + 0x1e8) + 0x3684),*(int *)(param_1 + 0x20c),0x2a);
    *(undefined1 *)(param_1 + 0x1e4) = 1;
  }
  return;
}

