/*
 * FUN_10027c90 at 10027c90
 * undefined FUN_10027c90(void)
 * Address ranges: 10027c90-10027e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027c90(int param_1,int param_2,int param_3,int param_4,int param_5,undefined8 *param_6,
                 int param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_100226d8(param_1 + 0x3940);
  iVar4 = *(int *)(param_1 + 0x3688);
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_1004b290(puVar2);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar7 = (undefined4 *)FUN_1004b138(puVar2,0xdc);
    if (puVar7 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar4 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar7[1] = 0xdc;
      puVar7[3] = param_1;
      puVar7[4] = param_2;
      puVar7[5] = param_3;
      puVar7[6] = param_4;
      puVar7[7] = param_5;
      puVar7[8] = param_7;
      puVar3 = (undefined8 *)((int)puVar7 + 0x27U & 0xfffffffc);
      puVar7[2] = puVar3;
      uVar10 = *param_6;
      uVar9 = param_6[3];
      uVar8 = param_6[2];
      puVar3[1] = param_6[1];
      *puVar3 = uVar10;
      puVar3[3] = uVar9;
      puVar3[2] = uVar8;
      uVar10 = param_6[4];
      uVar9 = param_6[7];
      uVar8 = param_6[6];
      puVar3[5] = param_6[5];
      puVar3[4] = uVar10;
      puVar3[7] = uVar9;
      puVar3[6] = uVar8;
      uVar10 = param_6[8];
      uVar9 = param_6[0xb];
      uVar8 = param_6[10];
      puVar3[9] = param_6[9];
      puVar3[8] = uVar10;
      puVar3[0xb] = uVar9;
      puVar3[10] = uVar8;
      uVar10 = param_6[0xc];
      uVar9 = param_6[0xf];
      uVar8 = param_6[0xe];
      puVar3[0xd] = param_6[0xd];
      puVar3[0xc] = uVar10;
      puVar3[0xf] = uVar9;
      puVar3[0xe] = uVar8;
      uVar10 = param_6[0x10];
      uVar9 = param_6[0x13];
      uVar8 = param_6[0x12];
      puVar3[0x11] = param_6[0x11];
      puVar3[0x10] = uVar10;
      puVar3[0x13] = uVar9;
      puVar3[0x12] = uVar8;
      uVar10 = param_6[0x14];
      uVar9 = param_6[0x17];
      uVar8 = param_6[0x16];
      puVar3[0x15] = param_6[0x15];
      puVar3[0x14] = uVar10;
      puVar3[0x17] = uVar9;
      puVar3[0x16] = uVar8;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      *puVar7 = FUN_10027e90;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = puVar3 + 0x18;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_10027e60;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar2);
  }
  piVar1 = *(int **)(iVar4 + 0x12d0);
  *piVar1 = (int)param_6;
  piVar1[1] = param_1;
  piVar1[2] = param_2;
  piVar1[3] = param_3;
  piVar1[4] = param_4;
  piVar1[5] = param_5;
  piVar1[6] = param_7;
  FUN_10027e90(piVar1);
LAB_10027e60:
  *puVar2 = 0;
  return;
}

