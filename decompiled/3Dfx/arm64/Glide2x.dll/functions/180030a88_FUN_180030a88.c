/*
 * FUN_180030a88 at 180030a88
 * undefined __cdecl FUN_180030a88(undefined8 * param_1)
 * Address ranges: 180030a88-180030ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030a88(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  puVar3 = *(undefined1 **)((longlong)param_1 + 0x34);
  uVar2 = FUN_180023af8((longlong *)*param_1,*(int *)(param_1 + 1),*(int *)((longlong)param_1 + 0xc)
                        ,*(uint *)(param_1 + 2),*(uint *)((longlong)param_1 + 0x14),
                        *(int *)(param_1 + 3),*(int *)((longlong)param_1 + 0x1c),
                        *(int *)(param_1 + 4),*(undefined8 **)((longlong)param_1 + 0x24),
                        *(char *)((longlong)param_1 + 0x2c),bVar1);
  if (bVar1 == 0) {
    *puVar3 = (char)uVar2;
  }
  return;
}

