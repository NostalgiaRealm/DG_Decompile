/*
 * FUN_1800f1380 at 1800f1380
 * undefined FUN_1800f1380(void)
 * Address ranges: 1800f1380-1800f156b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800f1380(longlong param_1,ulonglong param_2,code *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong local_40 [2];
  
  cVar6 = '\x01';
  local_40[0] = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  plVar7 = (longlong *)FUN_1800f24c0(param_1 + 0x10,local_40);
  if (plVar7 == (longlong *)0x0) goto LAB_1800f1508;
  if ((param_4 & 1) != 0) {
    uVar8 = (**(code **)(**(longlong **)(*plVar7 + 0x18) + 0x40))();
    if (uVar8 < (ulonglong)plVar7[2]) {
      if (plVar7[1] != -1) {
        cVar6 = FUN_1800e8548(plVar7[1] + 8,0);
        if (cVar6 == '\0') goto LAB_1800f1530;
      }
      plVar3 = *(longlong **)(*plVar7 + 0x18);
      (**(code **)(*plVar3 + 0x48))(plVar3,plVar7[2],*(undefined8 *)(*plVar7 + 0x20));
      (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(*plVar7 + 0x20),0xffffffff);
    }
    else {
LAB_1800f1530:
      if (cVar6 == '\0') {
        lVar10 = plVar7[1];
        if (*(longlong *)(lVar10 + 0xb10) != 0) {
          *(ulonglong *)(lVar10 + ((ulonglong)*(uint *)(lVar10 + 0xb58) + 0x91) * 0x10) = param_2;
          *(code **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0xb58) * 0x10 + 0x918) = param_3;
          *(int *)(lVar10 + 0xb58) = *(int *)(lVar10 + 0xb58) + 1;
        }
        goto LAB_1800f1508;
      }
    }
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 != 0) {
    uVar11 = 0;
    uVar9 = uVar4;
    do {
      uVar5 = uVar9 + uVar11 >> 1;
      uVar8 = (ulonglong)uVar5;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x28);
      if (uVar12 <= param_2) {
        if (param_2 <= uVar12) break;
        uVar11 = uVar5 + 1;
        uVar8 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar9;
      }
      uVar9 = uVar5;
    } while (uVar9 != uVar11);
    if (((uint)uVar8 != uVar4) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x28) == param_2)) {
      uVar11 = (uint)uVar8 + 1;
      if (uVar11 < uVar4) {
        do {
          uVar8 = (ulonglong)uVar11;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar11 - 1) * 0x28);
          uVar11 = uVar11 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x28);
          uVar15 = *puVar2;
          uVar14 = puVar2[3];
          uVar13 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar15;
          puVar1[3] = uVar14;
          puVar1[2] = uVar13;
          puVar1[4] = puVar2[4];
        } while (uVar11 < *(uint *)(param_1 + 0x20));
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2);
  }
LAB_1800f1508:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return cVar6;
}

