/*
 * FUN_1001c9d4 at 1001c9d4
 * undefined1 __thiscall FUN_1001c9d4(void * this, int param_1)
 * Address ranges: 1001c9d4-1001ca6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1001c9d4(void *this,int param_1)

{
  if (param_1 != 0x17) {
    if (param_1 == 0x1d) {
      (**(code **)(*(int *)this + 0x100))();
      return 0;
    }
    if ((param_1 != 0x1e) && (param_1 != 0x21)) {
      if (param_1 != 0x29) {
        return 0;
      }
      FUN_1001f4a7((int)this);
      FUN_10007e41((int *)((int)this + 0x3d10));
      *(undefined1 *)((int)this + 0x32d0) = 1;
      return 1;
    }
  }
  FUN_1000c19b(this,'\x01');
  if (param_1 == 0x17) {
    *(undefined4 *)((int)this + 0x2c2c) = *(undefined4 *)((int)this + 0x2bfc);
  }
  else if (param_1 == 0x1e) {
    *(undefined4 *)((int)this + 0x2c28) = *(undefined4 *)((int)this + 0x2bf8);
  }
  else if (param_1 == 0x21) {
    *(undefined4 *)((int)this + 0x2c30) = *(undefined4 *)((int)this + 0x2c00);
  }
  FUN_1000c145(this);
  return 0;
}

