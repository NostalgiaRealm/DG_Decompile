/*
 * FUN_180050658 at 180050658
 * int __cdecl FUN_180050658(longlong param_1, ulonglong param_2, HMODULE param_3, undefined8 param_4, undefined8 param_5, undefined8 * param_6)
 * Address ranges: 180050658-180050757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180050658(longlong param_1,ulonglong param_2,HMODULE param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  param_6[1] = 0;
  *param_6 = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  iVar6 = 1;
  uVar8 = 0;
  do {
    if (iVar6 == 0) goto LAB_180050710;
    DVar2 = FUN_180043270(param_3,(LPCWSTR)(ulonglong)(ushort)(&DAT_18006c428)[uVar8],L"RT_CUSTOM");
    puVar4 = FUN_1800432c0(param_3,(LPCWSTR)(ulonglong)(ushort)(&DAT_18006c428)[uVar8],L"RT_CUSTOM")
    ;
    if ((puVar4 == (undefined8 *)0x0) ||
       (plVar5 = *(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x18c0 + 0x6b0),
       iVar3 = (**(code **)(*plVar5 + 0x90))(plVar5,puVar4,DVar2,0,param_6 + uVar8), iVar3 < 0)) {
      iVar6 = 0;
    }
    thunk_FUN_180060a18(puVar4);
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar1;
  } while (uVar1 < 4);
  if (iVar6 == 0) {
LAB_180050710:
    lVar7 = 0;
    do {
      if ((longlong *)param_6[lVar7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_6[lVar7] + 0x10))();
        param_6[lVar7] = 0;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 4);
  }
  return iVar6;
}

