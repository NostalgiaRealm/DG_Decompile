/*
 * FUN_10079e90 at 10079e90
 * undefined __thiscall FUN_10079e90(void * this, int param_1)
 * Address ranges: 10079e90-10079f0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10079e90(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(uint *)((int)this + 0x84);
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0x80) + uVar2 * 4) == param_1) {
        if (uVar2 != 0xffffffff) {
          uVar2 = uVar2 + 1;
          if (uVar2 < uVar1) {
            do {
              *(undefined4 *)(*(int *)((int)this + 0x80) + -4 + uVar2 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x80) + uVar2 * 4);
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(uint *)((int)this + 0x84));
          }
          *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if (*(int *)((int)this + 0x84) == 0) {
    thunk_FUN_100ad48c(DAT_100bee2c);
    DAT_100bee2c = (LPVOID)0x0;
    DAT_100bee30 = 0;
  }
  return;
}

