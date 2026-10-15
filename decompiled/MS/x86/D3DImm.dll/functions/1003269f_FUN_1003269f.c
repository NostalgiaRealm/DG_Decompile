/*
 * FUN_1003269f at 1003269f
 * undefined __stdcall FUN_1003269f(uint * param_1, uint param_2, int param_3, uint param_4, undefined4 param_5, int * param_6, char param_7, char param_8, uint param_9, uint param_10)
 * Address ranges: 1003269f-10032839
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003269f(uint *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
                 int *param_6,char param_7,char param_8,uint param_9,uint param_10)

{
  uint uVar1;
  ulonglong uVar2;
  int local_10;
  
  uVar2 = __aullshr((char)param_2 * '\x03',0);
  uVar1 = (uint)uVar2 & 7;
  local_10 = 0;
  if ((uVar2 & 7) != 0) {
    if ((param_10 >> 0x1d & 1) == 0) {
      if (param_7 == '\0') {
        local_10 = param_3;
      }
      else {
        FUN_10057c8a((int *)param_1,param_6,0x32);
      }
    }
    else {
      FUN_10057c8a((int *)param_1,param_6,0xe);
      FUN_10057c8a((int *)param_1,param_6,0x37);
      if (param_7 != '\0') {
        FUN_10057c8a((int *)param_1,param_6,0);
      }
    }
  }
  if ((param_2 == 0) && ((param_9 & 0x2000000) != 0)) {
    FUN_100372b8(param_1,uVar1,0,param_4,param_6,local_10,0xe4,param_9,param_10);
  }
  else {
    FUN_100316bb(param_1,uVar1,param_2,param_4,uVar1,param_9,param_10,param_6,local_10);
  }
  if (((uVar2 & 7) != 0) && (param_8 != '\0')) {
    FUN_10057c8a((int *)param_1,param_6,0x38);
  }
  return;
}

