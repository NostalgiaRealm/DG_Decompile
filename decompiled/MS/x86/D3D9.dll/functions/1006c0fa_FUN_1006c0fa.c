/*
 * FUN_1006c0fa at 1006c0fa
 * uint __thiscall FUN_1006c0fa(void * this, int * param_1, int param_2, uint param_3, char param_4)
 * Address ranges: 1006c0fa-1006c1e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1006c0fa(void *this,int *param_1,int param_2,uint param_3,char param_4)

{
  undefined4 uVar1;
  
  if (param_4 != '\0') {
    param_3 = FUN_100c2e34(param_2 + 0x18,4,'\x01');
    if ((*(uint *)(param_2 + 0x19c) & 0x10000) == 0) {
      FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
    }
    else {
      uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,0xf,0xf);
      FUN_100c3be1((int *)(param_2 + 0x18),param_1,0);
      FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
      (**(code **)(*(int *)this + 4))(param_2,uVar1);
    }
  }
  return param_3;
}

