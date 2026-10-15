/*
 * FUN_1000451c at 1000451c
 * char __stdcall FUN_1000451c(void)
 * Address ranges: 1000451c-10004584
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1000451c(void)

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
      FUN_1000478e();
      FUN_10004930();
      local_18.flags = 0;
      local_18.cbSize = 0x14;
      GetCursorInfo(&local_18);
    }
    cVar2 = '\x01' - (((byte)local_18.flags & 3) != 1);
  }
  return cVar2;
}

