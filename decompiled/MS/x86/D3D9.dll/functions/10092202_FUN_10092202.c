/*
 * FUN_10092202 at 10092202
 * undefined __thiscall FUN_10092202(void * this, int param_1)
 * Address ranges: 10092202-10092263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10092202(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  (**(code **)(**(int **)((int)this + 0x14) + 0xe8))(*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)((int)this + 0x67a0);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0x679c) + uVar2 * 4) == param_1) {
        if (uVar2 == 0xffffffff) {
          return;
        }
        uVar2 = uVar2 + 1;
        if (uVar2 < uVar1) {
          do {
            *(undefined4 *)(*(int *)((int)this + 0x679c) + -4 + uVar2 * 4) =
                 *(undefined4 *)(*(int *)((int)this + 0x679c) + uVar2 * 4);
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)((int)this + 0x67a0));
        }
        *(int *)((int)this + 0x67a0) = *(int *)((int)this + 0x67a0) + -1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

