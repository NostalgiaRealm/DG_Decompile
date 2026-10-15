/*
 * FUN_100956e0 at 100956e0
 * undefined __thiscall FUN_100956e0(void * this, LPVOID param_1)
 * Address ranges: 100956e0-10095740
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100956e0(void *this,LPVOID param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(uint *)((int)this + 0x4bc);
  if (uVar1 != 0) {
    do {
      if (*(LPVOID *)(*(int *)((int)this + 0x4b8) + uVar2 * 4) == param_1) {
        if (uVar2 != 0xffffffff) {
          uVar2 = uVar2 + 1;
          if (uVar2 < uVar1) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0x4b8) + -4 + uVar2 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x4b8) + uVar2 * 4);
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(uint *)((int)this + 0x4bc));
          }
          *(int *)((int)this + 0x4bc) = *(int *)((int)this + 0x4bc) + -1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_100ad48c(param_1);
  return;
}

