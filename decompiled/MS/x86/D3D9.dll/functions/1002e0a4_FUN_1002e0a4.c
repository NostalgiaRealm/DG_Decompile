/*
 * FUN_1002e0a4 at 1002e0a4
 * undefined4 __fastcall FUN_1002e0a4(void * param_1)
 * Address ranges: 1002e0a4-1002e0e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002e0a4(void *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  
  FUN_1002e018((int)param_1);
  if ((*(uint *)((int)param_1 + 0x34) >> 4 & 1) != 0) {
    uVar1 = FUN_1002cda3(param_1,*(HANDLE *)((int)param_1 + 0xb4),
                         *(int *)((int)param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,
                         CONCAT31((int3)((uint)extraout_ECX >> 8),*(char *)((int)param_1 + 0x48)),
                         (void *)(uint)(*(char *)((int)param_1 + 0x48) == '\0'));
    return uVar1;
  }
  return CONCAT31((uint3)(*(uint *)((int)param_1 + 0x34) >> 0xc),1);
}

