/*
 * FUN_1800db224 at 1800db224
 * char __fastcall FUN_1800db224(longlong param_1, ulonglong param_2, HMODULE param_3, uint param_4, longlong param_5, LPCWSTR param_6)
 * Address ranges: 1800db224-1800db352
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800db224(longlong param_1,ulonglong param_2,HMODULE param_3,uint param_4,longlong param_5,
                  LPCWSTR param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  uint uVar7;
  ulonglong uVar8;
  
  pWVar6 = (LPCWSTR)0x0;
  pWVar5 = param_6;
  FUN_1800fbea0((undefined1 *)param_6,0,(ulonglong)param_4 << 3);
  cVar2 = '\x01';
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      if (cVar2 == '\0') goto LAB_1800db32e;
      uVar8 = (ulonglong)uVar7;
      if (*(short *)(param_5 + uVar8 * 2) != 0) {
        uVar3 = FUN_1800fbab0(param_3,(LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar8 * 2),
                              L"RT_CUSTOM");
        pWVar6 = (LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar8 * 2);
        pWVar5 = (LPCWSTR)FUN_1800fb980(param_3,pWVar6,L"RT_CUSTOM");
        if ((pWVar5 == (LPCWSTR)0x0) ||
           (plVar1 = *(longlong **)(param_1 + 0x6b0 + (param_2 & 0xffffffff) * 0x18c0),
           pWVar6 = pWVar5,
           iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,pWVar5,uVar3,0,param_6 + uVar8 * 4),
           iVar4 < 0)) {
          FUN_1800fbcf0(pWVar5);
          cVar2 = '\0';
        }
        else {
          FUN_1800fbcf0(pWVar5);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
    if (cVar2 == '\0') {
LAB_1800db32e:
      FUN_1800db354(pWVar5,pWVar6,param_4,(longlong)param_6);
    }
  }
  return cVar2;
}

