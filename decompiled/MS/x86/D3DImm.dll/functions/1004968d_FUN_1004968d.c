/*
 * FUN_1004968d at 1004968d
 * undefined __thiscall FUN_1004968d(void * this, int param_1)
 * Address ranges: 1004968d-10049742
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004968d(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x1efc) != '\0') {
    uVar2 = *(uint *)((int)this + 0xd0);
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        if (param_1 == *(int *)(*(int *)((int)this + 0xcc) + uVar1 * 4)) {
          if (uVar1 < uVar2) {
            while (uVar1 = uVar1 + 1, uVar1 < uVar2) {
              *(undefined4 *)(*(int *)((int)this + 0xcc) + -4 + uVar1 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0xcc) + uVar1 * 4);
              uVar2 = *(uint *)((int)this + 0xd0);
            }
            *(uint *)((int)this + 0xd0) = uVar2 - 1;
          }
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    if ((*(uint *)(param_1 + 0x70) & 0x10800) == 0x10000) {
      (**(code **)(**(int **)((int)this + 0x90) + 0x54))(*(undefined4 *)(param_1 + 0x10));
      uVar2 = 0;
      if (*(int *)((int)this + 0xa0) != 0) {
        do {
          if (*(int *)(param_1 + 300) != 0) {
            (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x9c) + uVar2 * 4) + 0x14) + 0x94)
            )(*(int *)(param_1 + 300));
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)((int)this + 0xa0));
      }
    }
  }
  return;
}

