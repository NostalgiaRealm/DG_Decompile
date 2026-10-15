/*
 * FUN_180020e10 at 180020e10
 * undefined __fastcall FUN_180020e10(undefined8 * param_1)
 * Address ranges: 180020e10-180020e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020e10(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[5];
  uVar2 = FUN_180015c28((longlong *)*param_1,*(uint *)(param_1 + 1),
                        *(int *)((longlong)param_1 + 0xc),*(undefined1 *)(param_1 + 2),
                        *(LONG *)((longlong)param_1 + 0x14),*(LONG *)(param_1 + 3),
                        *(LONG *)((longlong)param_1 + 0x1c),*(LONG *)(param_1 + 4),
                        *(undefined1 *)((longlong)param_1 + 0x24));
  *puVar1 = uVar2;
  return;
}

