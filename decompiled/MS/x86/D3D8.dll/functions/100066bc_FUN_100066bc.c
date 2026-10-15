/*
 * FUN_100066bc at 100066bc
 * undefined __thiscall FUN_100066bc(void * this, int param_1)
 * Address ranges: 100066bc-10006764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100066bc(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 0xb64) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xb60) + uVar3 * 4) == param_1) {
        if (uVar3 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)((int)this + 0xb04) == 1)) {
          iVar4 = *(int *)((int)this + 0xb2c) * 0x228;
          uVar1 = FUN_1000e6ee(*(int *)(param_1 + 0x40),*(uint *)(param_1 + 0x44),
                               *(int *)(param_1 + 0x28));
          uVar2 = *(uint *)(&DAT_100ba918 + iVar4);
          *(uint *)(&DAT_100ba918 + iVar4) = uVar1 + *(uint *)(&DAT_100ba918 + iVar4);
          *(uint *)(&DAT_100ba91c + iVar4) =
               *(int *)(&DAT_100ba91c + iVar4) + (uint)CARRY4(uVar1,uVar2);
        }
        uVar2 = *(uint *)((int)this + 0xb64);
        if (uVar2 <= uVar3) {
          return;
        }
        while (uVar3 = uVar3 + 1, uVar3 < uVar2) {
          *(undefined4 *)(*(int *)((int)this + 0xb60) + -4 + uVar3 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0xb60) + uVar3 * 4);
          uVar2 = *(uint *)((int)this + 0xb64);
        }
        *(uint *)((int)this + 0xb64) = uVar2 - 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xb64));
  }
  return;
}

