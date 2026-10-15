/*
 * FUN_180022b70 at 180022b70
 * undefined FUN_180022b70(void)
 * Address ranges: 180022b70-180022c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180022b70(void)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 local_30;
  longlong local_28;
  
  local_30 = CONCAT44(local_30._4_4_,0x18);
  bVar1 = false;
  iVar2 = (*__imp_USER32_dll_GetCursorInfo)(&local_30);
  if (iVar2 != 0) {
    if (local_28 == 0) {
      lVar3 = (*__imp_USER32_dll_GetCursor)();
      lVar4 = FUN_180022c10();
      if (lVar3 == 0) {
        lVar3 = lVar4;
      }
      pcVar5 = *(code **)(DAT_18024de50 + 0x78);
      if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
        pcVar5 = __imp_USER32_dll_SetCursor;
      }
      (*pcVar5)(lVar3);
      local_30 = 0x18;
      (*__imp_USER32_dll_GetCursorInfo)(&local_30);
    }
    bVar1 = (local_30._4_4_ & 3) == 1;
  }
  return bVar1;
}

