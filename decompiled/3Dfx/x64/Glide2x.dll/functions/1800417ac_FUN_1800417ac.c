/*
 * FUN_1800417ac at 1800417ac
 * undefined __fastcall FUN_1800417ac(longlong * param_1)
 * Address ranges: 1800417ac-180041863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800417ac(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    do {
      uVar5 = 0;
      plVar1 = *(longlong **)(param_1[3] + 0x10 + uVar3 * 0x18);
      if ((int)plVar1[1] != 0) {
        do {
          FUN_180042eec(*param_1,*(ulonglong *)(*plVar1 + 0xa0 + uVar5 * 0xa8),(undefined *)0x0,
                        '\x01');
          (**(code **)(**(longlong **)(*plVar1 + 0xa0 + uVar5 * 0xa8) + 0x10))();
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(plVar1 + 1));
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)((longlong)param_1 + 0x24));
    uVar3 = 0;
    if (*(int *)((longlong)param_1 + 0x24) != 0) {
      do {
        puVar2 = *(undefined8 **)(param_1[3] + 0x10 + uVar3 * 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          FUN_18005d720((LPVOID)*puVar2);
          FUN_18005d720(puVar2);
        }
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)((longlong)param_1 + 0x24));
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return;
}

