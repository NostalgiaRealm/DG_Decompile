/*
 * FUN_1004948f at 1004948f
 * undefined __thiscall FUN_1004948f(void * this, int param_1)
 * Address ranges: 1004948f-1004956f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004948f(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)((int)this + 0x1efc) != '\0') && (uVar3 = 0, *(int *)((int)this + 0xa0) != 0)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x9c) + uVar3 * 4);
      if (*(int *)(iVar1 + 0x1518) == param_1) {
        *(undefined4 *)(iVar1 + 0x1518) = 0;
      }
      if (param_1 == *(int *)(iVar1 + 0x151c)) {
        *(undefined4 *)(iVar1 + 0x151c) = 0;
        *(undefined4 *)(iVar1 + 0x1520) = 0;
      }
      uVar2 = 0;
      if (*(uint *)(iVar1 + 0x1528) != 0) {
        do {
          if (*(int *)(*(int *)(iVar1 + 0x1524) + uVar2 * 8) == param_1) {
            FUN_100428cc((void *)(iVar1 + 0x1524),uVar2);
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(iVar1 + 0x1528));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xa0));
  }
  uVar3 = *(uint *)((int)this + 0xac);
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      if (param_1 == *(int *)(*(int *)((int)this + 0xa8) + uVar2 * 4)) {
        if (uVar3 <= uVar2) {
          return;
        }
        while (uVar2 = uVar2 + 1, uVar2 < uVar3) {
          *(undefined4 *)(*(int *)((int)this + 0xa8) + -4 + uVar2 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0xa8) + uVar2 * 4);
          uVar3 = *(uint *)((int)this + 0xac);
        }
        *(uint *)((int)this + 0xac) = uVar3 - 1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

