/*
 * FUN_10026264 at 10026264
 * undefined4 __fastcall FUN_10026264(int param_1)
 * Address ranges: 10026264-100262bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10026264(int param_1)

{
  BOOL BVar1;
  void *pvVar2;
  void *this;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  if (((*(uint *)(&DAT_1006b458 + *(int *)(param_1 + 0x40) * 0x1a8) & 0x400) == 0) &&
     (*(int *)(param_1 + 0xf4) != 0)) {
    pvVar2 = (void *)thunk_FUN_100321e9(*(int *)(param_1 + 0xf4));
    if (pvVar2 != (void *)0x0) {
      FUN_1002a987(this,pvVar2,8);
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return 0;
}

