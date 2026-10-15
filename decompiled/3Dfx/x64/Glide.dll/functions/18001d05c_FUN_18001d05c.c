/*
 * FUN_18001d05c at 18001d05c
 * undefined __fastcall FUN_18001d05c(longlong param_1)
 * Address ranges: 18001d05c-18001d104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d05c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x31b0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  *(longlong *)(lVar1 + 0x618) = param_1;
  FUN_18001ca30(param_1,'\x01');
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      FUN_180030d88(*(longlong *)(param_1 + 0xcf90 + (longlong)iVar2 * 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_180034c9c(param_1 + 0x3ae0);
  FUN_180020c80((longlong *)(param_1 + 0x3420));
  FUN_18001be84(param_1);
  FUN_18004ac4c(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8));
                    /* WARNING: Could not recover jumptable at 0x00018001d0fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

