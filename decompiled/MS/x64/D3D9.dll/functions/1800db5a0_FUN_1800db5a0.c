/*
 * FUN_1800db5a0 at 1800db5a0
 * char __fastcall FUN_1800db5a0(longlong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, longlong param_5, undefined1 * param_6)
 * Address ranges: 1800db5a0-1800db6d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800db5a0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined1 *param_6)

{
  longlong *plVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar8;
  char cVar9;
  ulonglong uVar7;
  
  pHVar2 = DAT_1801123b0;
  FUN_1800fbea0(param_6,0,0x88);
  uVar7 = 0;
  cVar9 = '\x01';
  do {
    if (cVar9 == '\0') goto LAB_1800db69d;
    if (*(short *)(param_5 + uVar7 * 2) != 0) {
      uVar3 = FUN_1800fbab0(pHVar2,(LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar7 * 2),L"RT_CUSTOM"
                           );
      puVar5 = FUN_1800fb980(pHVar2,(LPCWSTR)(ulonglong)*(ushort *)(param_5 + uVar7 * 2),
                             L"RT_CUSTOM");
      if (puVar5 != (undefined8 *)0x0) {
        plVar1 = *(longlong **)(param_1 + 0x6b0 + (param_2 & 0xffffffff) * 0x18c0);
        iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,puVar5,uVar3,0,param_6 + uVar7 * 8);
        if (-1 < iVar4) {
          FUN_1800fbcf0(puVar5);
          goto LAB_1800db68d;
        }
      }
      FUN_1800fbcf0(puVar5);
      cVar9 = '\0';
    }
LAB_1800db68d:
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while (uVar6 < 0x11);
  if (cVar9 == '\0') {
LAB_1800db69d:
    lVar8 = 0;
    do {
      if (*(longlong **)(param_6 + lVar8 * 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_6 + lVar8 * 8) + 0x10))();
        *(undefined8 *)(param_6 + lVar8 * 8) = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x11);
  }
  return cVar9;
}

