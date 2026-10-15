/*
 * FUN_1800314d8 at 1800314d8
 * undefined __cdecl FUN_1800314d8(undefined8 * param_1)
 * Address ranges: 1800314d8-180031513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800314d8(undefined8 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)param_1[5];
  uVar1 = FUN_1800245c8((longlong *)*param_1,*(uint *)(param_1 + 1),
                        *(int *)((longlong)param_1 + 0xc),*(uint *)(param_1 + 2),
                        *(int *)((longlong)param_1 + 0x14),*(char *)(param_1 + 3),
                        *(longlong *)((longlong)param_1 + 0x1c),*(byte *)((longlong)param_1 + 0x24))
  ;
  *puVar2 = (char)uVar1;
  return;
}

