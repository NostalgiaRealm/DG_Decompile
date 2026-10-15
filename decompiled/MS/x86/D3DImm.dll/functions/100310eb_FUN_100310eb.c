/*
 * FUN_100310eb at 100310eb
 * undefined __stdcall FUN_100310eb(int * param_1, int * param_2, undefined4 param_3, undefined4 param_4, uint param_5)
 * Address ranges: 100310eb-10031254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100310eb(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_5 >> 0x13 & 7;
  if (uVar1 == 0) {
switchD_10031180_caseD_0:
    FUN_10057c8a(param_1,param_2,0x4000d);
    return;
  }
  if (uVar1 != 7) {
    FUN_10056ee5((int)param_1,4,'\0');
    FUN_10057c8a(param_1,param_2,0x32);
    FUN_10057c8a(param_1,param_2,0x1c);
  }
  switch(uVar1) {
  case 0:
    goto switchD_10031180_caseD_0;
  case 1:
    goto LAB_10031197;
  case 2:
    uVar1 = 0x27;
    break;
  case 3:
    goto LAB_10031200;
  case 4:
LAB_10031197:
    uVar1 = 0x50;
    break;
  case 5:
    uVar1 = 0x20;
    break;
  case 6:
LAB_10031200:
    uVar1 = 0x4f;
    break;
  case 7:
    goto switchD_10031180_caseD_7;
  }
  FUN_10057c8a(param_1,param_2,uVar1);
  FUN_10057c8a(param_1,param_2,0x4000d);
switchD_10031180_caseD_7:
  return;
}

