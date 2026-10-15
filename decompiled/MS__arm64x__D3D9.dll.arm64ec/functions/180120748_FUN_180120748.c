/*
 * FUN_180120748 at 180120748
 * undefined FUN_180120748(void)
 * Address ranges: 180120748-1801208bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180120748(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  uint param_5,uint param_6,int param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(uint *)(param_2 + 1);
  cVar7 = *(char *)(param_3 + 1);
  puVar1 = (undefined8 *)(*param_2 + (ulonglong)(uVar6 * param_7));
  puVar5 = (undefined8 *)(param_4 + (ulonglong)*(byte *)(param_3 + 3) * 4);
  if (cVar7 == '\x01') {
    for (uVar8 = param_6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar5 = *(undefined4 *)puVar1;
      puVar2 = (undefined4 *)((longlong)puVar1 + (ulonglong)uVar6);
      puVar1 = (undefined8 *)((longlong)puVar1 + (ulonglong)uVar6 * 2);
      *(undefined4 *)((longlong)puVar5 + (ulonglong)param_5) = *puVar2;
      puVar5 = (undefined8 *)((longlong)puVar5 + (ulonglong)param_5 * 2);
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)puVar5 = *(undefined4 *)puVar1;
    }
  }
  else if (cVar7 == '\x02') {
    for (uVar8 = param_6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar3 = (undefined4 *)((longlong)puVar1 + (ulonglong)uVar6);
      puVar4 = (undefined4 *)((longlong)puVar5 + (ulonglong)param_5);
      *(undefined4 *)puVar5 = *(undefined4 *)puVar1;
      puVar2 = (undefined4 *)((longlong)puVar1 + 4);
      puVar1 = (undefined8 *)((longlong)puVar1 + (ulonglong)uVar6 * 2);
      *(undefined4 *)((longlong)puVar5 + 4) = *puVar2;
      puVar5 = (undefined8 *)((longlong)puVar5 + (ulonglong)param_5 * 2);
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)puVar5 = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)((longlong)puVar1 + 4);
    }
  }
  else if (cVar7 == '\x03') {
    for (uVar8 = param_6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar2 = (undefined4 *)((longlong)puVar1 + (ulonglong)uVar6);
      puVar3 = (undefined4 *)((longlong)puVar5 + (ulonglong)param_5);
      *(undefined4 *)puVar5 = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)((longlong)puVar1 + 4);
      puVar9 = puVar1 + 1;
      puVar1 = (undefined8 *)((longlong)puVar1 + (ulonglong)uVar6 * 2);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)puVar9;
      puVar5 = (undefined8 *)((longlong)puVar5 + (ulonglong)param_5 * 2);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)puVar5 = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)((longlong)puVar1 + 4);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar1 + 1);
    }
  }
  else if (cVar7 == '\x04') {
    for (uVar8 = param_6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar9 = puVar1 + 1;
      uVar10 = *puVar1;
      uVar12 = ((undefined8 *)((longlong)puVar1 + (ulonglong)uVar6))[1];
      uVar11 = *(undefined8 *)((longlong)puVar1 + (ulonglong)uVar6);
      puVar1 = (undefined8 *)((longlong)puVar1 + (ulonglong)uVar6 * 2);
      puVar5[1] = *puVar9;
      *puVar5 = uVar10;
      ((undefined8 *)((longlong)puVar5 + (ulonglong)param_5))[1] = uVar12;
      *(undefined8 *)((longlong)puVar5 + (ulonglong)param_5) = uVar11;
      puVar5 = (undefined8 *)((longlong)puVar5 + (ulonglong)param_5 * 2);
    }
    if ((param_6 & 1) != 0) {
      uVar10 = *puVar1;
      puVar5[1] = puVar1[1];
      *puVar5 = uVar10;
    }
  }
  return;
}

