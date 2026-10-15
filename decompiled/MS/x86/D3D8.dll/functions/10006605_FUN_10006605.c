/*
 * FUN_10006605 at 10006605
 * undefined __thiscall FUN_10006605(void * this, int param_1)
 * Address ranges: 10006605-100066bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006605(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(uint *)((int)this + 0xb58) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xb54) + uVar4 * 4) == param_1) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_1 + 0xb0) == 0) && (*(int *)((int)this + 0xb04) == 1)) {
          iVar3 = *(int *)((int)this + 0xb2c) * 0x228;
          uVar2 = *(uint *)(param_1 + 0xb4);
          uVar1 = *(uint *)(&DAT_100ba918 + iVar3);
          *(uint *)(&DAT_100ba918 + iVar3) = uVar2 + *(uint *)(&DAT_100ba918 + iVar3);
          *(uint *)(&DAT_100ba91c + iVar3) =
               *(int *)(&DAT_100ba91c + iVar3) + (uint)CARRY4(uVar2,uVar1);
        }
        uVar2 = *(uint *)((int)this + 0xb58);
        if (uVar4 < uVar2) {
          while (uVar4 = uVar4 + 1, uVar4 < uVar2) {
            *(undefined4 *)(*(int *)((int)this + 0xb54) + -4 + uVar4 * 4) =
                 *(undefined4 *)(*(int *)((int)this + 0xb54) + uVar4 * 4);
            uVar2 = *(uint *)((int)this + 0xb58);
          }
          *(uint *)((int)this + 0xb58) = uVar2 - 1;
        }
        FUN_1000164c(this,(undefined4 *)(-(uint)(param_1 != 0) & param_1 + 0xc0U));
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0xb58));
  }
  return;
}

