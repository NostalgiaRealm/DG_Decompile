/*
 * FUN_10049570 at 10049570
 * undefined __thiscall FUN_10049570(void * this, int param_1)
 * Address ranges: 10049570-1004968c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049570(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x1efc) != '\0') {
    uVar3 = 0;
    if (*(int *)((int)this + 0xa0) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x9c) + uVar3 * 4);
        if (param_1 == *(int *)(iVar1 + 0x1530)) {
          *(undefined4 *)(iVar1 + 0x1530) = 0;
          *(undefined4 *)(iVar1 + 0x14b4) = 0;
          *(undefined1 *)(iVar1 + 0x1755) = 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 0xa0));
    }
    uVar3 = 0;
    if (*(int *)((int)this + 0xac) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0xa8) + uVar3 * 4);
        if (*(int *)(iVar1 + 0x88) == param_1) {
          *(undefined4 *)(iVar1 + 0x88) = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 0xac));
    }
    uVar3 = *(uint *)((int)this + 0xc4);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        if (param_1 == *(int *)(*(int *)((int)this + 0xc0) + uVar2 * 4)) {
          if (uVar3 <= uVar2) {
            return;
          }
          while (uVar2 = uVar2 + 1, uVar2 < uVar3) {
            *(undefined4 *)(*(int *)((int)this + 0xc0) + -4 + uVar2 * 4) =
                 *(undefined4 *)(*(int *)((int)this + 0xc0) + uVar2 * 4);
            uVar3 = *(uint *)((int)this + 0xc4);
          }
          *(uint *)((int)this + 0xc4) = uVar3 - 1;
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return;
}

