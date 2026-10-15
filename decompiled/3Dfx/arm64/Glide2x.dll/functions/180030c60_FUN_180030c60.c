/*
 * FUN_180030c60 at 180030c60
 * undefined __cdecl FUN_180030c60(undefined8 * param_1)
 * Address ranges: 180030c60-180030c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030c60(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined1 *)param_1[5];
  uVar2 = FUN_180023c70((longlong *)*param_1,*(int *)(param_1 + 1),*(int *)((longlong)param_1 + 0xc)
                        ,*(int *)(param_1 + 2),*(int *)((longlong)param_1 + 0x14),
                        *(int *)(param_1 + 3),*(uint *)((longlong)param_1 + 0x1c),
                        (undefined8 *)param_1[4]);
  *puVar1 = (char)uVar2;
  return;
}

