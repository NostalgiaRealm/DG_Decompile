/*
 * FUN_1800251e8 at 1800251e8
 * undefined __cdecl FUN_1800251e8(undefined8 * param_1)
 * Address ranges: 1800251e8-180025243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800251e8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  puVar3 = *(undefined1 **)((longlong)param_1 + 0x34);
  uVar2 = FUN_1800189d0((longlong *)*param_1,*(int *)(param_1 + 1),*(int *)((longlong)param_1 + 0xc)
                        ,*(uint *)(param_1 + 2),*(uint *)((longlong)param_1 + 0x14),
                        *(int *)(param_1 + 3),*(int *)((longlong)param_1 + 0x1c),
                        *(int *)(param_1 + 4),*(undefined8 **)((longlong)param_1 + 0x24),
                        *(char *)((longlong)param_1 + 0x2c),bVar1);
  if (bVar1 == 0) {
    *puVar3 = (char)uVar2;
  }
  return;
}

