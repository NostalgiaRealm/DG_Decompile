/*
 * FUN_180030688 at 180030688
 * undefined __cdecl FUN_180030688(undefined8 * param_1)
 * Address ranges: 180030688-1800306c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030688(undefined8 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)param_1[5];
  uVar1 = FUN_180023778((longlong *)*param_1,*(uint *)(param_1 + 1),
                        *(int *)((longlong)param_1 + 0xc),*(uint *)(param_1 + 2),
                        *(int *)((longlong)param_1 + 0x14),*(char *)(param_1 + 3),
                        *(longlong *)((longlong)param_1 + 0x1c),*(byte *)((longlong)param_1 + 0x24))
  ;
  *puVar2 = (char)uVar1;
  return;
}

