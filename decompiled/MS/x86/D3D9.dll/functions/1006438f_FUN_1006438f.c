/*
 * FUN_1006438f at 1006438f
 * undefined __thiscall FUN_1006438f(void * this, uint * param_1, int * param_2, uint * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1006438f-100643f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1006438f(void *this,uint *param_1,int *param_2,uint *param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  
  do {
    while( true ) {
      uVar1 = *param_3 & 0xffff;
      if (uVar1 < 0x31) break;
      if (uVar1 == 0x51) {
LAB_100643ef:
        param_3 = param_3 + 6;
      }
      else if (uVar1 == 0xfffe) {
        param_3 = param_3 + (*param_3 >> 0x10);
LAB_100643ea:
        param_3 = param_3 + 1;
      }
      else {
        if (uVar1 == 0xffff) {
          return;
        }
LAB_100643ce:
        param_3 = FUN_100625d4(this,param_1,param_2,param_3,param_4,param_5);
      }
    }
    if (uVar1 == 0x30) goto LAB_100643ef;
    if (uVar1 == 0) goto LAB_100643ea;
    if (uVar1 == 0x1c) {
      return;
    }
    if ((uVar1 != 0x1f) && (uVar1 != 0x2f)) goto LAB_100643ce;
    param_3 = param_3 + 3;
  } while( true );
}

