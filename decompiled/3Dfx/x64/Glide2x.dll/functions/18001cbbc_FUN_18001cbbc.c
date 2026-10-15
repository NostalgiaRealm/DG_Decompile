/*
 * FUN_18001cbbc at 18001cbbc
 * undefined __fastcall FUN_18001cbbc(longlong param_1)
 * Address ranges: 18001cbbc-18001cc64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001cbbc(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x31b0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  *(longlong *)(lVar1 + 0x618) = param_1;
  FUN_18001c590(param_1,'\x01');
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      FUN_1800308e0(*(longlong *)(param_1 + 0xcf90 + (longlong)iVar2 * 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_1800347f4(param_1 + 0x3ae0);
  FUN_1800207d8((longlong *)(param_1 + 0x3420));
  FUN_18001b9e4(param_1);
  FUN_18004a7a4(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8));
                    /* WARNING: Could not recover jumptable at 0x00018001cc5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

