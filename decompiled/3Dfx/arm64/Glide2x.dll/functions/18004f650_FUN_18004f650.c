/*
 * FUN_18004f650 at 18004f650
 * int __cdecl FUN_18004f650(longlong param_1, ulonglong param_2, HMODULE param_3, uint param_4, longlong param_5, longlong param_6, undefined1 * param_7, longlong param_8)
 * Address ranges: 18004f650-18004f793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18004f650(longlong param_1,ulonglong param_2,HMODULE param_3,uint param_4,longlong param_5,
                 longlong param_6,undefined1 *param_7,longlong param_8)

{
  DWORD DVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 extraout_x1;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  
  lVar9 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  puVar3 = FUN_180060360(param_7,0,(ulonglong)param_4 << 3);
  auVar10._8_8_ = extraout_x1;
  auVar10._0_8_ = puVar3;
  iVar8 = 1;
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      if (iVar8 == 0) goto LAB_18004f764;
      uVar6 = (uint)*(ushort *)(param_5 + uVar7 * 2);
      if (uVar6 != 0) {
        DVar1 = FUN_180042420(param_3,(LPCWSTR)(ulonglong)uVar6,L"RT_CUSTOM");
        puVar4 = FUN_180042470(param_3,(LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar7 * 2),
                               L"RT_CUSTOM");
        if (((puVar4 == (undefined8 *)0x0) ||
            (plVar5 = *(longlong **)(lVar9 + 0x6b0),
            iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,puVar4,DVar1,0,param_7 + uVar7 * 8),
            iVar2 < 0)) ||
           (plVar5 = *(longlong **)(lVar9 + 0x6b0),
           iVar2 = (**(code **)(*plVar5 + 0x58))
                             (plVar5,*(undefined8 *)(param_6 + uVar7 * 0x10),
                              *(undefined2 *)(param_6 + 8 + uVar7 * 0x10),puVar4,DVar1,
                              param_8 + uVar7 * 8), iVar2 < 0)) {
          auVar10 = thunk_FUN_18005fbc8(puVar4);
          iVar8 = 0;
        }
        else {
          auVar10 = thunk_FUN_18005fbc8(puVar4);
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < param_4);
    if (iVar8 == 0) {
LAB_18004f764:
      FUN_18004f798(auVar10._0_8_,auVar10._8_8_,param_4,(longlong)param_7,param_8);
    }
  }
  return iVar8;
}

