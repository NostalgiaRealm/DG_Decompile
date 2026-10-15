/*
 * FUN_10092bca at 10092bca
 * undefined4 __thiscall FUN_10092bca(void * this, int param_1, int * param_2)
 * Address ranges: 10092bca-10092c81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10092bca(void *this,int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_1 != 0) || (param_2 != (int *)0x0)) {
    if (param_2 != (int *)0x0) {
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        return 0x8876086c;
      }
      if (param_2[0xd] != 0) {
        if (param_2[0xd] != 2) {
          return 0x8876086c;
        }
        if (*(int *)((int)this + 0xdc8) != 3) {
          return 0x8876086c;
        }
      }
      if ((void *)param_2[6] != this) {
        return 0x8876086c;
      }
      (**(code **)(*param_2 + 0x18))();
      if ((int *)param_2[7] != (int *)0x0) {
        (**(code **)(*(int *)param_2[7] + 4))();
      }
    }
    piVar1 = *(int **)((int)this + param_1 * 4 + 0x18);
    if (piVar1 != (int *)0x0) {
      FUN_1000604e(piVar1);
    }
    if (param_1 == 0) {
      FUN_10018073(this,(int)param_2);
      *(undefined1 *)((int)this + 0xc2ef) = 1;
      uVar3 = *(undefined4 *)(param_2[1] + 100);
      uVar2 = *(undefined4 *)(param_2[1] + 0x68);
      *(undefined4 *)((int)this + 0x6d80) = 0;
      *(undefined4 *)((int)this + 0x6d84) = 0;
      *(undefined4 *)((int)this + 0x6d88) = uVar3;
      *(undefined4 *)((int)this + 0x6d8c) = uVar2;
      *(undefined1 *)((int)this + 0xc2f0) = 1;
    }
    *(int **)((int)this + param_1 * 4 + 0x18) = param_2;
    uVar3 = 0;
    *(undefined1 *)((int)this + 0xc2ed) = 1;
  }
  return uVar3;
}

