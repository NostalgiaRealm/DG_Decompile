/*
 * FUN_10057b0b at 10057b0b
 * undefined __thiscall FUN_10057b0b(void * this, int param_1)
 * Address ranges: 10057b0b-10057b78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057b0b(void *this,int param_1)

{
  if (param_1 == 0) {
    if (*(int *)((int)this + 0xe7c) == 2) {
      *(undefined1 *)((int)this + 0xf668) = 1;
      goto LAB_10057b34;
    }
  }
  else {
    if ((param_1 != 1) && (param_1 != 2)) goto LAB_10057b34;
    *(undefined1 *)((int)this + 0xf668) = 1;
  }
  *(undefined1 *)((int)this + 0xf66c) = 1;
LAB_10057b34:
  *(int *)((int)this + 0xe7c) = param_1;
  *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
  *(uint *)((int)this + 0xfc4) =
       (uint)(param_1 == 2) << 0x10 | *(uint *)((int)this + 0xfc4) & 0xfffeffff;
  return;
}

