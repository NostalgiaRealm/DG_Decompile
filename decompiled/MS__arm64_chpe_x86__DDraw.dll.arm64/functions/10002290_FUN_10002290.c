/*
 * FUN_10002290 at 10002290
 * undefined FUN_10002290(void)
 * Address ranges: 10002290-1000249f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10002290(undefined8 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(param_3 + 9);
  uVar12 = *(undefined8 *)(param_3 + 7);
  iVar7 = param_3[5];
  piVar1 = param_2 + 9;
  piVar2 = param_2 + 1;
  *param_2 = param_3[6];
  iVar8 = *param_3;
  piVar3 = param_2 + 10;
  *piVar1 = iVar7;
  iVar7 = param_3[4];
  piVar4 = param_2 + 2;
  *piVar2 = iVar8;
  iVar8 = param_3[1];
  piVar5 = param_2 + 3;
  *piVar3 = iVar7;
  bVar10 = *(byte *)(param_3 + 0xb);
  piVar6 = param_2 + 4;
  *piVar4 = iVar8;
  iVar7 = param_3[2];
  param_2[0xb] = (uint)bVar10;
  iVar8 = DAT_100be0c0;
  *piVar5 = iVar7;
  uVar9 = *(uint *)(iVar8 + 0x7bc);
  *piVar6 = param_3[3];
  *(undefined8 *)(param_2 + 7) = uVar13;
  *(undefined8 *)(param_2 + 5) = uVar12;
  if (1 < uVar9) {
    return param_2;
  }
  switch(*(undefined4 *)(iVar8 + 0x85b)) {
  case 1:
    *param_2 = (int)s_nvldumd_dll_100b32f8;
    *piVar2 = 0x10de;
    *piVar4 = 0x1c03;
    *piVar5 = 0x371a1458;
    *piVar6 = 0xa1;
    *piVar1 = 0x190015;
    *piVar3 = 0xe06c7;
    puVar11 = (undefined8 *)&DAT_100b3390;
    break;
  case 2:
    *param_2 = (int)s_atiumdag_dll_100b3308;
    *piVar2 = 0x1002;
    *piVar4 = 0x67df;
    *piVar5 = 0x1002e366;
    *piVar6 = 0xe7;
    *piVar1 = 0x180121;
    *piVar3 = 0xe04e0;
    puVar11 = (undefined8 *)&DAT_100b3370;
    break;
  case 3:
    *param_2 = (int)s_igdumdim32_dll_100b3318;
    *piVar2 = 0x8086;
    *piVar4 = 0x1912;
    *piVar5 = 0x79771462;
    *piVar6 = 6;
    *piVar1 = 0x180014;
    *piVar3 = 0x64188e;
    puVar11 = (undefined8 *)&DAT_100b3380;
    break;
  default:
    goto switchD_1000235c_default;
  }
  uVar12 = *puVar11;
  *(undefined8 *)(param_2 + 7) = puVar11[1];
  *(undefined8 *)(param_2 + 5) = uVar12;
  param_2[0xb] = 1;
switchD_1000235c_default:
  if (*(int *)(iVar8 + 0x85f) != -1) {
    *piVar2 = *(int *)(iVar8 + 0x85f);
  }
  if (*(int *)(iVar8 + 0x863) != -1) {
    *piVar4 = *(int *)(iVar8 + 0x863);
  }
  if (*(int *)(iVar8 + 0x867) != -1) {
    *piVar5 = *(int *)(iVar8 + 0x867);
  }
  if (*(int *)(iVar8 + 0x86b) != -1) {
    *piVar6 = *(int *)(iVar8 + 0x86b);
  }
  return param_2;
}

