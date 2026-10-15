/*
 * FUN_140002664 at 140002664
 * undefined __fastcall FUN_140002664(longlong param_1)
 * Address ranges: 140002664-140002711
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140002664(longlong param_1)

{
  char cVar1;
  HWND pHVar2;
  bool bVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  bVar3 = cVar1 != '\0';
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x412);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x413);
                    /* WARNING: Could not recover jumptable at 0x00014000270b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar2,(uint)bVar3);
  return;
}

