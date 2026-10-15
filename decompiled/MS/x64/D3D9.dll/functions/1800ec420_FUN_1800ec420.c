/*
 * FUN_1800ec420 at 1800ec420
 * char __fastcall FUN_1800ec420(longlong * param_1, undefined8 param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 1800ec420-1800ec526
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800ec420(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  uVar9 = (ulonglong)*(uint *)(param_1 + 4);
  lVar2 = param_1[2];
  cVar4 = '\x01';
  if (*(uint *)(param_1 + 5) < *(int *)(lVar2 + 0x18 + uVar9 * 0x30) + 1U) {
    uVar3 = (ulonglong)(*(uint *)(param_1 + 4) + 1) % (ulonglong)*(uint *)(param_1 + 3);
    uVar7 = param_3;
    uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x20 + uVar3 * 0x30) + 0x40))();
    if (uVar5 < *(ulonglong *)(lVar2 + 0x28 + uVar3 * 0x30)) {
      uVar6 = FUN_1800ec0c4(param_1);
      cVar4 = (char)uVar6;
      if (cVar4 == '\0') {
        FUN_1800ca538("[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. WTF?\n",
                      "a query ring buffer",uVar7,uVar9);
        DebugBreak();
        return '\0';
      }
      *(int *)(param_1 + 4) = (int)param_1[4] + 1;
    }
    else {
      *(int *)(param_1 + 4) = (int)uVar3;
      *(undefined4 *)(param_1[2] + 0x18 + uVar3 * 0x30) = 0;
    }
  }
  lVar2 = param_1[2];
  lVar8 = (ulonglong)*(uint *)(param_1 + 4) * 0x30;
  *param_4 = *(undefined8 *)(lVar8 + lVar2);
  param_4[1] = *(undefined8 *)(lVar8 + 8 + lVar2);
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(lVar8 + 0x18 + lVar2);
  param_4[3] = *(longlong *)(lVar8 + 0x10 + lVar2) + (ulonglong)*(uint *)(lVar8 + 0x18 + lVar2) * 8;
  piVar1 = (int *)(lVar8 + 0x18 + lVar2);
  *piVar1 = *piVar1 + 1;
  *(undefined8 *)(lVar8 + 0x20 + lVar2) = param_2;
  *(undefined8 *)(lVar8 + 0x28 + lVar2) = param_3;
  return cVar4;
}

