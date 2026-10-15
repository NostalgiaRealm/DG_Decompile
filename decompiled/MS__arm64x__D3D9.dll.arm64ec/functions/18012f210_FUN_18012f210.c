/*
 * FUN_18012f210 at 18012f210
 * undefined FUN_18012f210(void)
 * Address ranges: 18012f210-18012f27f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18012f210(void)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_30;
  longlong local_28;
  
  local_30 = CONCAT44(local_30._4_4_,0x18);
  bVar1 = false;
  iVar2 = thunk_FUN_180223f04(&local_30);
  if (iVar2 != 0) {
    if (local_28 == 0) {
      lVar3 = thunk_FUN_180223e8c();
      lVar4 = FUN_18012f280();
      if (lVar3 == 0) {
        lVar3 = lVar4;
      }
      FUN_18012f2d0(lVar4,lVar3);
      local_30 = 0x18;
      thunk_FUN_180223f04(&local_30);
    }
    bVar1 = (local_30._4_4_ & 3) == 1;
  }
  return bVar1;
}

