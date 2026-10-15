/*
 * FUN_100295fc at 100295fc
 * undefined4 __thiscall FUN_100295fc(void * this, int param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 100295fc-10029847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100295fc(void *this,int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_2;
  uVar2 = 0;
  *param_3 = 0;
  if (param_1 == *(int *)((int)this + 0x14)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)**(undefined4 **)(*(int *)((int)this + 8) + (int)param_2 * 4))
                          (*puVar1,param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if (param_1 == *(int *)((int)this + 0x18)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 4))
                          (*puVar1,puVar1[1],puVar1[2],param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if (param_1 == *(int *)((int)this + 0x1c)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 8))
                          (*puVar1,param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if (param_1 == *(int *)((int)this + 0x20)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 0xc))
                          (*puVar1,puVar1[1],param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if (param_1 == *(int *)((int)this + 0x24)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 0x10))
                          (*puVar1,puVar1[1],param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if (param_1 == *(int *)((int)this + 0x28)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 0x14))
                          (*puVar1,puVar1[1],param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if (param_1 == *(int *)((int)this + 0x2c)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 0x18))
                          (*puVar1,param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if (param_1 == *(int *)((int)this + 0x30)) {
    param_2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        if (*param_3 != 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 0x1c))
                          (*puVar1,puVar1[1],puVar1[2],puVar1[3],param_3);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (param_2 < *(undefined4 **)((int)this + 0xc));
    }
  }
  else if ((param_1 == *(int *)((int)this + 0x34)) &&
          (param_2 = (undefined4 *)0x0, *(int *)((int)this + 0xc) != 0)) {
    do {
      if (*param_3 != 0) {
        return uVar2;
      }
      uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 8) + (int)param_2 * 4) + 0x20))
                        (*puVar1,puVar1[1],puVar1[2],puVar1[3],param_3);
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (param_2 < *(undefined4 **)((int)this + 0xc));
  }
  return uVar2;
}

