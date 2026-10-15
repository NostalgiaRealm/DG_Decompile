/*
 * FUN_180030868 at 180030868
 * undefined __cdecl FUN_180030868(undefined8 * param_1)
 * Address ranges: 180030868-1800308af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030868(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)param_1[5];
  uVar1 = FUN_1800239d0((longlong *)*param_1,*(uint *)(param_1 + 1),
                        *(int *)((longlong)param_1 + 0xc),(uint)*(byte *)(param_1 + 2),
                        *(LONG *)((longlong)param_1 + 0x14),*(LONG *)(param_1 + 3),
                        *(LONG *)((longlong)param_1 + 0x1c),*(LONG *)(param_1 + 4),
                        *(byte *)((longlong)param_1 + 0x24));
  *puVar2 = (char)uVar1;
  return;
}

