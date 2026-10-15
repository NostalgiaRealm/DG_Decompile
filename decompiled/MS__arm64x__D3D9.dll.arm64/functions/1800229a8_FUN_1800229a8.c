/*
 * FUN_1800229a8 at 1800229a8
 * undefined FUN_1800229a8(void)
 * Address ranges: 1800229a8-180022a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800229a8(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar3 = (**(code **)(*param_1 + 0x70))();
  if (lVar3 == 0) {
    cVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((cVar2 == '\0') && (uVar4 = FUN_180022b70(), (uVar4 & 1) != 0)) {
      lVar3 = (*__imp_USER32_dll_GetCursor)();
      lVar5 = FUN_180022c10();
      if (lVar3 != lVar5) {
        lVar1 = param_1[5];
        if (param_1[5] == -1) {
          lVar1 = lVar3;
        }
        (**(code **)(*param_1 + 0x80))(param_1,lVar1);
        pcVar7 = *(code **)(DAT_18024de50 + 0x78);
        if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
          pcVar7 = __imp_USER32_dll_SetCursor;
        }
        (*pcVar7)(lVar5);
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    (**(code **)(*param_1 + 0x88))(param_1,uVar6);
  }
  return;
}

