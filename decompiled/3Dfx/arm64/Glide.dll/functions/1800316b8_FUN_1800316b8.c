/*
 * FUN_1800316b8 at 1800316b8
 * undefined __cdecl FUN_1800316b8(undefined8 * param_1)
 * Address ranges: 1800316b8-1800316ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800316b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)param_1[5];
  uVar1 = FUN_180024820((longlong *)*param_1,*(uint *)(param_1 + 1),
                        *(int *)((longlong)param_1 + 0xc),(uint)*(byte *)(param_1 + 2),
                        *(LONG *)((longlong)param_1 + 0x14),*(LONG *)(param_1 + 3),
                        *(LONG *)((longlong)param_1 + 0x1c),*(LONG *)(param_1 + 4),
                        *(byte *)((longlong)param_1 + 0x24));
  *puVar2 = (char)uVar1;
  return;
}

