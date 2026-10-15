/*
 * FUN_180060600 at 180060600
 * undefined8 __fastcall FUN_180060600(longlong param_1)
 * Address ranges: 180060600-1800606e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180060600(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x88 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28);
  if (*plVar3 == 0) {
    if (*(int *)(param_1 + 0x1f8) == *(int *)(param_1 + 0x1fc)) {
      return (ulonglong)(uint3)((uint)*(int *)(param_1 + 0x1f8) >> 8) << 8;
    }
    SetEvent(*(HANDLE *)(param_1 + 0xa8 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28));
    *(uint *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1U & 7;
    uVar4 = *(undefined8 *)(param_1 + 0x98 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28);
    *(undefined8 *)(param_1 + 0x88 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28) = uVar4;
  }
  else {
    uVar4 = (*(code *)*plVar3)(plVar3 + 2);
    *(longlong *)(param_1 + 0x88 + (ulonglong)*(uint *)(param_1 + 0x1f8) * 0x28) =
         plVar3[1] + 0x10 + (longlong)plVar3;
    piVar1 = (int *)(param_1 + 0x200);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uVar4 = (**(code **)(param_1 + 0x50))();
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}

