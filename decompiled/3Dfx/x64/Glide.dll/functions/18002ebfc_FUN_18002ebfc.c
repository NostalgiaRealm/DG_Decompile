/*
 * FUN_18002ebfc at 18002ebfc
 * undefined __fastcall FUN_18002ebfc(undefined8 * param_1)
 * Address ranges: 18002ebfc-18002ec60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ebfc(undefined8 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 6);
  puVar2 = *(undefined1 **)((longlong)param_1 + 0x34);
  uVar3 = FUN_1800225b0((longlong *)*param_1,*(int *)(param_1 + 1),*(int *)((longlong)param_1 + 0xc)
                        ,*(uint *)(param_1 + 2),*(DWORD *)((longlong)param_1 + 0x14),
                        *(int *)(param_1 + 3),*(int *)((longlong)param_1 + 0x1c),
                        *(int *)(param_1 + 4),*(undefined8 **)((longlong)param_1 + 0x24),
                        *(char *)((longlong)param_1 + 0x2c),cVar1);
  if (cVar1 == '\0') {
    *puVar2 = (char)uVar3;
  }
  return;
}

