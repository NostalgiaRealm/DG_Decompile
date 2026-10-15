/*
 * FUN_1800044dc at 1800044dc
 * undefined __fastcall FUN_1800044dc(uint param_1)
 * Address ranges: 1800044dc-18000452a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800044dc(uint param_1)

{
  BOOL BVar1;
  tagMSG local_38;
  
  if (*(uint *)&DAT_1801123a8[1].DebugInfo <= param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001800044f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection(DAT_1801123a8);
    return;
  }
  while( true ) {
    BVar1 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar1 != 0) break;
    PeekMessageA(&local_38,(HWND)0x0,0,0,0x400000);
  }
  return;
}

