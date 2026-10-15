/*
 * FUN_180058b48 at 180058b48
 * undefined8 * __cdecl FUN_180058b48(longlong param_1, undefined8 * param_2, undefined4 param_3, ulonglong param_4, undefined8 param_5, uint param_6)
 * Address ranges: 180058b48-180058b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180058b48(longlong param_1,undefined8 *param_2,int param_3,ulonglong param_4,undefined8 param_5,
             uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint extraout_w1;
  ulonglong uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar6 = param_4 & 0xffffffff;
  param_2[2] = 0;
  uVar5 = FUN_180057f80(param_1,param_3);
  if (((int)uVar5 != -1) &&
     (uVar5 = uVar5 & 0xffffffff, (uint)uVar6 < *(uint *)(param_1 + uVar5 * 0x10 + 0x128))) {
    lVar9 = (uVar5 + 0x12) * 0x10;
    lVar4 = (uVar6 & 0xffffffff) * 8;
    if (*(int *)(lVar4 + *(longlong *)(param_1 + lVar9)) == 0) {
      uVar7 = 2;
      if ((int)param_5 != 1) {
        uVar7 = 3;
      }
      FUN_180057fb8(param_1,extraout_w1,uVar6,uVar7);
    }
    if (param_6 < *(uint *)(lVar4 + *(longlong *)(param_1 + lVar9))) {
      puVar1 = (undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + (uVar5 + 2) * 0x10) + lVar4) +
               ((ulonglong)param_6 * 8 - (ulonglong)param_6) * 4);
      uVar7 = puVar1[1];
      *(undefined4 *)param_2 = *puVar1;
      *(undefined4 *)((longlong)param_2 + 4) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0x20;
      uVar2 = puVar1[2];
      uVar3 = puVar1[3];
      *(uint *)(param_2 + 1) = uVar2;
      *(uint *)((longlong)param_2 + 0xc) = uVar3;
      if (uVar3 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar2 / uVar3;
        }
      }
      *(uint *)(param_2 + 2) = uVar8;
    }
  }
  return param_2;
}

