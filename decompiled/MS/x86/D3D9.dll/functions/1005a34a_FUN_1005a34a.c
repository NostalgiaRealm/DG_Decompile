/*
 * FUN_1005a34a at 1005a34a
 * undefined __stdcall FUN_1005a34a(uint * param_1, uint param_2, int param_3, uint param_4, undefined4 param_5, int * param_6, char param_7, char param_8, undefined4 param_9, uint param_10)
 * Address ranges: 1005a34a-1005a4f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a34a(uint *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
                 int *param_6,char param_7,char param_8,undefined4 param_9,uint param_10)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int local_8;
  
  uVar4 = __aullshr((char)param_2 * '\x03',param_10 & 0xffff);
  uVar2 = (uint)uVar4 & 7;
  local_8 = 0;
  iVar3 = local_8;
  if ((uVar4 & 7) != 0) {
    if (((param_10 >> 0x13 & 1) == 0) || (uVar2 != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((param_10 >> 0x1e & 1) == 0 && !bVar1) {
      iVar3 = param_3;
      if (param_7 != '\0') {
        FUN_100c3be1((int *)param_1,param_6,0x32);
        iVar3 = local_8;
      }
    }
    else {
      FUN_100c3be1((int *)param_1,param_6,0xe);
      if (!bVar1) {
        FUN_100c3be1((int *)param_1,param_6,0x37);
      }
      if (param_7 != '\0') {
        FUN_100c3be1((int *)param_1,param_6,0);
      }
    }
  }
  FUN_10059057(param_1,uVar2,param_2,param_4,param_5,param_9,param_10,param_6,iVar3,0xe4);
  if (((uVar4 & 7) != 0) && (param_8 != '\0')) {
    FUN_100c3be1((int *)param_1,param_6,0x38);
  }
  return;
}

