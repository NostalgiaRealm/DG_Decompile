/*
 * FUN_10053630 at 10053630
 * undefined __thiscall FUN_10053630(void * this, int param_1, float * param_2)
 * Address ranges: 10053630-1005367d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053630(void *this,int param_1,float *param_2)

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
    if (0xff < param_1 - 10U) goto LAB_10053661;
  }
  (**(code **)(*(int *)this + 0xec))(0);
LAB_10053661:
  FUN_10052440((int)this + 0x90,(int)this + 0xf660,param_1,param_2);
  return;
}

