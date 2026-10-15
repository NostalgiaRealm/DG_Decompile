/*
 * FUN_1001ab26 at 1001ab26
 * undefined __thiscall FUN_1001ab26(void * this, int param_1)
 * Address ranges: 1001ab26-1001aba9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ab26(void *this,int param_1)

{
  if (param_1 != 0x17) {
    if (param_1 == 0x1d) {
      FUN_1000e1b1((int)this);
      return;
    }
    if ((param_1 != 0x1e) && (param_1 != 0x21)) {
      if (param_1 != 0x29) {
        return;
      }
      FUN_1001a9de((int)this);
      FUN_10007e41((int *)((int)this + 0x3f50));
      *(undefined1 *)((int)this + 0x32d0) = 1;
      return;
    }
  }
  if (param_1 == 0x17) {
    *(undefined4 *)((int)this + 0x2c2c) = *(undefined4 *)((int)this + 0x2bfc);
  }
  else if (param_1 == 0x1e) {
    *(undefined4 *)((int)this + 0x2c28) = *(undefined4 *)((int)this + 0x2bf8);
  }
  else if (param_1 == 0x21) {
    *(undefined4 *)((int)this + 0x2c30) = *(undefined4 *)((int)this + 0x2c00);
  }
  return;
}

