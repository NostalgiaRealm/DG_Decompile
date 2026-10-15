/*
 * FUN_1000cabe at 1000cabe
 * undefined __thiscall FUN_1000cabe(void * this, undefined4 * param_1)
 * Address ranges: 1000cabe-1000cb1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000cabe(void *this,undefined4 *param_1)

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
    FUN_1000ae4f((void *)((int)this + -0x20),1,1);
  }
  FUN_10021fa0((void *)((int)this + -0x88),param_1);
  return;
}

