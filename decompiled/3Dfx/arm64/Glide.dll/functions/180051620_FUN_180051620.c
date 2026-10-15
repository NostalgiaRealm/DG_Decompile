/*
 * FUN_180051620 at 180051620
 * undefined __cdecl FUN_180051620(longlong param_1, uint param_2, longlong param_3, int param_4)
 * Address ranges: 180051620-180051677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051620(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + (ulonglong)param_2 * 0x18c0;
  if (((param_3 == *(longlong *)(lVar1 + 0xb70)) && (param_4 == *(int *)(lVar1 + 0xb78))) &&
     (*(int *)(lVar1 + 0xb7c) == 0)) {
    return;
  }
  *(longlong *)(lVar1 + 0xb70) = param_3;
  *(int *)(lVar1 + 0xb78) = param_4;
  *(undefined4 *)(lVar1 + 0xb7c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000180051670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0x98))();
  return;
}

