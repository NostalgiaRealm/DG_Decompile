/*
 * FUN_10068ed8 at 10068ed8
 * undefined FUN_10068ed8(void)
 * Address ranges: 10068ed8-10069237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10068ed8(undefined4 param_1,uint *param_2,int param_3,int *param_4,uint param_5,
                   uint param_6,uint param_7,uint param_8,int param_9,undefined4 param_10,
                   int param_11)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_58 [24];
  
  param_2[2] = param_5;
  puVar1 = (uint *)(param_3 + 0x1c);
  param_2[3] = param_6;
  puVar2 = (uint *)(param_3 + 0x18);
  puVar3 = param_2 + 4;
  (*(code *)PTR_FUN_1009d1e4)(puVar3,0,0,param_5 * *puVar2,param_6 * *puVar1);
  piVar4 = (int *)(param_3 + 0x24);
  if (*piVar4 == 7) {
    iVar11 = 0;
    iVar10 = 0;
    iVar5 = *puVar1 * 200;
    iVar7 = *puVar2 * 0x140;
  }
  else {
    iVar7 = (*(code *)PTR_FUN_1009d198)(param_4 + 3);
    if (iVar7 != 0) goto LAB_10068ff4;
    iVar5 = param_4[6] * *puVar1;
    iVar7 = param_4[5] * *puVar2;
    iVar11 = param_4[4] * *puVar1;
    iVar10 = param_4[3] * *puVar2;
  }
  (*(code *)PTR_FUN_1009d1e4)(puVar3,iVar10,iVar11,iVar7,iVar5);
LAB_10068ff4:
  *(bool *)((int)param_2 + 0x31) = param_9 != param_11;
  uVar15 = param_2[6];
  iVar7 = uVar15 - *puVar3;
  iVar11 = param_2[7] - param_2[5];
  if (((*puVar3 == 0) && ((param_2[5] == 0 && uVar15 == param_7) && param_2[7] == param_8)) &&
     ((*(char *)(param_3 + 0xd5d) == '\0' ||
      ((*(int *)(param_3 + 0x28) != 2 || (uVar15 == (uint)(iVar11 * 4) / 3)))))) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  *(char *)(param_2 + 0xc) = cVar6;
  puVar3 = param_2 + 8;
  uVar9 = (*(code *)PTR_FUN_1009d1e4)(puVar3,0,0,param_7,param_8);
  if ((char)param_2[0xc] != '\0') {
    puVar8 = (undefined8 *)
             FUN_1006a018(uVar9,auStack_58,*piVar4,iVar7,iVar11,*puVar2,*puVar1,param_7,param_8);
    uVar9 = *puVar8;
    *(undefined8 *)(param_2 + 10) = puVar8[1];
    *(undefined8 *)puVar3 = uVar9;
  }
  if ((param_2[10] - *puVar3 == iVar7) && (param_2[0xb] - param_2[9] == iVar11)) {
    uVar15 = 0;
  }
  else {
    uVar15 = param_4[7] << 3;
  }
  cVar6 = FUN_1006bc40(param_1,param_3);
  if ((((param_4[1] != 100) || (param_4[2] != 100)) ||
      (((cVar6 == '\0' || (*(char *)(param_3 + 0xd58) != '\0')) &&
       ((*param_4 != 100 || (*(char *)(param_3 + 0xd59) == '\0')))))) ||
     (uVar14 = 0, *piVar4 - 6U < 3)) {
    uVar14 = 1;
  }
  if ((1 < *puVar2) || (uVar13 = 0, 1 < *puVar1)) {
    uVar13 = 2;
  }
  uVar12 = 0;
  if ((*piVar4 - 6U & 0xfffffffd) == 0) {
    uVar12 = 4;
  }
  uVar13 = uVar14 | uVar12 | uVar13;
  param_2[1] = uVar13;
  *param_2 = uVar13 | uVar15;
  return param_2;
}

