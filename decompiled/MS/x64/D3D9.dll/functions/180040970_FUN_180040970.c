/*
 * FUN_180040970 at 180040970
 * bool __fastcall FUN_180040970(undefined8 param_1, longlong param_2, uint param_3, undefined8 * param_4, longlong * param_5)
 * Address ranges: 180040970-180040a9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180040970(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_68 [7];
  
  plVar7 = (longlong *)(param_2 + 0x16d0);
  plVar6 = FUN_1800e4ca4(*(longlong *)(param_2 + 0x1508),local_68,plVar7,param_3,param_4);
  lVar2 = plVar6[1];
  lVar3 = plVar6[2];
  lVar4 = plVar6[3];
  *param_5 = *plVar6;
  param_5[1] = lVar2;
  lVar2 = plVar6[4];
  lVar5 = plVar6[5];
  param_5[2] = lVar3;
  param_5[3] = lVar4;
  param_5[4] = lVar2;
  param_5[5] = lVar5;
  if (param_5[1] == 0) {
    FUN_1800fb1f0(param_2 + 0x12c0);
    FUN_1800e7ff0(*(longlong *)(param_2 + 0x1500),
                  *(ulonglong *)(*(longlong *)(param_2 + 0x1508) + 0xb80));
    plVar6 = FUN_1800e4ca4(*(longlong *)(param_2 + 0x1508),local_68,plVar7,param_3,param_4);
    lVar2 = plVar6[1];
    lVar3 = plVar6[2];
    lVar4 = plVar6[3];
    *param_5 = *plVar6;
    param_5[1] = lVar2;
    lVar2 = plVar6[4];
    lVar5 = plVar6[5];
    param_5[2] = lVar3;
    param_5[3] = lVar4;
    param_5[4] = lVar2;
    param_5[5] = lVar5;
    if (param_5[1] == 0) {
      uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x1508) + 0xb78);
      FUN_1800e2ae8(*(longlong *)(param_2 + 0x1508) + 8,'\0');
      FUN_1800e7ff0(*(longlong *)(param_2 + 0x1500),uVar1);
      plVar7 = FUN_1800e4ca4(*(longlong *)(param_2 + 0x1508),local_68,plVar7,param_3,param_4);
      lVar2 = plVar7[1];
      lVar3 = plVar7[2];
      lVar4 = plVar7[3];
      *param_5 = *plVar7;
      param_5[1] = lVar2;
      lVar2 = plVar7[4];
      lVar5 = plVar7[5];
      param_5[2] = lVar3;
      param_5[3] = lVar4;
      param_5[4] = lVar2;
      param_5[5] = lVar5;
    }
  }
  return *param_5 != 0;
}

