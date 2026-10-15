/*
 * FUN_180024de8 at 180024de8
 * undefined __cdecl FUN_180024de8(undefined8 * param_1)
 * Address ranges: 180024de8-180024e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024de8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)param_1[5];
  uVar1 = FUN_1800184b0((longlong *)*param_1,*(uint *)(param_1 + 1),
                        *(int *)((longlong)param_1 + 0xc),*(uint *)(param_1 + 2),
                        *(int *)((longlong)param_1 + 0x14),*(char *)(param_1 + 3),
                        *(longlong *)((longlong)param_1 + 0x1c),*(byte *)((longlong)param_1 + 0x24))
  ;
  *puVar2 = uVar1;
  return;
}

