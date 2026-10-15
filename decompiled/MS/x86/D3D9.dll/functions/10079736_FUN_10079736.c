/*
 * FUN_10079736 at 10079736
 * undefined __thiscall FUN_10079736(void * this, undefined4 * param_1)
 * Address ranges: 10079736-10079793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10079736(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + -0x14) != 0) {
    uVar2 = 0;
    if (*(int *)((int)this + -100) != 0) {
      do {
        uVar1 = 0;
        if (*(int *)((int)this + -0x68) != 0) {
          do {
            (**(code **)(*(int *)((int)this + -0x88) + 4))(uVar1,uVar2,1);
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(uint *)((int)this + -0x68));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + -100));
    }
    FUN_10077958((void *)((int)this + -0x20),1,1);
  }
  FUN_1008f364((void *)((int)this + -0x88),param_1);
  return;
}

