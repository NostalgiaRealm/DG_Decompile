/*
 * FUN_180021318 at 180021318
 * undefined __fastcall FUN_180021318(undefined8 * param_1)
 * Address ranges: 180021318-18002135a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021318(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined1 *)param_1[5];
  uVar2 = FUN_180015f40((longlong *)*param_1,*(int *)(param_1 + 1),*(int *)((longlong)param_1 + 0xc)
                        ,*(int *)(param_1 + 2),*(int *)((longlong)param_1 + 0x14),
                        *(int *)(param_1 + 3),*(uint *)((longlong)param_1 + 0x1c),
                        (undefined8 *)param_1[4]);
  *puVar1 = (char)uVar2;
  return;
}

