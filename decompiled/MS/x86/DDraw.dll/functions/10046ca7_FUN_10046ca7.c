/*
 * FUN_10046ca7 at 10046ca7
 * undefined __thiscall FUN_10046ca7(void * this, int param_1, undefined4 param_2, uint param_3, int param_4)
 * Address ranges: 10046ca7-10046d0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046ca7(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar5 = 0;
  iVar4 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *(int *)(param_4 + uVar3 * 4);
      if (*(int *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x604) != iVar1) {
        *(int *)((int)this + uVar3 * 4 + param_1 * 0x1510 + 0x604) = iVar1;
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
      (**(code **)(*piVar2 + 0x20))
                (piVar2,uVar5,iVar4,(int)this + uVar5 * 4 + param_1 * 0x1510 + 0x604);
    }
  }
  return;
}

