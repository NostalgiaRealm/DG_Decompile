/*
 * FUN_10006533 at 10006533
 * undefined __fastcall FUN_10006533(void * param_1)
 * Address ranges: 10006533-10006568
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006533(void *param_1)

{
  undefined4 extraout_ECX;
  
  FUN_100064b8((int)param_1);
  FUN_1000506b(param_1,*(HANDLE *)((int)param_1 + 0xc4),
               *(int *)((int)param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,extraout_ECX,
               (void *)(uint)(*(char *)((int)param_1 + 0x48) == '\0'));
  return;
}

