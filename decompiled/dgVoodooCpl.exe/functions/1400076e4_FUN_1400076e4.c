/*
 * FUN_1400076e4 at 1400076e4
 * undefined __fastcall FUN_1400076e4(longlong param_1)
 * Address ranges: 1400076e4-140007737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400076e4(longlong param_1)

{
  uint uVar1;
  HWND hWnd;
  
  uVar1 = MulDiv(0xe6,*(int *)(param_1 + 0x128),0x60);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ef);
                    /* WARNING: Could not recover jumptable at 0x000140007731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW(hWnd,0x160,(ulonglong)uVar1,0);
  return;
}

