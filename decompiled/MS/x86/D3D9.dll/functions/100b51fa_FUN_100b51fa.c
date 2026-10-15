/*
 * FUN_100b51fa at 100b51fa
 * undefined __thiscall FUN_100b51fa(void * this, int param_1, undefined4 param_2, uint param_3, int param_4, int param_5, int param_6)
 * Address ranges: 100b51fa-100b52b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100b51fa(void *this,int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *(int *)(param_4 + uVar3 * 4);
      if (((*(int *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x704) != iVar1) ||
          (*(int *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x744) !=
           *(int *)(param_5 + uVar3 * 4))) ||
         (*(int *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x784) !=
          *(int *)(param_6 + uVar3 * 4))) {
        *(int *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x704) = iVar1;
        *(undefined4 *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x744) =
             *(undefined4 *)(param_5 + uVar3 * 4);
        *(undefined4 *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x784) =
             *(undefined4 *)(param_6 + uVar3 * 4);
        if (iVar4 == 0) {
          iVar4 = 1;
          uVar5 = uVar3;
        }
        else {
          iVar4 = (uVar3 - uVar5) + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
    if (iVar4 != 0) {
      piVar2 = *(int **)((int)this + param_1 * 0x1510 + 0x514);
      (**(code **)(*piVar2 + 0x48))
                (piVar2,uVar5,iVar4,(int)this + uVar5 * 4 + param_1 * 0x1510 + 0x704,
                 (int)this + uVar5 * 4 + param_1 * 0x1510 + 0x744,
                 (int)this + uVar5 * 4 + param_1 * 0x1510 + 0x784);
    }
  }
  return;
}

