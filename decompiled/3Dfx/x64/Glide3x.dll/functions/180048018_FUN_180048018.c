/*
 * FUN_180048018 at 180048018
 * char __fastcall FUN_180048018(undefined8 param_1, HMODULE param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 180048018-180048100
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180048018(undefined8 param_1,HMODULE param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  char cVar6;
  
  uVar5 = 0;
  cVar6 = '\x01';
  if (param_3 != 0) {
    do {
      if (cVar6 == '\0') goto LAB_1800480ce;
      *(undefined8 *)(param_5 + uVar5 * 8) = 0;
      if (*(short *)(param_4 + uVar5 * 2) != 0) {
        uVar1 = FUN_180061190(param_2,(LPCWSTR)(ulonglong)*(ushort *)(param_4 + uVar5 * 2),
                              L"RT_CUSTOM");
        pHVar4 = param_2;
        puVar2 = FUN_180061060(param_2,(LPCWSTR)(ulonglong)*(ushort *)(param_4 + uVar5 * 2),
                               L"RT_CUSTOM");
        if (puVar2 != (undefined8 *)0x0) {
          plVar3 = FUN_180055ee4(pHVar4,(ulonglong)uVar1,puVar2);
          *(longlong **)(param_5 + uVar5 * 8) = plVar3;
          FUN_180060ac0(puVar2);
          if (*(longlong *)(param_5 + uVar5 * 8) != 0) goto LAB_1800480c2;
        }
        cVar6 = '\0';
      }
LAB_1800480c2:
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (cVar6 == '\0') {
LAB_1800480ce:
      uVar5 = 0;
      do {
        plVar3 = *(longlong **)(param_5 + uVar5 * 8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(param_5 + uVar5 * 8) = 0;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < param_3);
    }
  }
  return cVar6;
}

