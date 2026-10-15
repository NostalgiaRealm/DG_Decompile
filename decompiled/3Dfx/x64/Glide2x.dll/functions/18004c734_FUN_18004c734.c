/*
 * FUN_18004c734 at 18004c734
 * char __fastcall FUN_18004c734(longlong param_1, ulonglong param_2, HMODULE param_3, uint param_4, longlong param_5, longlong param_6, LPCWSTR param_7, longlong param_8)
 * Address ranges: 18004c734-18004c8df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18004c734(longlong param_1,ulonglong param_2,HMODULE param_3,uint param_4,longlong param_5,
                  longlong param_6,LPCWSTR param_7,longlong param_8)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  LPCWSTR pWVar6;
  LPCWSTR pWVar7;
  ulonglong uVar8;
  uint uVar9;
  
  pWVar7 = (LPCWSTR)0x0;
  lVar5 = (param_2 & 0xffffffff) * 0x18c0;
  pWVar6 = param_7;
  FUN_18005f374((undefined1 *)param_7,0,(ulonglong)param_4 << 3);
  cVar2 = '\x01';
  uVar9 = 0;
  if (param_4 != 0) {
    do {
      if (cVar2 == '\0') goto LAB_18004c8b6;
      uVar8 = (ulonglong)uVar9;
      if (*(short *)(param_5 + uVar8 * 2) != 0) {
        uVar3 = FUN_18005ddc0(param_3,(LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar8 * 2),
                              L"RT_CUSTOM");
        pWVar7 = (LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar8 * 2);
        pWVar6 = (LPCWSTR)FUN_18005dc90(param_3,pWVar7,L"RT_CUSTOM");
        if (pWVar6 != (LPCWSTR)0x0) {
          plVar1 = *(longlong **)(param_1 + 0x6b0 + lVar5);
          pWVar7 = pWVar6;
          iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,pWVar6,uVar3,0,param_7 + uVar8 * 4);
          if (-1 < iVar4) {
            plVar1 = *(longlong **)(param_1 + 0x6b0 + lVar5);
            pWVar7 = *(LPCWSTR *)(param_6 + uVar8 * 0x10);
            iVar4 = (**(code **)(*plVar1 + 0x58))
                              (plVar1,pWVar7,*(undefined2 *)(param_6 + 8 + uVar8 * 0x10),pWVar6,
                               uVar3,uVar8 * 8 + param_8);
            if (-1 < iVar4) {
              FUN_18005d720(pWVar6);
              goto LAB_18004c8a7;
            }
          }
        }
        FUN_18005d720(pWVar6);
        cVar2 = '\0';
      }
LAB_18004c8a7:
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_4);
    if (cVar2 == '\0') {
LAB_18004c8b6:
      FUN_18004c8e0(pWVar6,pWVar7,param_4,(longlong)param_7,param_8);
    }
  }
  return cVar2;
}

