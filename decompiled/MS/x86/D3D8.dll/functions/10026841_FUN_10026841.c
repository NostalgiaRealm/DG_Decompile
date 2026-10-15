/*
 * FUN_10026841 at 10026841
 * undefined4 __fastcall FUN_10026841(void * param_1)
 * Address ranges: 10026841-10026885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10026841(void *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  
  FUN_100267b5((int)param_1);
  if ((*(uint *)((int)param_1 + 0x34) >> 4 & 1) != 0) {
    uVar1 = FUN_10025741(param_1,*(HANDLE *)((int)param_1 + 0xb4),
                         *(int *)((int)param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,
                         CONCAT31((int3)((uint)extraout_ECX >> 8),*(char *)((int)param_1 + 0x48)),
                         (void *)(uint)(*(char *)((int)param_1 + 0x48) == '\0'));
    return uVar1;
  }
  return CONCAT31((uint3)(*(uint *)((int)param_1 + 0x34) >> 0xc),1);
}

