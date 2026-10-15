/*
 * FUN_10052c4c at 10052c4c
 * undefined __thiscall FUN_10052c4c(void * this, uint param_1, undefined4 param_2, uint param_3)
 * Address ranges: 10052c4c-10052dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10052c4c(void *this,uint param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(uint *)((int)this + 0x8e0) != 0) {
    piVar1 = (int *)((int)this + 0x8f4);
    *(undefined4 *)((int)this + 0x8f8) = 0;
    uVar3 = FUN_100502bc(*(void **)((int)this + 0x8e4),param_1,piVar1,param_3,
                         *(uint *)((int)this + 0x8e0),this,*(uint *)((int)this + 0x938),
                         *(uint *)((int)this + 0x93c),piVar1,piVar1);
    if (*(int *)(*(int *)((int)this + 0x8e0) + 0x20) != 3) {
      uVar4 = FUN_1004fe7e(uVar3,param_3,0);
      uVar6 = 0;
      if ((char)uVar4 == '\0') {
        if (*(int *)((int)this + 0x8f8) != 0) {
          do {
            iVar5 = uVar6 * 0xc;
            uVar3 = *(uint *)(iVar5 + 4 + *piVar1);
            uVar2 = *(uint *)(iVar5 + *piVar1);
            uVar4 = FUN_1004fe7e(uVar2,uVar3,0);
            if ((char)uVar4 != '\0') {
              FUN_10052419(this,param_1,*(undefined4 *)(iVar5 + 8 + *(int *)((int)this + 0x8f4)),
                           uVar2,uVar3);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)((int)this + 0x8f8));
        }
      }
      else {
        if (*(int *)((int)this + 0x8f8) != 0) {
          do {
            uVar2 = *(uint *)(uVar6 * 0xc + *piVar1);
            uVar4 = FUN_1004fe7e(uVar2,uVar3,0);
            if ((char)uVar4 != '\0') {
              FUN_10052419(this,param_1,
                           *(undefined4 *)(uVar6 * 0xc + 8 + *(int *)((int)this + 0x8f4)),uVar2,
                           uVar3);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)((int)this + 0x8f8));
        }
        FUN_10052419(this,param_1,0xffffffff,uVar3,param_3);
        uVar3 = 0;
        if (*(int *)((int)this + 0x8f8) != 0) {
          do {
            uVar6 = *(uint *)(uVar3 * 0xc + 4 + *piVar1);
            uVar4 = FUN_1004fe7e(param_3,uVar6,0);
            if ((char)uVar4 != '\0') {
              FUN_10052419(this,param_1,
                           *(undefined4 *)(uVar3 * 0xc + 8 + *(int *)((int)this + 0x8f4)),param_3,
                           uVar6);
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)((int)this + 0x8f8));
        }
      }
    }
  }
  return;
}

