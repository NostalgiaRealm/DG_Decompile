/*
 * FUN_1006c1e2 at 1006c1e2
 * uint __thiscall FUN_1006c1e2(void * this, int * param_1, int param_2, uint param_3, char param_4)
 * Address ranges: 1006c1e2-1006c32c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1006c1e2(void *this,int *param_1,int param_2,uint param_3,char param_4)

{
  undefined4 uVar1;
  
  if (param_4 == '\0') {
    return param_3;
  }
  if ((*(uint *)(param_2 + 0x19c) & 0x20004) != 0) {
    param_3 = FUN_100c2e34(param_2 + 0x18,4,'\x01');
  }
  if ((*(uint *)(param_2 + 0x19c) & 0x20004) == 0x20004) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,0x10,0xf);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  }
  else {
    if ((*(uint *)(param_2 + 0x19c) & 4) != 0) {
      FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
      return param_3;
    }
    if ((*(uint *)(param_2 + 0x19c) & 0x20000) == 0) {
      return param_3;
    }
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,0x10,0xf);
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
  }
  (**(code **)(*(int *)this + 4))(param_2,uVar1);
  return param_3;
}

