/*
 * entry at 140023ec0
 * undefined __fastcall entry(void)
 * Address ranges: 140023ec0-140023ef1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void entry(void)

{
  undefined8 uVar1;
  
  GetModuleHandleW((LPCWSTR)0x0);
  GetModuleHandleW((LPCWSTR)0x0);
  uVar1 = FUN_14000d1a4();
                    /* WARNING: Subroutine does not return */
  ExitProcess((UINT)uVar1);
}

