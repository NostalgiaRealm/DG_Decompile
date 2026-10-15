/*
 * FUN_100316bb at 100316bb
 * undefined __stdcall FUN_100316bb(uint * param_1, int param_2, uint param_3, int param_4, undefined4 param_5, undefined4 param_6, uint param_7, int * param_8, int param_9)
 * Address ranges: 100316bb-10031988
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100316bb(uint *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,int *param_8,int param_9)

{
  int iVar1;
  
  iVar1 = param_4;
  if (param_9 != 0) {
    iVar1 = param_9;
  }
  if ((param_2 == 2) || (param_2 == 6)) {
    FUN_10057c8a((int *)param_1,param_8,0x10);
    FUN_10057c8a((int *)param_1,param_8,0x44);
    FUN_10057c8a((int *)param_1,param_8,0x38);
  }
  if (param_2 == 5) {
    if (param_4 != iVar1) {
      FUN_10058073(0xe4,0xf4);
      FUN_10057c8a((int *)param_1,param_8,0x36);
    }
LAB_100317bc:
    FUN_10057c8a((int *)param_1,param_8,0x38);
    return;
  }
  if (param_2 == 6) goto LAB_100317bc;
  if (param_2 == 0) {
    FUN_10057c8a((int *)param_1,param_8,0x36);
    return;
  }
  if (param_2 == 1) {
LAB_100317fb:
    FUN_10056ea8(param_1,param_3,0,param_3);
    FUN_10056e65(param_1,param_3,0,param_3);
    FUN_10057c8a((int *)param_1,param_8,0x45);
LAB_10031846:
    if ((((param_2 != 1) && (param_2 != 2)) && (param_2 != 3)) && ((param_2 != 4 && (param_2 != 7)))
       ) {
      return;
    }
  }
  else {
    if (param_2 == 2) {
      FUN_10056ea8(param_1,param_3,0,param_3);
      FUN_10056e65(param_1,param_3 + 8,1,param_3 + 8);
    }
    else {
      if (param_2 != 3) {
        if ((param_2 == 4) || (param_2 == 7)) goto LAB_100317fb;
        goto LAB_10031846;
      }
      FUN_10056ea8(param_1,param_3,0,param_3);
      FUN_10056e65(param_1,param_3 + 0x10,2,param_3 + 0x10);
    }
    FUN_10057c8a((int *)param_1,param_8,0x45);
  }
  if ((param_7 >> 0x1c & 1) == 0) {
    return;
  }
  FUN_10057c8a((int *)param_1,param_8,1);
  FUN_10057c8a((int *)param_1,param_8,0x3c);
  return;
}

