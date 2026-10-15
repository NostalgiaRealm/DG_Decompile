/*
 * FUN_1002680b at 1002680b
 * undefined __fastcall FUN_1002680b(void * param_1)
 * Address ranges: 1002680b-10026840
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002680b(void *param_1)

{
  undefined4 extraout_ECX;
  
  FUN_100267b5((int)param_1);
  FUN_10025741(param_1,*(HANDLE *)((int)param_1 + 0xb4),
               *(int *)((int)param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,extraout_ECX,
               (void *)(uint)(*(char *)((int)param_1 + 0x48) == '\0'));
  return;
}

