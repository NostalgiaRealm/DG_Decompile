/*
 * FUN_18009ee74 at 18009ee74
 * undefined __fastcall FUN_18009ee74(longlong * param_1)
 * Address ranges: 18009ee74-18009eee8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009ee74(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((int)plVar1[7] != 0) && (*(char *)((longlong)plVar1 + 0x4c) != (char)param_1[1])) {
    uVar2 = 0;
    *(char *)((longlong)plVar1 + 0x4c) = (char)param_1[1];
    if (*(int *)((longlong)plVar1 + 0x34) != 0) {
      do {
        bVar3 = 0;
        FUN_1800ac71c((longlong)plVar1,*(uint *)((longlong)plVar1 + 0x24),0);
        FUN_1800ac758((longlong)plVar1,*(uint *)(plVar1 + 5),bVar3);
        (**(code **)(*plVar1 + 0x18))(plVar1,uVar2 * *(int *)((longlong)plVar1 + 0x3c));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((longlong)plVar1 + 0x34));
    }
  }
  return;
}

