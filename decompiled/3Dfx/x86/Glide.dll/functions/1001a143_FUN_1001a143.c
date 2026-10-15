/*
 * FUN_1001a143 at 1001a143
 * undefined __thiscall FUN_1001a143(void * this, char param_1)
 * Address ranges: 1001a143-1001a181
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a143(void *this,char param_1)

{
  if (param_1 == '\0') {
    if (*(char *)((int)this + 0xde) == '\0') {
      ShowCursor(1);
      *(undefined1 *)((int)this + 0xde) = 1;
    }
  }
  else if (*(char *)((int)this + 0xde) != '\0') {
    ShowCursor(0);
    *(undefined1 *)((int)this + 0xde) = 0;
  }
  return;
}

