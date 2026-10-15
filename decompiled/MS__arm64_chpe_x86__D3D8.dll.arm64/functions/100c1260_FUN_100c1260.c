/*
 * FUN_100c1260 at 100c1260
 * undefined FUN_100c1260(void)
 * Address ranges: 100c1260-100c1507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100c1260(int param_1,int param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar3 = *(int *)(param_1 + 0xa8);
  iVar9 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar9 = *(int *)(param_1 + 0x14) + -0x58e0;
  }
  uVar5 = *(undefined1 *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  puVar8 = (undefined4 *)FUN_100febf0(0xa4);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar8 + 0x26) = 0;
    puVar8[0x28] = puVar8 + 0x25;
    *(undefined8 *)(puVar8 + 0x14) = 0;
    puVar8[0x16] = 0;
    iVar2 = 0;
    if (*(int *)(iVar9 + 0xacc) != 0) {
      iVar2 = *(int *)(iVar9 + 0xacc) + 4;
    }
    puVar8[1] = iVar2;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 2) = 0;
    *(undefined8 *)(puVar8 + 6) = 0;
    *(undefined8 *)(puVar8 + 10) = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 0xe) = 0;
    puVar8[0x12] = 0;
    *(bool *)(puVar8 + 0x12) = iVar3 == 0x14;
    *puVar8 = &PTR_FUN_101293b0;
    puVar8[0x13] = &PTR_FUN_101293ac;
    puVar8[0x17] = iVar9;
    puVar8[0x18] = param_1;
    puVar8[0x19] = 0;
    uVar12 = *param_3;
    uVar11 = param_3[3];
    uVar10 = param_3[2];
    *(undefined8 *)(puVar8 + 0x1c) = param_3[1];
    *(undefined8 *)(puVar8 + 0x1a) = uVar12;
    *(undefined8 *)(puVar8 + 0x20) = uVar11;
    *(undefined8 *)(puVar8 + 0x1e) = uVar10;
    puVar8[0x22] = param_2;
    puVar8[0x23] = uVar4;
    *(undefined1 *)(puVar8 + 0x24) = param_4;
    *(undefined1 *)((int)puVar8 + 0x91) = uVar5;
    *(undefined1 *)((int)puVar8 + 0x92) = 0;
    *puVar8 = &PTR_FUN_101293b0;
    puVar8[0x13] = &PTR_FUN_101293ac;
    puVar8[0x25] = &DAT_1012a69c;
  }
  *(undefined4 **)(param_1 + param_2 * 4 + 0x38) = puVar8;
  if (puVar8 == (undefined4 *)0x0) {
LAB_100c14e8:
    uVar10 = 0;
  }
  else {
    if (puVar8[0x1d] == 3) {
      FUN_1001d020(puVar8);
      iVar9 = FUN_100fece0((uint)*(ushort *)(puVar8 + 3) * puVar8[5]);
      puVar8[0x19] = iVar9;
      if (iVar9 != 0) {
        FUN_100ff690(iVar9,0,(uint)*(ushort *)(puVar8 + 3) * puVar8[5]);
      }
      if (puVar8[0x19] == 0) goto LAB_100c14e8;
    }
    else {
      FUN_1001d020(puVar8);
      if (*(char *)((int)puVar8 + 0x91) != '\0') {
        FUN_100351f0(puVar8,0,0,*(undefined1 *)(puVar8 + 0x12),0);
      }
      if (*(char *)(puVar8 + 0x12) != '\0') {
        *(undefined2 *)(puVar8 + 0xe) = 0x102;
        *(undefined1 *)((int)puVar8 + 0x3a) = 0;
        puVar8[0xf] = 3;
        *(undefined2 *)(puVar8 + 0x10) = 0x102;
        *(undefined1 *)((int)puVar8 + 0x42) = 0;
        puVar8[0x11] = 4;
      }
    }
    piVar1 = puVar8 + 0x27;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    uVar10 = 1;
  }
  return uVar10;
}

