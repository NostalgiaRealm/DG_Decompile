/*
 * FUN_1000690d at 1000690d
 * int * __thiscall FUN_1000690d(void * this, int * param_1, int param_2)
 * Address ranges: 1000690d-10006991
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1000690d(void *this,int *param_1,int param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  *param_1 = 0;
  piVar1 = param_1 + 1;
  *piVar1 = 0;
  local_8 = this;
  (**(code **)(*(int *)**(undefined4 **)((int)this + 0x14) + 0x14))
            ((int *)**(undefined4 **)((int)this + 0x14),param_2,0,param_1);
  if ((*param_1 != 0) && ((*(byte *)(param_2 + 0x20) & 8) != 0)) {
    local_20 = *(undefined4 *)(param_2 + 0x10);
    local_1c = 5;
    local_18 = 0;
    local_14 = 0xffffffff;
    local_10 = 0;
    local_c = 1;
    (**(code **)(*(int *)**(undefined4 **)((int)local_8 + 0x14) + 0x1c))
              ((int *)**(undefined4 **)((int)local_8 + 0x14),*param_1,&local_20,piVar1);
    if (*piVar1 == 0) {
      (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
      *param_1 = 0;
    }
  }
  return param_1;
}

