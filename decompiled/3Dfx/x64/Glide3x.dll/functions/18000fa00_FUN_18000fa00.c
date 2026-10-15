/*
 * FUN_18000fa00 at 18000fa00
 * undefined __fastcall FUN_18000fa00(longlong param_1)
 * Address ranges: 18000fa00-18000faa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000fa00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3330);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  *(longlong *)(lVar1 + 0x618) = param_1;
  FUN_18000f41c(param_1,'\x01');
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      FUN_180023338(*(longlong *)(param_1 + 0xd940 + (longlong)iVar2 * 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_1800273b0(param_1 + 0x4260);
  FUN_180013c7c((longlong *)(param_1 + 0x35a0));
  FUN_18000e864(param_1);
  FUN_18004cdb0(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338));
                    /* WARNING: Could not recover jumptable at 0x00018000faa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

