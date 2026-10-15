/*
 * FUN_1800c1c24 at 1800c1c24
 * undefined __fastcall FUN_1800c1c24(undefined8 * param_1)
 * Address ranges: 1800c1c24-1800c1c98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c1c24(undefined8 *param_1)

{
  BOOL BVar1;
  longlong *plVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1801123a8);
  if (BVar1 == 0) {
    FUN_1800044dc(0);
  }
  plVar2 = param_1 + 1;
  FUN_180007a08(param_1[0x2f],-(ulonglong)(param_1 != (undefined8 *)0x0) & (ulonglong)plVar2);
  FUN_1800167b8(plVar2);
  FUN_1800c1ba0((longlong)param_1);
  FUN_1800c1984(param_1);
  FUN_1800fbcf0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800c1c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(DAT_1801123a8);
  return;
}

