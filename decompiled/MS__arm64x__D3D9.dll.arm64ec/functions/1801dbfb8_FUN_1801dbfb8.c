/*
 * FUN_1801dbfb8 at 1801dbfb8
 * undefined FUN_1801dbfb8(void)
 * Address ranges: 1801dbfb8-1801dc06b;1801dc084-1801dc0fb;1801dc100-1801dc13f;1801dc14c-1801dc163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801dbfb8(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  if (iVar2 == (int)param_1[2]) {
    uVar1 = 0x10;
    if (iVar2 != 0) {
      uVar1 = iVar2 << 1;
    }
    lVar3 = FUN_1802229a8((ulonglong)uVar1 * 0x898 + 0x7f);
    if (lVar3 != 0) {
      uVar7 = lVar3 + 0x7fU & 0xffffffffffffff80;
      if ((int)param_1[2] != 0) {
        *(undefined8 *)(uVar7 + 0x10) = 0;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        *(undefined8 *)(uVar7 + 0x878) = 0;
        *(undefined8 *)(uVar7 + 0x880) = 0;
        *(undefined8 *)(uVar7 + 0x888) = 0;
        *(undefined8 *)(uVar7 + 0x890) = 0;
        *(undefined8 *)(uVar7 + 0x20) = 0;
        *(undefined4 *)(uVar7 + 0x874) = 0;
        *(undefined2 *)(uVar7 + 0x28) = 0xffff;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(uVar7,param_1[1],0x898);
      }
      if (uVar1 != 0) {
        uVar4 = 0;
        lVar5 = 0;
        do {
          lVar6 = uVar7 + lVar5 * 0x898;
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 1;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined8 *)(lVar6 + 0x878) = 0;
          *(undefined8 *)(lVar6 + 0x880) = 0;
          *(undefined8 *)(lVar6 + 0x888) = 0;
          *(undefined8 *)(lVar6 + 0x890) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          *(undefined4 *)(lVar6 + 0x874) = 0;
          *(undefined2 *)(lVar6 + 0x28) = 0xffff;
        } while (uVar4 < uVar1);
      }
      FUN_1802229d8(*param_1);
      *(uint *)((longlong)param_1 + 0x14) = uVar1;
      *param_1 = lVar3;
      param_1[1] = uVar7;
    }
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar1) {
    if (uVar1 <= param_2) {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      *(undefined8 *)((ulonglong)param_2 * 0x898 + param_1[1] + 8) = *param_4;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48((ulonglong)param_2 * 0x898 + param_1[1] + 0x10,param_5,0x888);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(param_1[1] + (ulonglong)uVar1 * 0x898,
                        param_1[1] + (ulonglong)(uVar1 - 1) * 0x898,0x898);
  }
  return;
}

