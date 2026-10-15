/*
 * FUN_1002e06e at 1002e06e
 * undefined __fastcall FUN_1002e06e(void * param_1)
 * Address ranges: 1002e06e-1002e0a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e06e(void *param_1)

{
  undefined4 extraout_ECX;
  
  FUN_1002e018((int)param_1);
  FUN_1002cda3(param_1,*(HANDLE *)((int)param_1 + 0xb4),
               *(int *)((int)param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,extraout_ECX,
               (void *)(uint)(*(char *)((int)param_1 + 0x48) == '\0'));
  return;
}

