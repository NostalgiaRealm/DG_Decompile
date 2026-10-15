/*
 * FUN_180018f10 at 180018f10
 * undefined1 __fastcall FUN_180018f10(longlong param_1, int param_2, int * param_3)
 * Address ranges: 180018f10-180019014
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180018f10(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined1 uVar9;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68 [10];
  
  uVar9 = 0;
  if (param_2 == 0) {
    local_80[3] = *(undefined4 *)(param_1 + 0xe8);
    local_70 = *(undefined4 *)(param_1 + 0xec);
    local_6c = *(undefined4 *)(param_1 + 0xf0);
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    if (param_3 == (int *)0x0) {
      piVar8 = FUN_1800189ac((int *)(param_1 + 0xc0),local_68,local_80);
      uVar9 = 1;
    }
    else {
      iVar1 = *param_3;
      iVar2 = param_3[1];
      iVar3 = param_3[4];
      iVar4 = param_3[2];
      iVar5 = param_3[3];
      iVar6 = param_3[5];
      local_98 = iVar1;
      local_94 = iVar2;
      local_90 = iVar3;
      local_8c = iVar4;
      local_88 = iVar5;
      local_84 = iVar6;
      piVar8 = FUN_180018580(local_80,local_68,&local_98);
      if ((((iVar1 == *piVar8) && (iVar2 == piVar8[1])) && (iVar3 == piVar8[2])) &&
         (((iVar4 == piVar8[3] && (iVar5 == piVar8[4])) && (iVar6 == piVar8[5])))) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
      }
      piVar8 = FUN_1800189ac((int *)(param_1 + 0xc0),local_68,&local_98);
    }
    uVar7 = *(undefined8 *)(piVar8 + 2);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)piVar8;
    *(undefined8 *)(param_1 + 200) = uVar7;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(piVar8 + 4);
  }
  return uVar9;
}

