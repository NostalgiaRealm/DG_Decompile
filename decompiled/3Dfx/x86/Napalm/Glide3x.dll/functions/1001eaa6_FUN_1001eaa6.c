/*
 * FUN_1001eaa6 at 1001eaa6
 * undefined __fastcall FUN_1001eaa6(int param_1)
 * Address ranges: 1001eaa6-1001eb06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001eaa6(int param_1)

{
  int iVar1;
  int local_c [2];
  
  if (*(char *)(param_1 + 0x1e4) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1e8);
    local_c[0] = 0;
    local_c[1] = 0;
    FUN_1004775a(*(void **)(iVar1 + 0x3680),*(int *)(iVar1 + 0x3684),0,iVar1,local_c,local_c + 1,
                 local_c + 1);
    FUN_100477e0(*(void **)(*(int *)(param_1 + 0x1e8) + 0x3680),
                 *(int *)(*(int *)(param_1 + 0x1e8) + 0x3684),0,0x2a);
    *(undefined1 *)(param_1 + 0x1e4) = 0;
  }
  return;
}

