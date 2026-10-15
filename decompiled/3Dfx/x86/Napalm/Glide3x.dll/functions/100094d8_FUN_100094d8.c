/*
 * FUN_100094d8 at 100094d8
 * undefined __thiscall FUN_100094d8(void * this, char param_1)
 * Address ranges: 100094d8-10009516
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100094d8(void *this,char param_1)

{
  if (param_1 == '\0') {
    if (*(char *)((int)this + 0xe2) == '\0') {
      ShowCursor(1);
      *(undefined1 *)((int)this + 0xe2) = 1;
    }
  }
  else if (*(char *)((int)this + 0xe2) != '\0') {
    ShowCursor(0);
    *(undefined1 *)((int)this + 0xe2) = 0;
  }
  return;
}

