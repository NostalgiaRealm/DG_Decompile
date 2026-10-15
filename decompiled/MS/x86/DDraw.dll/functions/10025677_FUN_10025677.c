/*
 * FUN_10025677 at 10025677
 * undefined __thiscall FUN_10025677(void * this, int * param_1)
 * Address ranges: 10025677-10025799
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025677(void *this,int *param_1)

{
  char cVar1;
  uint uVar2;
  int extraout_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  if (*(char *)((int)this + 0x14f) == '\0') {
    uVar3 = 0;
    if (*(uint *)((int)this + 300) != 0) {
      do {
        if (*(int **)(*(int *)((int)this + 0x128) + uVar3 * 4) == param_1) {
          *(undefined4 *)(*(int *)((int)this + 0x128) + uVar3 * 4) = 0;
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 300));
    }
  }
  else {
    if (param_1 == *(int **)((int)this + 0xf4)) {
      *(undefined4 *)((int)this + 0xf4) = 0;
    }
    if (*(uint *)((int)this + 300) != 0) {
      do {
        if (*(int **)(*(int *)((int)this + 0x128) + uVar3 * 4) == param_1) {
          if (DAT_1006c238 != (int *)0x0) {
            (**(code **)(*DAT_1006c238 + 0x2c))(*(undefined4 *)((int)this + 0xc),param_1);
          }
          FUN_10022430(this,param_1);
          uVar2 = *(uint *)((int)this + 300);
          if (uVar3 < uVar2) {
            while (uVar3 = uVar3 + 1, uVar3 < uVar2) {
              *(undefined4 *)(*(int *)((int)this + 0x128) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x128) + uVar3 * 4);
              uVar2 = *(uint *)((int)this + 300);
            }
            *(uint *)((int)this + 300) = uVar2 - 1;
          }
          if (((*(int *)(param_1[1] + 0xcc) == 1) && (*(char *)((int)this + 0x14c) == '\0')) &&
             (cVar1 = FUN_10032177((int)(param_1 + 0x54)), cVar1 != '\0')) {
            iVar4 = *(int *)((int)this + 0x11c) * 0x228;
            uVar2 = FUN_10024ec6(extraout_ECX);
            uVar3 = *(uint *)(&DAT_1006c4a8 + iVar4);
            *(uint *)(&DAT_1006c4a8 + iVar4) = uVar2 + *(uint *)(&DAT_1006c4a8 + iVar4);
            *(uint *)(&DAT_1006c4ac + iVar4) =
                 *(int *)(&DAT_1006c4ac + iVar4) + (uint)CARRY4(uVar2,uVar3);
          }
          iVar5 = *(int *)((int)this + 0x124) + -1;
          iVar4 = (**(code **)(*param_1 + 0x40))();
          if (iVar4 != iVar5) {
            return;
          }
          *(int *)((int)this + 0x124) = iVar5;
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 300));
    }
  }
  return;
}

