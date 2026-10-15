/*
 * FUN_10002061 at 10002061
 * undefined4 * __stdcall FUN_10002061(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 10002061-100021ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10002061(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = param_2[6];
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  uVar2 = param_2[2];
  param_1[5] = param_2[7];
  param_1[3] = uVar2;
  param_1[4] = param_2[3];
  uVar2 = param_2[5];
  param_1[6] = param_2[8];
  param_1[9] = uVar2;
  param_1[10] = param_2[4];
  iVar4 = DAT_1006c210;
  bVar1 = *(byte *)(param_2 + 0xb);
  param_1[7] = param_2[9];
  param_1[0xb] = (uint)bVar1;
  iVar3 = *(int *)(iVar4 + 0x85b);
  param_1[8] = param_2[10];
  if ((*(int *)(iVar4 + 0x7bc) != 0) && (*(int *)(iVar4 + 0x7bc) != 1)) {
    return param_1;
  }
  if (iVar3 == 1) {
    *param_1 = "nvldumd.dll";
    puVar5 = &DAT_10062684;
    param_1[1] = 0x10de;
    param_1[2] = 0x1c03;
    param_1[3] = 0x371a1458;
    param_1[4] = 0xa1;
    param_1[9] = 0x190015;
    param_1[10] = 0xe06c7;
  }
  else if (iVar3 == 2) {
    *param_1 = "atiumdag.dll";
    puVar5 = &DAT_1006265c;
    param_1[1] = 0x1002;
    param_1[2] = 0x67df;
    param_1[3] = 0x1002e366;
    param_1[4] = 0xe7;
    param_1[9] = 0x180121;
    param_1[10] = 0xe04e0;
  }
  else {
    if (iVar3 != 3) goto LAB_1000218b;
    *param_1 = "igdumdim32.dll";
    puVar5 = &DAT_1006266c;
    param_1[1] = 0x8086;
    param_1[2] = 0x1912;
    param_1[3] = 0x79771462;
    param_1[4] = 6;
    param_1[9] = 0x180014;
    param_1[10] = 0x64188e;
  }
  param_1[0xb] = 1;
  param_1[5] = *puVar5;
  param_1[6] = puVar5[1];
  param_1[7] = puVar5[2];
  param_1[8] = puVar5[3];
LAB_1000218b:
  if (*(int *)(iVar4 + 0x85f) != -1) {
    param_1[1] = *(int *)(iVar4 + 0x85f);
  }
  if (*(int *)(iVar4 + 0x863) != -1) {
    param_1[2] = *(int *)(iVar4 + 0x863);
  }
  if (*(int *)(iVar4 + 0x867) != -1) {
    param_1[3] = *(int *)(iVar4 + 0x867);
  }
  if (*(int *)(iVar4 + 0x86b) != -1) {
    param_1[4] = *(int *)(iVar4 + 0x86b);
  }
  return param_1;
}

