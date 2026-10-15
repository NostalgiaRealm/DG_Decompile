/*
 * FUN_1800d95d4 at 1800d95d4
 * undefined8 * __fastcall FUN_1800d95d4(longlong param_1, undefined8 * param_2, uint param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 1800d95d4-1800d96d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800d95d4(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5,
             uint param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar4 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + uVar4 * 4) == param_3) {
        if ((int)uVar4 == -1) {
          return param_2;
        }
        if (*(uint *)(param_1 + 0x128 + uVar4 * 0x10) <= param_4) {
          return param_2;
        }
        if (*(int *)(*(longlong *)(param_1 + (uVar4 + 0x12) * 0x10) + uVar6 * 8) == 0) {
          FUN_1800d8ed0(param_1,param_3,param_4,(param_5 != 1) + 2);
        }
        if (*(uint *)(*(longlong *)(param_1 + (uVar4 + 0x12) * 0x10) + uVar6 * 8) <= param_6) {
          return param_2;
        }
        lVar5 = (ulonglong)param_6 * 0x1c;
        *(undefined4 *)((longlong)param_2 + 0x14) = 0x20;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + (uVar4 + 2) * 0x10) + uVar6 * 8);
        uVar3 = *(uint *)(lVar5 + 0xc + lVar1);
        *(undefined4 *)param_2 = *(undefined4 *)(lVar5 + lVar1);
        *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(lVar5 + 4 + lVar1);
        uVar2 = *(uint *)(lVar5 + 8 + lVar1);
        *(uint *)(param_2 + 1) = uVar2;
        *(uint *)((longlong)param_2 + 0xc) = uVar3;
        if (uVar3 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 / uVar3;
        }
        *(uint *)(param_2 + 2) = uVar2;
        return param_2;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x328));
  }
  return param_2;
}

