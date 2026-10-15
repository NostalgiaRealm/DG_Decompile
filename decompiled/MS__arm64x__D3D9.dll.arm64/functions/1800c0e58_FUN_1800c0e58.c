/*
 * FUN_1800c0e58 at 1800c0e58
 * undefined FUN_1800c0e58(void)
 * Address ranges: 1800c0e58-1800c0fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c0e58(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  if (iVar2 == (int)param_1[2]) {
    uVar4 = 0x10;
    if (iVar2 != 0) {
      uVar4 = iVar2 << 1;
    }
    lVar5 = thunk_FUN_180102f80((ulonglong)uVar4 * 0x898 + 0x7f);
    if (lVar5 != 0) {
      uVar9 = lVar5 + 0x7fU & 0xffffffffffffff80;
      uVar8 = 0;
      uVar3 = 0;
      if ((int)param_1[2] != 0) {
        do {
          lVar6 = uVar9 + uVar8 * 0x898;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined8 *)(lVar6 + 0x878) = 0;
          *(undefined8 *)(lVar6 + 0x880) = 0;
          *(undefined8 *)(lVar6 + 0x888) = 0;
          *(undefined8 *)(lVar6 + 0x890) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          *(undefined4 *)(lVar6 + 0x874) = 0;
          *(undefined2 *)(lVar6 + 0x28) = 0xffff;
          thunk_FUN_180001218(lVar6,param_1[1] + uVar8 * 0x898,0x898);
          uVar3 = *(uint *)(param_1 + 2);
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < uVar3);
      }
      uVar7 = (ulonglong)uVar3;
      uVar8 = uVar7;
      while (uVar3 < uVar4) {
        lVar6 = uVar9 + uVar8 * 0x898;
        uVar3 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar3;
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        *(undefined8 *)(lVar6 + 0x878) = 0;
        *(undefined8 *)(lVar6 + 0x880) = 0;
        *(undefined8 *)(lVar6 + 0x888) = 0;
        *(undefined8 *)(lVar6 + 0x890) = 0;
        *(undefined8 *)(lVar6 + 0x20) = 0;
        *(undefined4 *)(lVar6 + 0x874) = 0;
        *(undefined2 *)(lVar6 + 0x28) = 0xffff;
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar5;
      param_1[1] = uVar9;
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    }
  }
  uVar4 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar4) {
    while (param_2 < uVar4) {
      thunk_FUN_180001218(param_1[1] + (ulonglong)uVar4 * 0x898,
                          param_1[1] + (ulonglong)(uVar4 - 1) * 0x898,0x898);
      uVar4 = uVar4 - 1;
    }
    lVar5 = (ulonglong)param_2 * 0x898;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined8 *)(lVar5 + param_1[1] + 8) = *param_4;
    thunk_FUN_180001218(lVar5 + param_1[1] + 0x10,param_5,0x888);
    *(undefined8 *)(param_1[1] + lVar5) = param_3;
  }
  return;
}

