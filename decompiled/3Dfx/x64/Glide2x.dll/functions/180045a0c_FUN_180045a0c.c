/*
 * FUN_180045a0c at 180045a0c
 * char __fastcall FUN_180045a0c(undefined8 param_1, HMODULE param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 180045a0c-180045af4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180045a0c(undefined8 param_1,HMODULE param_2,uint param_3,longlong param_4,longlong param_5
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
      if (cVar6 == '\0') goto LAB_180045ac2;
      *(undefined8 *)(param_5 + uVar5 * 8) = 0;
      if (*(short *)(param_4 + uVar5 * 2) != 0) {
        uVar1 = FUN_18005ddc0(param_2,(LPCWSTR)(ulonglong)*(ushort *)(param_4 + uVar5 * 2),
                              L"RT_CUSTOM");
        pHVar4 = param_2;
        puVar2 = FUN_18005dc90(param_2,(LPCWSTR)(ulonglong)*(ushort *)(param_4 + uVar5 * 2),
                               L"RT_CUSTOM");
        if (puVar2 != (undefined8 *)0x0) {
          plVar3 = FUN_1800538d8(pHVar4,(ulonglong)uVar1,puVar2);
          *(longlong **)(param_5 + uVar5 * 8) = plVar3;
          FUN_18005d720(puVar2);
          if (*(longlong *)(param_5 + uVar5 * 8) != 0) goto LAB_180045ab6;
        }
        cVar6 = '\0';
      }
LAB_180045ab6:
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (cVar6 == '\0') {
LAB_180045ac2:
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

