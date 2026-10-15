/*
 * FUN_100328b3 at 100328b3
 * undefined __fastcall FUN_100328b3(int * param_1, ushort * param_2, uint param_3, byte param_4, byte param_5, void * param_6)
 * Address ranges: 100328b3-100329a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_100328b3(int *param_1,ushort *param_2,uint param_3,byte param_4,byte param_5,void *param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_8;
  
  uVar7 = (uint)*param_2;
  uVar8 = (uint)param_2[1];
  uVar9 = (uint)param_2[2];
  local_8 = 0;
  uVar10 = uVar9;
  if ((*param_2 & 0x4000) == 0) {
    uVar6 = (uint)param_2[3];
    uVar7 = uVar8;
    if ((((param_2[1] & 0x4000) == 0) && (uVar7 = uVar9, uVar10 = uVar8, (param_2[2] & 0x4000) == 0)
        ) && (uVar7 = uVar6, uVar6 = uVar9, (param_2[3] & 0x4000) == 0)) goto LAB_1003293b;
    uVar8 = (uint)*param_2;
  }
  else {
    uVar6 = (uint)param_2[3];
  }
  local_8 = FUN_10030161(param_1,uVar7,param_3,uVar8,uVar10,uVar6,param_4,param_6);
  local_8 = local_8 & 0xffff;
LAB_1003293b:
  uVar2 = *(undefined4 *)param_2;
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar1 = param_2[6];
  uVar5 = (ushort)local_8;
  if ((*param_2 & 0x4000) != 0) {
    *param_2 = uVar5;
  }
  if ((param_2[1] & 0x4000) != 0) {
    param_2[1] = uVar5;
  }
  if ((param_2[2] & 0x4000) != 0) {
    param_2[2] = uVar5;
  }
  if ((param_2[3] & 0x4000) != 0) {
    param_2[3] = uVar5;
  }
  FUN_10030fb2(param_1,param_2,(ushort)param_3,param_4,param_5,param_6);
  *(undefined4 *)param_2 = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)(param_2 + 4) = uVar4;
  param_2[6] = uVar1;
  if (uVar5 != (ushort)param_3) {
    FUN_100300df((int)param_1,local_8);
  }
  return;
}

