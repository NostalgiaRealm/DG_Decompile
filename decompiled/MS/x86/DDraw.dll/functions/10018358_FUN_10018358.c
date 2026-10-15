/*
 * FUN_10018358 at 10018358
 * undefined __thiscall FUN_10018358(void * this, undefined4 * param_1)
 * Address ranges: 10018358-100183cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018358(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100600a0(*(int *)((int)this + -0x7c) + 0x11c0);
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
    FUN_1001540f((void *)((int)this + -0x3c),1,1);
  }
  FUN_10021fa0((void *)((int)this + -0xc0),param_1);
  return;
}

