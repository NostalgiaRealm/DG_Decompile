/*
 * FUN_18002e254 at 18002e254
 * undefined __fastcall FUN_18002e254(undefined8 * param_1)
 * Address ranges: 18002e254-18002e296
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e254(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)param_1[5];
  cVar2 = FUN_180021f30((longlong *)*param_1,*(uint *)(param_1 + 1),
                        *(int *)((longlong)param_1 + 0xc),*(DWORD *)(param_1 + 2),
                        *(int *)((longlong)param_1 + 0x14),*(char *)(param_1 + 3),
                        *(longlong *)((longlong)param_1 + 0x1c),*(char *)((longlong)param_1 + 0x24))
  ;
  *pcVar1 = cVar2;
  return;
}

