/*
 * FUN_18009b094 at 18009b094
 * longlong * __fastcall FUN_18009b094(undefined8 param_1, longlong * param_2, longlong param_3, longlong param_4, longlong * param_5, longlong * param_6, int * param_7, uint * param_8, uint param_9, uint param_10, int param_11)
 * Address ranges: 18009b094-18009b1b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_18009b094(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
             longlong *param_5,longlong *param_6,int *param_7,uint *param_8,uint param_9,
             uint param_10,int param_11)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_78 [7];
  
  FUN_1800e4f84(param_4,param_2,param_5,param_6,param_7,param_8,param_9,param_10,param_11,0);
  if (param_2[1] == 0) {
    FUN_1800fb1f0(param_3 + 0x12c0);
    uVar1 = *(ulonglong *)(param_4 + 0xb78);
    FUN_1800e2ae8(param_4 + 8,'\0');
    FUN_1800e7ff0(*(longlong *)(param_4 + 0xb10),uVar1);
    plVar3 = FUN_1800e4f84(param_4,local_78,param_5,param_6,param_7,param_8,param_9,param_10,
                           param_11,0);
    lVar2 = plVar3[1];
    *param_2 = *plVar3;
    param_2[1] = lVar2;
    lVar2 = plVar3[3];
    param_2[2] = plVar3[2];
    param_2[3] = lVar2;
    lVar2 = plVar3[5];
    param_2[4] = plVar3[4];
    param_2[5] = lVar2;
  }
  return param_2;
}

