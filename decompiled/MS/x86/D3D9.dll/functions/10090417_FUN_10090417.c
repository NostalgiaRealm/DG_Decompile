/*
 * FUN_10090417 at 10090417
 * undefined __thiscall FUN_10090417(void * this, int param_1)
 * Address ranges: 10090417-10090493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10090417(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(uint *)((int)this + 0xb8);
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xb4) + uVar2 * 4) == param_1) {
        if (uVar2 != 0xffffffff) {
          uVar2 = uVar2 + 1;
          if (uVar2 < uVar1) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0xb4) + -4 + uVar2 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0xb4) + uVar2 * 4);
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(uint *)((int)this + 0xb8));
          }
          *(int *)((int)this + 0xb8) = *(int *)((int)this + 0xb8) + -1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if (*(int *)((int)this + 0xb8) == 0) {
    thunk_FUN_100cfd6c(DAT_100df2e4);
    DAT_100df2e4 = (LPVOID)0x0;
    DAT_100e39f4 = 0;
  }
  return;
}

