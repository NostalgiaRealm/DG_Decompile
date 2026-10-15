/*
 * FUN_1002c278 at 1002c278
 * char __stdcall FUN_1002c278(void)
 * Address ranges: 1002c278-1002c2e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1002c278(void)

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
      FUN_1002c4e7();
      FUN_1002c67c();
      local_18.flags = 0;
      local_18.cbSize = 0x14;
      GetCursorInfo(&local_18);
    }
    cVar2 = '\x01' - (((byte)local_18.flags & 3) != 1);
  }
  return cVar2;
}

