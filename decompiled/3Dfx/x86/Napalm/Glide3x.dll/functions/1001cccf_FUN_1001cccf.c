/*
 * FUN_1001cccf at 1001cccf
 * undefined __thiscall FUN_1001cccf(void * this, int param_1)
 * Address ranges: 1001cccf-1001cd52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001cccf(void *this,int param_1)

{
  if (param_1 != 0x17) {
    if (param_1 == 0x1d) {
      FUN_1000f46b((int)this);
      return;
    }
    if ((param_1 != 0x1e) && (param_1 != 0x21)) {
      if (param_1 != 0x29) {
        return;
      }
      FUN_1001cb87((int)this);
      FUN_100083eb((int *)((int)this + 0x42e8));
      *(undefined1 *)((int)this + 0x3650) = 1;
      return;
    }
  }
  if (param_1 == 0x17) {
    *(undefined4 *)((int)this + 0x2d74) = *(undefined4 *)((int)this + 0x2d44);
  }
  else if (param_1 == 0x1e) {
    *(undefined4 *)((int)this + 0x2d70) = *(undefined4 *)((int)this + 0x2d40);
  }
  else if (param_1 == 0x21) {
    *(undefined4 *)((int)this + 0x2d78) = *(undefined4 *)((int)this + 0x2d48);
  }
  return;
}

