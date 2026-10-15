/*
 * FUN_1002582a at 1002582a
 * undefined __thiscall FUN_1002582a(void * this, int param_1)
 * Address ranges: 1002582a-100258db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002582a(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(uint *)((int)this + 0x144);
  if (*(char *)((int)this + 0x14f) == '\0') {
    if (uVar3 != 0) {
      do {
        if (*(int *)(*(int *)((int)this + 0x140) + uVar2 * 4) == param_1) {
          *(undefined4 *)(*(int *)((int)this + 0x140) + uVar2 * 4) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 0x144));
    }
  }
  else {
    if (uVar3 != 0) {
      do {
        if (*(int *)(*(int *)((int)this + 0x140) + uVar2 * 4) == param_1) {
          if (uVar2 < uVar3) {
            while (uVar2 = uVar2 + 1, uVar2 < uVar3) {
              *(undefined4 *)(*(int *)((int)this + 0x140) + -4 + uVar2 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x140) + uVar2 * 4);
              uVar3 = *(uint *)((int)this + 0x144);
            }
            *(uint *)((int)this + 0x144) = uVar3 - 1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    uVar3 = 0;
    if (*(int *)((int)this + 300) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x128) + uVar3 * 4);
        if (*(int *)(iVar1 + 0x104) == param_1) {
          *(undefined4 *)(iVar1 + 0x104) = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 300));
    }
  }
  return;
}

