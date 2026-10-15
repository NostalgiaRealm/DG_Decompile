/*
 * FUN_180045c28 at 180045c28
 * char __cdecl FUN_180045c28(longlong param_1, ulonglong param_2, undefined * param_3, uint param_4)
 * Address ranges: 180045c28-180045e13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180045c28(longlong param_1,ulonglong param_2,undefined *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong local_40 [2];
  
  uVar11 = 1;
  cVar10 = '\x01';
  local_40[0] = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  puVar5 = FUN_180046848(param_1 + 0x10,local_40);
  if (puVar5 == (ulonglong *)0x0) goto LAB_180045db0;
  cVar10 = '\x01';
  if ((param_4 & 1) != 0) {
    uVar6 = (**(code **)(**(longlong **)(*puVar5 + 0x18) + 0x40))();
    if (uVar6 < puVar5[2]) {
      cVar10 = '\x01';
      if (puVar5[1] != 0xffffffffffffffff) {
        uVar6 = FUN_18004aca0(puVar5[1] + 8,0);
        uVar11 = (uint)uVar6 & 0xff;
        cVar10 = (char)uVar6;
        if ((uVar6 & 0xff) == 0) goto LAB_180045dd8;
      }
      plVar3 = *(longlong **)(*puVar5 + 0x18);
      (**(code **)(*plVar3 + 0x48))(plVar3,puVar5[2],*(undefined8 *)(*puVar5 + 0x20));
      WaitForSingleObject(*(HANDLE *)(*puVar5 + 0x20),0xffffffff);
    }
    else {
LAB_180045dd8:
      cVar10 = (char)uVar11;
      if (uVar11 == 0) {
        uVar6 = puVar5[1];
        if (*(longlong *)(uVar6 + 0xb10) != 0) {
          *(ulonglong *)(uVar6 + ((ulonglong)*(uint *)(uVar6 + 0xb58) + 0x91) * 0x10) = param_2;
          *(undefined **)(uVar6 + (ulonglong)*(uint *)(uVar6 + 0xb58) * 0x10 + 0x918) = param_3;
          *(int *)(uVar6 + 0xb58) = *(int *)(uVar6 + 0xb58) + 1;
        }
        goto LAB_180045db0;
      }
    }
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  if (uVar11 != 0) {
    uVar8 = 0;
    uVar7 = uVar11;
    do {
      uVar4 = uVar7 + uVar8 >> 1;
      uVar6 = (ulonglong)uVar4;
      uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar6 * 0x28);
      if (uVar9 <= param_2) {
        if (param_2 <= uVar9) break;
        uVar8 = uVar4 + 1;
        uVar6 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (((uint)uVar6 != uVar11) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar6 * 0x28) == param_2)) {
      uVar8 = (uint)uVar6 + 1;
      if (uVar8 < uVar11) {
        do {
          uVar6 = (ulonglong)uVar8;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar8 - 1) * 0x28);
          uVar8 = uVar8 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar6 * 0x28);
          uVar14 = *puVar2;
          uVar13 = puVar2[3];
          uVar12 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar14;
          puVar1[3] = uVar13;
          puVar1[2] = uVar12;
          puVar1[4] = puVar2[4];
        } while (uVar8 < *(uint *)(param_1 + 0x20));
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
  }
  if (param_3 != (undefined *)0x0) {
    (*(code *)param_3)(param_2);
  }
LAB_180045db0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return cVar10;
}

