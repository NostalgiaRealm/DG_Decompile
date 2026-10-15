/*
 * FUN_180050380 at 180050380
 * int __cdecl FUN_180050380(longlong param_1, ulonglong param_2, HMODULE param_3, uint param_4, longlong param_5, undefined1 * param_6)
 * Address ranges: 180050380-18005049f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180050380(longlong param_1,ulonglong param_2,HMODULE param_3,uint param_4,longlong param_5,
                 undefined1 *param_6)

{
  DWORD DVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  FUN_1800611b0(param_6,0,(ulonglong)param_4 << 3);
  iVar7 = 1;
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      if (iVar7 == 0) goto LAB_180050458;
      uVar5 = (uint)*(ushort *)(param_5 + uVar6 * 2);
      if (uVar5 != 0) {
        DVar1 = FUN_180043270(param_3,(LPCWSTR)(ulonglong)uVar5,L"RT_CUSTOM");
        puVar3 = FUN_1800432c0(param_3,(LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar6 * 2),
                               L"RT_CUSTOM");
        if ((puVar3 == (undefined8 *)0x0) ||
           (plVar4 = *(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x18c0 + 0x6b0),
           iVar2 = (**(code **)(*plVar4 + 0x78))(plVar4,puVar3,DVar1,0,param_6 + uVar6 * 8),
           iVar2 < 0)) {
          thunk_FUN_180060a18(puVar3);
          iVar7 = 0;
        }
        else {
          thunk_FUN_180060a18(puVar3);
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_4);
    if (iVar7 == 0) {
LAB_180050458:
      uVar6 = 0;
      do {
        if (*(longlong **)(param_6 + uVar6 * 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_6 + uVar6 * 8) + 0x10))();
          *(undefined8 *)(param_6 + uVar6 * 8) = 0;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < param_4);
    }
  }
  return iVar7;
}

