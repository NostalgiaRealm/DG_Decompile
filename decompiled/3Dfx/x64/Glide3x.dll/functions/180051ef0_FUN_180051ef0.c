/*
 * FUN_180051ef0 at 180051ef0
 * undefined __fastcall FUN_180051ef0(longlong param_1, longlong param_2)
 * Address ranges: 180051ef0-180051fd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051ef0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  uVar1 = *(uint *)(param_1 + 0x660);
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x658) + uVar6 * 8) == param_2) {
        if ((int)uVar6 != -1) goto LAB_180051fbd;
        break;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x664);
  if (uVar1 == uVar5) {
    uVar6 = 0x10;
    if (uVar5 != 0) {
      uVar6 = (ulonglong)(uVar5 * 2);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar6;
    uVar3 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)thunk_FUN_180060a9c(uVar3);
    if (puVar4 == (undefined8 *)0x0) goto LAB_180051fbd;
    FUN_180061330(puVar4,*(undefined8 **)(param_1 + 0x658),
                  (ulonglong)*(uint *)(param_1 + 0x664) << 3);
    FUN_180060ac0(*(LPVOID *)(param_1 + 0x658));
    *(undefined8 **)(param_1 + 0x658) = puVar4;
    *(int *)(param_1 + 0x664) = (int)uVar6;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x658) + (ulonglong)*(uint *)(param_1 + 0x660) * 8) =
       param_2;
  *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
LAB_180051fbd:
                    /* WARNING: Could not recover jumptable at 0x000180051fca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

