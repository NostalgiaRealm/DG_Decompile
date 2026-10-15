/*
 * FUN_10107bc0 at 10107bc0
 * undefined FUN_10107bc0(void)
 * Address ranges: 10107bc0-10107d0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_10107bc0(undefined4 param_1,undefined8 *param_2,undefined4 param_3,uint param_4,int param_5,
            uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong extraout_x1;
  undefined4 uVar7;
  uint uVar8;
  int extraout_w11;
  
  *param_2 = 0;
  puVar1 = (uint *)(param_2 + 1);
  puVar2 = (uint *)(param_2 + 2);
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  iVar6 = FUN_10106d00(param_1,param_3);
  if ((iVar6 != -1) && (iVar6 = extraout_w11 + iVar6 * 0xc, param_4 < *(uint *)(iVar6 + 0xd4))) {
    if (*(int *)(*(int *)(iVar6 + 0xd0) + param_4 * 8) == 0) {
      uVar7 = 2;
      if (param_5 != 1) {
        uVar7 = 3;
      }
      FUN_10106e88(extraout_w11,extraout_x1 & 0xffffffff,param_4,uVar7);
    }
    if (param_6 < *(uint *)(*(int *)(iVar6 + 0xd0) + param_4 * 8)) {
      puVar3 = (undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + param_4 * 4) + param_6 * 0x1c);
      *(undefined4 *)param_2 = *puVar3;
      *(undefined4 *)((int)param_2 + 4) = puVar3[1];
      *(undefined4 *)((int)param_2 + 0x14) = 0x20;
      uVar4 = puVar3[2];
      uVar5 = puVar3[3];
      *puVar1 = uVar4;
      *(uint *)((int)param_2 + 0xc) = uVar5;
      if (uVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar4 / uVar5;
        }
      }
      *puVar2 = uVar8;
    }
  }
  return param_2;
}

