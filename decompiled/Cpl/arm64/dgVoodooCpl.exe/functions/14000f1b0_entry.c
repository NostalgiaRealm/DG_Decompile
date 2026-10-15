/*
 * entry at 14000f1b0
 * undefined __cdecl entry(void)
 * Address ranges: 14000f1b0-14000f1e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void entry(void)

{
  undefined8 uVar1;
  
  GetModuleHandleW((LPCWSTR)0x0);
  GetModuleHandleW((LPCWSTR)0x0);
  uVar1 = FUN_14000ee88();
                    /* WARNING: Subroutine does not return */
  ExitProcess((UINT)uVar1);
}

