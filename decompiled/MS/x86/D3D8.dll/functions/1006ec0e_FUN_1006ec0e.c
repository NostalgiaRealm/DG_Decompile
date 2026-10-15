/*
 * FUN_1006ec0e at 1006ec0e
 * undefined __thiscall FUN_1006ec0e(void * this, undefined4 * param_1)
 * Address ranges: 1006ec0e-1006ec85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006ec0e(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100ac680(*(int *)((int)this + -0x7c) + 0x11c0);
  if (*(int *)((int)this + -0x30) != 0) {
    uVar2 = 0;
    if (*(int *)((int)this + -0x9c) != 0) {
      do {
        uVar1 = 0;
        if (*(int *)((int)this + -0xa0) != 0) {
          do {
            (**(code **)(*(int *)((int)this + -0xc0) + 4))(uVar1,uVar2,1);
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(uint *)((int)this + -0xa0));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + -0x9c));
    }
    FUN_1006bcc0((void *)((int)this + -0x3c),1,1);
  }
  FUN_10078fec((void *)((int)this + -0xc0),param_1);
  return;
}

