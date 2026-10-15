/*
 * FUN_1001ebc1 at 1001ebc1
 * undefined1 __thiscall FUN_1001ebc1(void * this, int param_1)
 * Address ranges: 1001ebc1-1001ec5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1001ebc1(void *this,int param_1)

{
  if (param_1 != 0x17) {
    if (param_1 == 0x1d) {
      (**(code **)(*(int *)this + 0xf4))();
      return 0;
    }
    if ((param_1 != 0x1e) && (param_1 != 0x21)) {
      if (param_1 != 0x29) {
        return 0;
      }
      FUN_1001f054((int)this);
      FUN_100083eb((int *)((int)this + 0x4090));
      *(undefined1 *)((int)this + 0x3650) = 1;
      return 1;
    }
  }
  FUN_1000c9fc(this,'\x01');
  if (param_1 == 0x17) {
    *(undefined4 *)((int)this + 0x2d74) = *(undefined4 *)((int)this + 0x2d44);
  }
  else if (param_1 == 0x1e) {
    *(undefined4 *)((int)this + 0x2d70) = *(undefined4 *)((int)this + 0x2d40);
  }
  else if (param_1 == 0x21) {
    *(undefined4 *)((int)this + 0x2d78) = *(undefined4 *)((int)this + 0x2d48);
  }
  FUN_1000c9a6(this);
  return 0;
}

