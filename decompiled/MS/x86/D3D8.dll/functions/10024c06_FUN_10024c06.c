/*
 * FUN_10024c06 at 10024c06
 * char __stdcall FUN_10024c06(void)
 * Address ranges: 10024c06-10024c6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10024c06(void)

{
  BOOL BVar1;
  char cVar2;
  tagCURSORINFO local_18;
  
  local_18.cbSize = 0x14;
  cVar2 = '\0';
  BVar1 = GetCursorInfo(&local_18);
  if (BVar1 != 0) {
    if (local_18.hCursor == (HCURSOR)0x0) {
      GetCursor();
      FUN_10024e75();
      FUN_1002500a();
      local_18.flags = 0;
      local_18.cbSize = 0x14;
      GetCursorInfo(&local_18);
    }
    cVar2 = '\x01' - (((byte)local_18.flags & 3) != 1);
  }
  return cVar2;
}

