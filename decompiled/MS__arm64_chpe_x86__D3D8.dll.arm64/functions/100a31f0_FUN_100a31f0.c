/*
 * FUN_100a31f0 at 100a31f0
 * undefined FUN_100a31f0(void)
 * Address ranges: 100a31f0-100a3437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100a31f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar9 = param_1 + -0xc0;
  iVar13 = FUN_100a2a60(iVar9,1);
  if (iVar13 == 0) {
    return '\0';
  }
  local_70[0] = 0;
  cVar12 = FUN_1009d740(iVar9,iVar13,param_2,param_3,param_4,param_5,param_6,&local_50,local_70);
  uVar11 = local_70[0];
  if (cVar12 == '\0') {
    return '\0';
  }
  uStack_58 = uStack_48;
  local_60 = local_50;
  uVar6 = param_2 + *(int *)(param_1 + -0x94) * param_3;
  iVar13 = *(int *)(param_1 + -0x7c);
  puVar3 = (undefined4 *)(iVar13 + 0x11c0);
  FUN_100fd300(puVar3);
  cVar5 = *(char *)(iVar13 + 0x12ec);
  bVar10 = true;
  if (cVar5 == '\0') {
LAB_100a3374:
    if (cVar5 != '\0') goto LAB_100a33a8;
  }
  else {
    puVar14 = (undefined4 *)FUN_100fd1a8(puVar3,0x1c);
    if (puVar14 != (undefined4 *)0x0) {
      piVar2 = (int *)(iVar13 + 0x12e8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar8) {
          *piVar2 = *piVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar14[1] = 0x1c;
      puVar14[2] = iVar9;
      puVar14[3] = uVar6;
      *(undefined8 *)(puVar14 + 6) = uStack_58;
      *(undefined8 *)(puVar14 + 4) = local_60;
      *(undefined1 *)(puVar14 + 8) = uVar11;
      puVar4 = (undefined4 *)((int)puVar14 + 0x27U & 0xfffffffc);
      *puVar4 = 0;
      *puVar14 = FUN_100a3440;
      puVar3[*(int *)(iVar13 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar13 + 0x12ed) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar13 + 0x1220));
        bVar10 = false;
      }
      goto LAB_100a3374;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar3);
  }
  piVar2 = *(int **)(iVar13 + 0x12d0);
  *piVar2 = iVar9;
  piVar2[1] = uVar6;
  *(undefined8 *)(piVar2 + 4) = uStack_58;
  *(undefined8 *)(piVar2 + 2) = local_60;
  *(undefined1 *)(piVar2 + 6) = uVar11;
  FUN_100a3440(piVar2);
LAB_100a33a8:
  if (bVar10) {
    *puVar3 = 0;
  }
  uVar15 = FUN_100a0318(iVar9);
  if (((uVar15 & 1) != 0) && (*(int *)(param_1 + 0x90) != 0)) {
    pbVar1 = (byte *)((uVar6 >> 3 & 3) + param_1 + ((uVar6 >> 5) + 2) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar6 & 7));
  }
  return cVar12;
}

