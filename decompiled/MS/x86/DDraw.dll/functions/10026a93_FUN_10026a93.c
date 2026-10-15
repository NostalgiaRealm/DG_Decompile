/*
 * FUN_10026a93 at 10026a93
 * int __fastcall FUN_10026a93(int param_1)
 * Address ranges: 10026a93-10026aea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10026a93(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar2 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 300) != 0) {
    do {
      iVar2 = FUN_10033038(*(int *)(*(int *)(param_1 + 0x128) + uVar3 * 4));
      if (iVar2 < 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 300));
  }
  LeaveCriticalSection(DAT_1006c254);
  return iVar2;
}

