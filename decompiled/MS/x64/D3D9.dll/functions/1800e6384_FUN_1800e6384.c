/*
 * FUN_1800e6384 at 1800e6384
 * char __fastcall FUN_1800e6384(undefined8 param_1, HMODULE param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 1800e6384-1800e646c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800e6384(undefined8 param_1,HMODULE param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  
  uVar4 = 0;
  cVar5 = '\x01';
  if (param_3 != 0) {
    do {
      if (cVar5 == '\0') goto LAB_1800e643a;
      *(undefined8 *)(param_5 + uVar4 * 8) = 0;
      if (*(short *)(param_4 + uVar4 * 2) != 0) {
        uVar1 = FUN_1800fbab0(param_2,(LPCWSTR)(ulonglong)*(ushort *)(param_4 + uVar4 * 2),
                              L"RT_CUSTOM");
        puVar2 = FUN_1800fb980(param_2,(LPCWSTR)(ulonglong)*(ushort *)(param_4 + uVar4 * 2),
                               L"RT_CUSTOM");
        if (puVar2 != (undefined8 *)0x0) {
          plVar3 = FUN_1800f08f4((ulonglong)uVar1,puVar2);
          *(longlong **)(param_5 + uVar4 * 8) = plVar3;
          FUN_1800fbcf0(puVar2);
          if (*(longlong *)(param_5 + uVar4 * 8) != 0) goto LAB_1800e642e;
        }
        cVar5 = '\0';
      }
LAB_1800e642e:
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (cVar5 == '\0') {
LAB_1800e643a:
      uVar4 = 0;
      do {
        plVar3 = *(longlong **)(param_5 + uVar4 * 8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(param_5 + uVar4 * 8) = 0;
        }
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < param_3);
    }
  }
  return cVar5;
}

