/*
 * FUN_18004cde8 at 18004cde8
 * bool __fastcall FUN_18004cde8(longlong param_1, ulonglong param_2, HMODULE param_3, undefined8 param_4, undefined8 param_5, undefined8 * param_6)
 * Address ranges: 18004cde8-18004ceea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18004cde8(longlong param_1,ulonglong param_2,HMODULE param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[3] = 0;
  bVar2 = true;
  uVar7 = 0;
  do {
    if (!bVar2) goto LAB_18004ceb5;
    uVar3 = FUN_18005e260(param_3,(LPCWSTR)(ulonglong)(ushort)(&DAT_18006c440)[uVar7],L"RT_CUSTOM");
    puVar5 = FUN_18005e130(param_3,(LPCWSTR)(ulonglong)(ushort)(&DAT_18006c440)[uVar7],L"RT_CUSTOM")
    ;
    if (puVar5 == (undefined8 *)0x0) {
LAB_18004ce9a:
      bVar2 = false;
    }
    else {
      plVar1 = *(longlong **)((param_2 & 0xffffffff) * 0x18c0 + 0x6b0 + param_1);
      iVar4 = (**(code **)(*plVar1 + 0x90))(plVar1,puVar5,uVar3,0,param_6 + uVar7);
      if (iVar4 < 0) goto LAB_18004ce9a;
    }
    FUN_18005dbc0(puVar5);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while (uVar6 < 4);
  if (bVar2 == false) {
LAB_18004ceb5:
    lVar8 = 0;
    do {
      if ((longlong *)param_6[lVar8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_6[lVar8] + 0x10))();
        param_6[lVar8] = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
  }
  return bVar2;
}

