/*
 * FUN_100ecb50 at 100ecb50
 * undefined FUN_100ecb50(void)
 * Address ranges: 100ecb50-100ece07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100ecb50(int param_1,int param_2,undefined8 *param_3,undefined1 param_4)

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
  
  iVar3 = *(int *)(param_1 + 0xa8);
  iVar9 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar9 = *(int *)(param_1 + 0x14) + -0x66b4;
  }
  uVar5 = *(undefined1 *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  puVar8 = (undefined4 *)FUN_101321c0(0xa0);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar8 + 0x25) = 0;
    puVar8[0x27] = puVar8 + 0x24;
    *(undefined8 *)(puVar8 + 0x14) = 0;
    puVar8[0x16] = 0;
    iVar2 = 0;
    if (*(int *)(iVar9 + 0xd90) != 0) {
      iVar2 = *(int *)(iVar9 + 0xd90) + 4;
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
    *puVar8 = &PTR_D3DPERF_GetStatus_native_1015e7a0;
    puVar8[0x13] = &PTR_FUN_1015e79c;
    puVar8[0x17] = iVar9;
    puVar8[0x18] = param_1;
    puVar8[0x19] = 0;
    uVar10 = *param_3;
    *(undefined8 *)(puVar8 + 0x1c) = param_3[1];
    *(undefined8 *)(puVar8 + 0x1a) = uVar10;
    *(undefined8 *)(puVar8 + 0x1e) = param_3[2];
    puVar8[0x20] = *(undefined4 *)(param_3 + 3);
    puVar8[0x21] = param_2;
    puVar8[0x22] = uVar4;
    *(undefined1 *)(puVar8 + 0x23) = param_4;
    *(undefined1 *)((int)puVar8 + 0x8d) = uVar5;
    *(undefined1 *)((int)puVar8 + 0x8e) = 0;
    *puVar8 = &PTR_D3DPERF_GetStatus_native_1015e7a0;
    puVar8[0x13] = &PTR_FUN_1015e79c;
    puVar8[0x24] = &DAT_1015fd90;
  }
  *(undefined4 **)(param_1 + param_2 * 4 + 0x38) = puVar8;
  if (puVar8 == (undefined4 *)0x0) {
LAB_100ecde8:
    uVar10 = 0;
  }
  else {
    if (puVar8[0x1d] == 3) {
      FUN_10022680(puVar8);
      iVar9 = FUN_101322b0((uint)*(ushort *)(puVar8 + 3) * puVar8[5]);
      puVar8[0x19] = iVar9;
      if (iVar9 != 0) {
        FUN_101325d0(iVar9,0,(uint)*(ushort *)(puVar8 + 3) * puVar8[5]);
      }
      if (puVar8[0x19] == 0) goto LAB_100ecde8;
    }
    else {
      FUN_10022680(puVar8);
      if (*(char *)((int)puVar8 + 0x8d) != '\0') {
        FUN_1003f030(puVar8,0,0,*(undefined1 *)(puVar8 + 0x12),0);
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
    piVar1 = puVar8 + 0x26;
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

