/*
 * FUN_180021290 at 180021290
 * undefined __fastcall FUN_180021290(undefined8 param_1, longlong * param_2, longlong param_3, longlong param_4, uint param_5, uint param_6, int param_7)
 * Address ranges: 180021290-18002142c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021290(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  uint param_5,uint param_6,int param_7)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar10 = *(uint *)(param_2 + 1);
  uVar11 = (ulonglong)uVar10;
  uVar12 = (ulonglong)param_5;
  puVar9 = (undefined8 *)(*param_2 + (ulonglong)(uVar10 * param_7));
  puVar8 = (undefined8 *)(param_4 + (ulonglong)*(byte *)(param_3 + 3) * 4);
  cVar2 = *(char *)(param_3 + 1);
  if (cVar2 == '\x01') {
    uVar10 = param_6 >> 1;
    if (uVar10 != 0) {
      do {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
        puVar1 = (undefined4 *)((longlong)puVar9 + uVar11);
        puVar9 = (undefined8 *)((longlong)puVar9 + uVar11 * 2);
        *(undefined4 *)((longlong)puVar8 + uVar12) = *puVar1;
        puVar8 = (undefined8 *)((longlong)puVar8 + uVar12 * 2);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
    }
  }
  else if (cVar2 == '\x02') {
    uVar10 = param_6 >> 1;
    if (uVar10 != 0) {
      do {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
        *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)((longlong)puVar9 + 4);
        *(undefined4 *)((longlong)puVar8 + uVar12) = *(undefined4 *)((longlong)puVar9 + uVar11);
        puVar1 = (undefined4 *)((longlong)puVar9 + uVar11 + 4);
        puVar9 = (undefined8 *)((longlong)puVar9 + uVar11 * 2);
        *(undefined4 *)((longlong)puVar8 + uVar12 + 4) = *puVar1;
        puVar8 = (undefined8 *)((longlong)puVar8 + uVar12 * 2);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
      *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)((longlong)puVar9 + 4);
    }
  }
  else if (cVar2 == '\x03') {
    uVar10 = param_6 >> 1;
    if (uVar10 != 0) {
      do {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
        *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)((longlong)puVar9 + 4);
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
        *(undefined4 *)((longlong)puVar8 + uVar12) = *(undefined4 *)((longlong)puVar9 + uVar11);
        *(undefined4 *)((longlong)puVar8 + uVar12 + 4) =
             *(undefined4 *)((longlong)puVar9 + uVar11 + 4);
        puVar1 = (undefined4 *)((longlong)puVar9 + uVar11 + 8);
        puVar9 = (undefined8 *)((longlong)puVar9 + uVar11 * 2);
        *(undefined4 *)((longlong)puVar8 + uVar12 + 8) = *puVar1;
        puVar8 = (undefined8 *)((longlong)puVar8 + uVar12 * 2);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
      *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)((longlong)puVar9 + 4);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
    }
  }
  else if (cVar2 == '\x04') {
    uVar7 = param_6 >> 1;
    if (uVar7 != 0) {
      do {
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = *(undefined8 *)((longlong)puVar9 + (ulonglong)uVar10);
        uVar6 = ((undefined8 *)((longlong)puVar9 + (ulonglong)uVar10))[1];
        puVar9 = (undefined8 *)((longlong)puVar9 + uVar11 * 2);
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        *(undefined8 *)((longlong)puVar8 + uVar12) = uVar5;
        ((undefined8 *)((longlong)puVar8 + uVar12))[1] = uVar6;
        puVar8 = (undefined8 *)((longlong)puVar8 + uVar12 * 2);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((param_6 & 1) != 0) {
      uVar3 = puVar9[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar3;
    }
  }
  return;
}

