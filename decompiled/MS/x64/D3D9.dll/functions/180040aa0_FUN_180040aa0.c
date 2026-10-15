/*
 * FUN_180040aa0 at 180040aa0
 * undefined8 * __fastcall FUN_180040aa0(longlong param_1, undefined8 * param_2, undefined4 param_3)
 * Address ranges: 180040aa0-180040c71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180040aa0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_58 [40];
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(lVar2 + 0x188);
  lVar9 = (ulonglong)*(uint *)(lVar2 + 400) * 0x1ac0;
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_1800fb1f0(lVar7 + 0x1bc0 + lVar9);
    FUN_1800e2ae8(*(longlong *)(lVar9 + 0x1e08 + lVar7) + 8,'\0');
    FUN_1800e7ff0(*(longlong *)(lVar9 + 0x1e00 + lVar7),
                  *(ulonglong *)(*(longlong *)(lVar9 + 0x1e08 + lVar7) + 0xb80));
    uVar10 = 0;
    if (*(int *)(lVar2 + 0x1b0) != 0) {
      do {
        FUN_180040600(*(longlong *)(*(longlong *)(lVar2 + 0x1a8) + uVar10 * 8));
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(lVar2 + 0x1b0));
    }
  }
  else {
    FUN_1800fb1f0(lVar7 + 0x1bc0 + lVar9);
    FUN_1800e2ae8(*(longlong *)(lVar9 + 0x1e08 + lVar7) + 8,'\0');
    FUN_1800e7ff0(*(longlong *)(lVar9 + 0x1e00 + lVar7),
                  *(ulonglong *)(*(longlong *)(lVar9 + 0x1e08 + lVar7) + 0xb80));
    uVar10 = 0;
    if (*(int *)(lVar2 + 0x1c0) != 0) {
      do {
        FUN_180040600(*(longlong *)(*(longlong *)(lVar2 + 0x1b8) + uVar10 * 8));
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(lVar2 + 0x1c0));
    }
  }
  plVar6 = (longlong *)(**(longlong **)(param_1 + 0x38) + 0x40);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2,param_3,0,0);
  if (param_2[2] == 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
    uVar8 = *(uint *)(**(longlong **)(param_1 + 0x38) + 0x30);
    if (*(char *)(param_1 + 0x31) == '\0') {
      uVar4 = *(uint *)(lVar7 + 0x1ef4 + lVar2);
      if (uVar4 < uVar8 * 2) {
        uVar4 = (3 - (uint)(uVar4 * 3 < uVar8)) * uVar8;
      }
      piVar1 = (int *)(lVar7 + 0x1ef8 + lVar2);
      *piVar1 = *piVar1 + uVar4;
    }
    else {
      uVar4 = *(uint *)(lVar7 + 0x1f84 + lVar2);
      if (uVar4 < uVar8 * 2) {
        uVar4 = (3 - (uint)(uVar4 * 3 < uVar8)) * uVar8;
      }
      piVar1 = (int *)(lVar7 + 0x1f88 + lVar2);
      *piVar1 = *piVar1 + uVar4;
    }
    plVar6 = (longlong *)(**(longlong **)(param_1 + 0x38) + 0x40);
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_58,param_3,0,0);
    uVar3 = puVar5[1];
    *param_2 = *puVar5;
    param_2[1] = uVar3;
    param_2[2] = puVar5[2];
  }
  return param_2;
}

