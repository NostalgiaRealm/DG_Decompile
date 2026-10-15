/*
 * FUN_1002cb30 at 1002cb30
 * undefined __thiscall FUN_1002cb30(void * this, int param_1, float * param_2)
 * Address ranges: 1002cb30-1002cb7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cb30(void *this,int param_1,float *param_2)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    break;
  default:
    if (7 < param_1 - 10U) goto LAB_1002cb5f;
  }
  (**(code **)(*(int *)this + 0x98))(0);
LAB_1002cb5f:
  FUN_1002b740((int)this + 0x80,(int)this + 0x1d30,param_1,param_2);
  return;
}

