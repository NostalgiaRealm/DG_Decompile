/*
 * FUN_1800fccd0 at 1800fccd0
 * undefined __fastcall FUN_1800fccd0(longlong param_1, longlong param_2)
 * Address ranges: 1800fccd0-1800fccf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fccd0(longlong param_1,longlong param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001800fccf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,8,param_1 * param_2);
  return;
}

