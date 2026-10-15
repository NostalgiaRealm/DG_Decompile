/*
 * FUN_18002ee5c at 18002ee5c
 * undefined __fastcall FUN_18002ee5c(undefined8 * param_1)
 * Address ranges: 18002ee5c-18002ee9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ee5c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined1 *)param_1[5];
  uVar2 = FUN_18002276c((longlong *)*param_1,*(int *)(param_1 + 1),*(int *)((longlong)param_1 + 0xc)
                        ,*(int *)(param_1 + 2),*(int *)((longlong)param_1 + 0x14),
                        *(int *)(param_1 + 3),*(uint *)((longlong)param_1 + 0x1c),
                        (undefined8 *)param_1[4]);
  *puVar1 = (char)uVar2;
  return;
}

