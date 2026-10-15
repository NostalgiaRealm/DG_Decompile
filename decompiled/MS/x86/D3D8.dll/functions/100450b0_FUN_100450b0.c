/*
 * FUN_100450b0 at 100450b0
 * undefined __thiscall FUN_100450b0(void * this, int param_1, float * param_2)
 * Address ranges: 100450b0-100450fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100450b0(void *this,int param_1,float *param_2)

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
    if (0xff < param_1 - 10U) goto LAB_100450e1;
  }
  (**(code **)(*(int *)this + 0xc0))(0);
LAB_100450e1:
  FUN_10043ee0((int)this + 0x90,(int)this + 0xd970,param_1,param_2);
  return;
}

