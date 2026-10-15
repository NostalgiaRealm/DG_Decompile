/*
 * FUN_180033438 at 180033438
 * undefined FUN_180033438(void)
 * Address ranges: 180033438-1800334f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180033438(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  uVar1 = *param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0xb0);
  uVar2 = *(uint *)(param_1 + 0x98);
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar7 = uVar4 + uVar5 >> 1;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar7 * 0x2f0);
      uVar3 = uVar7;
      if (uVar8 <= uVar1) {
        if (uVar1 <= uVar8) break;
        uVar5 = uVar7 + 1;
        uVar7 = uVar7 + 1;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar5);
    if ((uVar7 != uVar2) &&
       (puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar7 * 0x2f0),
       *puVar6 == (ulonglong)uVar1)) {
      uVar9 = 0xffffffff;
      if (puVar6 != (ulonglong *)0xfffffffffffffff0) {
        uVar9 = *(undefined4 *)((longlong)puVar6 + 0x2ac);
      }
      goto LAB_1800334d8;
    }
  }
  uVar9 = 0xffffffff;
LAB_1800334d8:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0xb0);
  return uVar9;
}

