/*
 * FUN_10045470 at 10045470
 * undefined __thiscall FUN_10045470(void * this, int param_1)
 * Address ranges: 10045470-100456f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045470(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  void *this_00;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_100450a9(this,param_1);
  if ((char)uVar2 != '\0') {
    iVar3 = param_1 * 0x1510;
    FUN_10053b39(this,param_1);
    uVar4 = 0;
    if (*(int *)(iVar3 + 0x828 + (int)this) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar3 + 0x820 + (int)this) + 0x3c + uVar4 * 0x40);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0x828 + (int)this));
    }
    uVar4 = 0;
    *(undefined4 *)(iVar3 + 0x828 + (int)this) = 0;
    if (*(int *)(iVar3 + 0x83c + (int)this) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar3 + 0x834 + (int)this) + 0x110 + uVar4 * 0x118);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0x83c + (int)this));
    }
    uVar4 = 0;
    *(undefined4 *)(iVar3 + 0x83c + (int)this) = 0;
    if (*(int *)(iVar3 + 0x850 + (int)this) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar3 + 0x848 + (int)this) + 0x110 + uVar4 * 0x118);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0x850 + (int)this));
    }
    *(undefined4 *)(iVar3 + 0x850 + (int)this) = 0;
    this_00 = (void *)((int)this + iVar3 + 0x85c);
    uVar4 = 0;
    if (*(int *)((int)this_00 + 8) != 0) {
      do {
        FUN_1004d20c(this_00,*(int **)(*(int *)(iVar3 + 0x85c + (int)this) + 0x30 + uVar4 * 0x38));
        uVar4 = uVar4 + 1;
        this_00 = (void *)((int)this + iVar3 + 0x85c);
      } while (uVar4 < *(uint *)(iVar3 + 0x864 + (int)this));
      this_00 = (void *)((int)this + iVar3 + 0x85c);
    }
    uVar4 = 0;
    *(undefined4 *)((int)this_00 + 8) = 0;
    if (*(int *)(iVar3 + 0x878 + (int)this) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar3 + 0x870 + (int)this) + 0x18 + uVar4 * 0x20);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0x878 + (int)this));
    }
    uVar4 = 0;
    *(undefined4 *)(iVar3 + 0x878 + (int)this) = 0;
    if (*(int *)(iVar3 + 0x88c + (int)this) != 0) {
      do {
        FUN_10047335(*(void **)(iVar3 + 0x890 + (int)this),*(int *)(iVar3 + 0x894 + (int)this),
                     *(int **)(*(int *)(iVar3 + 0x884 + (int)this) + 0xc + uVar4 * 0x10));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0x88c + (int)this));
    }
    uVar4 = 0;
    *(undefined4 *)(iVar3 + 0x88c + (int)this) = 0;
    if (*(int *)(iVar3 + 0x8a0 + (int)this) != 0) {
      do {
        FUN_1004727f(*(void **)(iVar3 + 0x8a4 + (int)this),*(int *)(iVar3 + 0x8a8 + (int)this),
                     *(int **)(*(int *)(iVar3 + 0x898 + (int)this) + 0x3c + uVar4 * 0x40));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0x8a0 + (int)this));
    }
    *(undefined4 *)(iVar3 + 0x8a0 + (int)this) = 0;
    FUN_1004d5c5((int *)((int)this + iVar3 + 0x8ac));
    FUN_1004d5c5((int *)((int)this + iVar3 + 0x8ac));
    piVar1 = *(int **)(iVar3 + 0x998 + (int)this);
    uVar2 = extraout_ECX;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar3 + 0x998 + (int)this) = 0;
      uVar2 = extraout_ECX_00;
    }
    FUN_10047167(uVar2,2,(int)this + iVar3 + 0x97c,(int)this + iVar3 + 0x984);
    FUN_10047027(extraout_ECX_01,0x2b,(int)this + iVar3 + 0x8d0);
    FUN_10047255(extraout_ECX_02,extraout_ECX_02,(int)this + iVar3 + 0x8c0);
    piVar1 = *(int **)(iVar3 + 0x990 + (int)this);
    if (piVar1 != (int *)0x0) {
      FUN_100473a0(this,param_1,piVar1);
      *(undefined4 *)(iVar3 + 0x990 + (int)this) = 0;
    }
    FUN_1004727f(this,param_1,*(int **)(iVar3 + 0x98c + (int)this));
    *(undefined4 *)(iVar3 + 0x98c + (int)this) = 0;
  }
  return;
}

