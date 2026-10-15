/*
 * FUN_100076a4 at 100076a4
 * undefined __thiscall FUN_100076a4(void * this, int param_1, uint param_2, uint param_3, uint param_4, uint param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 100076a4-1000786a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100076a4(void *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_54 [10];
  int local_2c [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
      piVar1 = FUN_1000de8d(param_4,param_5,local_54,param_7);
      piVar3 = local_2c;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
      }
      piVar1 = (int *)(*(int *)((int)this + 0xc) + param_1 * 0x9d + 0x1f6);
      if (((((((local_2c[0] != *piVar1) || (local_2c[1] != piVar1[1])) || (local_2c[2] != piVar1[2])
             ) || ((local_2c[3] != piVar1[3] || (local_1c != piVar1[4])))) ||
           ((local_18 != piVar1[5] || ((local_14 != piVar1[6] || (local_10 != piVar1[7])))))) ||
          (local_c != piVar1[8])) || (local_8 != piVar1[9])) {
        (**(code **)(**(int **)((int)this + 0xc) + 0x178))
                  (param_1,local_2c[0],local_2c[1],local_2c[2],local_2c[3],local_1c,local_18,
                   local_14,local_10,local_c,local_8);
        piVar3 = local_2c;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar1 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar1 = piVar1 + 1;
        }
      }
      piVar1 = FUN_1000de8d(param_2,param_3,local_54,param_6);
      piVar3 = local_2c;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
      }
      piVar1 = (int *)(*(int *)((int)this + 0xc) + param_1 * 0x9d + 0x21e);
      if (((((local_2c[0] != *piVar1) || (local_2c[1] != piVar1[1])) || (local_2c[2] != piVar1[2]))
          || (((local_2c[3] != piVar1[3] || (local_1c != piVar1[4])) ||
              ((local_18 != piVar1[5] || ((local_14 != piVar1[6] || (local_10 != piVar1[7]))))))))
         || ((local_c != piVar1[8] || (local_8 != piVar1[9])))) {
        (**(code **)(**(int **)((int)this + 0xc) + 0x174))
                  (param_1,local_2c[0],local_2c[1],local_2c[2],local_2c[3],local_1c,local_18,
                   local_14,local_10,local_c,local_8);
        piVar3 = local_2c;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar1 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar1 = piVar1 + 1;
        }
      }
      FUN_1000616b((int)this);
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0x3d0) = 0;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

