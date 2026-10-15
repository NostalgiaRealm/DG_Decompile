/*
 * FUN_1800eb61c at 1800eb61c
 * char __fastcall FUN_1800eb61c(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong * param_5)
 * Address ranges: 1800eb61c-1800eb738
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800eb61c(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  cVar4 = '\x01';
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x34) <
      (uint)(*(int *)(lVar2 + 0x18 + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30) + param_2)) {
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x28) + 1) % (ulonglong)*(uint *)(param_1 + 0x20);
    uVar7 = param_3;
    uVar9 = param_4;
    uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x20 + uVar3 * 0x30) + 0x40))();
    if (uVar5 < *(ulonglong *)(lVar2 + 0x28 + uVar3 * 0x30)) {
      uVar6 = FUN_1800eb3f4(param_1);
      cVar4 = (char)uVar6;
      if (cVar4 == '\0') {
        FUN_1800ca538("[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. WTF?\n",
                      "a resource descriptor ring buffer",uVar7,uVar9);
        DebugBreak();
        return '\0';
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      *(int *)(param_1 + 0x28) = (int)uVar3;
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18 + uVar3 * 0x30) = 0;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar8 = (ulonglong)*(uint *)(param_1 + 0x28) * 0x30;
  *param_5 = (ulonglong)(uint)(*(int *)(lVar8 + 0x18 + lVar2) * *(int *)(param_1 + 0x38)) +
             *(longlong *)(lVar8 + lVar2);
  param_5[1] = (ulonglong)(uint)(*(int *)(lVar8 + 0x18 + lVar2) * *(int *)(param_1 + 0x38)) +
               *(longlong *)(lVar8 + 8 + lVar2);
  param_5[2] = *(longlong *)(lVar8 + 0x10 + lVar2);
  *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_1 + 0x38);
  piVar1 = (int *)(lVar8 + 0x18 + lVar2);
  *piVar1 = *piVar1 + param_2;
  *(undefined8 *)(lVar8 + 0x20 + lVar2) = param_3;
  *(undefined8 *)(lVar8 + 0x28 + lVar2) = param_4;
  return cVar4;
}

