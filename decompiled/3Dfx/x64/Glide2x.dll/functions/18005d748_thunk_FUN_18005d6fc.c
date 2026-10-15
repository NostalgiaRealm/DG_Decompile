/*
 * thunk_FUN_18005d6fc at 18005d748
 * undefined __fastcall thunk_FUN_18005d6fc(undefined8 param_1)
 * Address ranges: 18005d748-18005d74c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_18005d6fc
 */

void thunk_FUN_18005d6fc(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00018005d718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}

