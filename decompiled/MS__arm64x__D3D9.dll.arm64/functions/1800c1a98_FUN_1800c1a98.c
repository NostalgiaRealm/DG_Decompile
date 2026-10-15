/*
 * FUN_1800c1a98 at 1800c1a98
 * undefined FUN_1800c1a98(void)
 * Address ranges: 1800c1a98-1800c1c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c1a98(longlong param_1)

{
  char *pcVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  puVar2 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    puVar2 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x59c0);
  }
  if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar6 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar6 == 0) {
      FUN_180003398();
    }
  }
  if (*(longlong *)(param_1 + -0x60) != 0) {
    if ((*(longlong **)(param_1 + -0x18) != (longlong *)0x0) &&
       (((*(uint *)(param_1 + -0x28) >> 9 & 1) != 0 || (*(char *)(param_1 + -5) != '\0')))) {
      pcVar1 = &DAT_00000020;
      if (*(longlong *)(param_1 + -0x38) != 0) {
        pcVar1 = (char *)(*(longlong *)(param_1 + -0x38) + -0x6818);
      }
      if (*pcVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + -0x18) + 0x20))();
        *(undefined8 *)(param_1 + -0x60) = 0;
        if (*(char *)(param_1 + -8) != '\0') {
          puVar2 = (uint *)&DAT_000067e4;
          if (*(longlong *)(param_1 + -0x38) != 0) {
            puVar2 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x54);
          }
          *puVar2 = *puVar2 & 0xfffffffe;
        }
        goto LAB_1800c1bd0;
      }
    }
    *(undefined8 *)(param_1 + -0x60) = 0;
    FUN_180001590(param_1 + -0x4c);
    lVar7 = *(longlong *)(param_1 + -0x38);
    plVar3 = (longlong *)&DAT_000066c0;
    if (lVar7 != 0) {
      plVar3 = (longlong *)(lVar7 + -0x178);
    }
    if (*plVar3 == param_1 + -0x78) {
      puVar4 = &DAT_00006818;
      if (lVar7 != 0) {
        puVar4 = (undefined1 *)(lVar7 + -0x20);
      }
      *puVar4 = 1;
    }
  }
LAB_1800c1bd0:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

