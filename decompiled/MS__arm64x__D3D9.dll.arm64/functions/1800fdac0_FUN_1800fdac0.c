/*
 * FUN_1800fdac0 at 1800fdac0
 * undefined FUN_1800fdac0(void)
 * Address ranges: 1800fdac0-1800fdbab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fdac0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  if ((int)param_1[0xb] != 0) {
    uVar4 = 0;
    if ((int)param_1[0xb] == 0) {
      puVar5 = (undefined8 *)&DAT_00000008;
      goto LAB_1800fdb04;
    }
    do {
      puVar5 = (undefined8 *)(param_1[10] + uVar4 * 0x18 + 0x10);
LAB_1800fdb04:
      plVar2 = (longlong *)*puVar5;
      if ((int)plVar2[1] != 0) {
        uVar3 = 0;
        do {
          (**(code **)(*param_1 + 8))(param_1,*(undefined8 *)(*plVar2 + uVar3 * 0x10));
          plVar2 = (longlong *)*puVar5;
          uVar1 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(plVar2 + 1));
      }
      if (plVar2 != (longlong *)0x0) {
        thunk_FUN_180102fc0(*plVar2);
        FUN_180102fc0(plVar2,0x10);
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb));
  }
  thunk_FUN_180102fc0(param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  thunk_FUN_180102fc0(param_1[0xc]);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  (*__imp_KERNEL32_dll_DeleteCriticalSection)(param_1 + 3);
  return;
}

