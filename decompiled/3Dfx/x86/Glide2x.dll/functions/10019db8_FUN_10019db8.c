/*
 * FUN_10019db8 at 10019db8
 * undefined __thiscall FUN_10019db8(void * this, char param_1)
 * Address ranges: 10019db8-10019df6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019db8(void *this,char param_1)

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

