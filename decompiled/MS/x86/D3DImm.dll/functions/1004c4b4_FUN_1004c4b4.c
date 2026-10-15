/*
 * FUN_1004c4b4 at 1004c4b4
 * undefined4 __thiscall FUN_1004c4b4(void * this, int param_1, undefined4 * param_2, int param_3)
 * Address ranges: 1004c4b4-1004c597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c4b4(void *this,int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    if (param_3 == 1) {
      uVar4 = 0;
      if (*(int *)((int)this + 0x90) != 0) {
        do {
          uVar1 = uVar4 + 1;
          if (*(int *)(*(int *)((int)this + 0x8c) + uVar4 * 8) == param_1) {
            if (*(uint *)((int)this + 0x90) <= uVar1) {
              return 0x80070057;
            }
            piVar2 = *(int **)(*(int *)((int)this + 0x8c) + uVar1 * 8);
            (**(code **)(*piVar2 + 4))(piVar2);
            uVar3 = *(undefined4 *)(*(int *)((int)this + 0x8c) + uVar1 * 8);
            goto LAB_1004c58d;
          }
          uVar4 = uVar1;
        } while (uVar1 < *(uint *)((int)this + 0x90));
      }
    }
    else {
      if (param_3 == 2) {
        if (*(int *)((int)this + 0x90) == 0) {
          return 0;
        }
        (**(code **)(*(int *)**(undefined4 **)((int)this + 0x8c) + 4))
                  ((int *)**(undefined4 **)((int)this + 0x8c));
        uVar3 = **(undefined4 **)((int)this + 0x8c);
      }
      else {
        if (param_3 != 4) {
          return 0x80070057;
        }
        if (*(int *)((int)this + 0x90) == 0) {
          return 0;
        }
        piVar2 = *(int **)(*(int *)((int)this + 0x8c) + -8 + *(int *)((int)this + 0x90) * 8);
        (**(code **)(*piVar2 + 4))(piVar2);
        uVar3 = *(undefined4 *)(*(int *)((int)this + 0x8c) + -8 + *(int *)((int)this + 0x90) * 8);
      }
LAB_1004c58d:
      uVar5 = 0;
      *param_2 = uVar3;
    }
  }
  return uVar5;
}

