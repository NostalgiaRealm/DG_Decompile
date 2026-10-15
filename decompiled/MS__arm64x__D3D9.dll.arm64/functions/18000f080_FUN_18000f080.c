/*
 * FUN_18000f080 at 18000f080
 * undefined FUN_18000f080(void)
 * Address ranges: 18000f080-18000f1f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000f080(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  
  puVar7 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar7 = (uint *)(*(longlong *)(param_1 + 0x40) + -0x59c0);
  }
  if (((*puVar7 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar3 == 0) {
      FUN_180003398();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if ((*(longlong **)(param_1 + 0x60) == (longlong *)0x0) ||
       (((*(uint *)(param_1 + 0x50) >> 9 & 1) == 0 && (*(char *)(param_1 + 0x8b) == '\0')))) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      FUN_180001590(param_1 + 0x2c);
      lVar6 = *(longlong *)(param_1 + 0x40);
      uVar5 = 0;
      do {
        lVar1 = uVar5 * 8;
        if (lVar6 != 0) {
          lVar1 = lVar6 + uVar5 * 8 + -0x6838;
        }
        if (*(longlong *)(lVar1 + 0x66c8) == param_1) {
          puVar7 = (uint *)&DAT_00006808;
          if (lVar6 != 0) {
            puVar7 = (uint *)(lVar6 + -0x30);
          }
          uVar4 = *puVar7 | 1 << (ulonglong)((uint)uVar5 & 0x1f);
          goto LAB_18000f1bc;
        }
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < 0x10);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (*(uint *)(param_1 + 0x84) != 0xffffffff) {
        puVar7 = (uint *)&DAT_000067dc;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          puVar7 = (uint *)(*(longlong *)(param_1 + 0x40) + -0x5c);
        }
        uVar4 = *puVar7 & (1 << (ulonglong)(*(uint *)(param_1 + 0x84) & 0x1f) ^ 0xffffffffU);
LAB_18000f1bc:
        *puVar7 = uVar4;
      }
    }
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

