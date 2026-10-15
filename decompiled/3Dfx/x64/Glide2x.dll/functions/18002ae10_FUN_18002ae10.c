/*
 * FUN_18002ae10 at 18002ae10
 * undefined __fastcall FUN_18002ae10(longlong * param_1, undefined8 * param_2)
 * Address ranges: 18002ae10-18002b072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ae10(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint local_258 [8];
  undefined8 local_238 [66];
  
  FUN_180026a88((longlong)(param_1 + 0x69d));
  FUN_180023170((longlong)param_1,local_258,(longlong)param_2);
  uVar5 = FUN_18002328c((longlong)param_1,(longlong)param_2,local_258);
  if ((char)uVar5 != '\0') {
    FUN_18005e700(param_1[0x638] + 0x12c0);
    FUN_180023370(param_1,(longlong)param_2,(undefined8 *)local_258);
    return;
  }
  lVar11 = 4;
  lVar8 = 4;
  puVar6 = local_238;
  do {
    puVar10 = param_2;
    puVar12 = puVar6;
    uVar5 = puVar10[1];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    *puVar12 = *puVar10;
    puVar12[1] = uVar5;
    uVar5 = puVar10[4];
    uVar4 = puVar10[5];
    puVar12[2] = uVar2;
    puVar12[3] = uVar3;
    uVar2 = puVar10[6];
    uVar3 = puVar10[7];
    puVar12[4] = uVar5;
    puVar12[5] = uVar4;
    uVar5 = puVar10[8];
    uVar4 = puVar10[9];
    puVar12[6] = uVar2;
    puVar12[7] = uVar3;
    uVar2 = puVar10[10];
    uVar3 = puVar10[0xb];
    puVar12[8] = uVar5;
    puVar12[9] = uVar4;
    uVar5 = puVar10[0xc];
    uVar4 = puVar10[0xd];
    puVar12[10] = uVar2;
    puVar12[0xb] = uVar3;
    uVar2 = puVar10[0xe];
    uVar3 = puVar10[0xf];
    puVar12[0xc] = uVar5;
    puVar12[0xd] = uVar4;
    puVar12[0xe] = uVar2;
    puVar12[0xf] = uVar3;
    lVar8 = lVar8 + -1;
    puVar6 = puVar12 + 0x10;
    param_2 = puVar10 + 0x10;
  } while (lVar8 != 0);
  uVar5 = *(undefined8 *)((longlong)puVar10 + 0x84);
  lVar8 = param_1[0x638];
  *(undefined8 *)((longlong)puVar12 + 0x7c) = *(undefined8 *)((longlong)puVar10 + 0x7c);
  *(undefined8 *)((longlong)puVar12 + 0x84) = uVar5;
  piVar1 = (int *)(lVar8 + 0x12c0);
  FUN_18005e070(piVar1);
  if (*(char *)(lVar8 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_18005e090((longlong)piVar1,0x218);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar8 + 0x14c0) = *(int *)(lVar8 + 0x14c0) + 1;
      UNLOCK();
      puVar6[1] = 0x218;
      puVar6[2] = param_1;
      puVar12 = puVar6 + 3;
      puVar10 = local_238;
      do {
        puVar9 = puVar10;
        puVar7 = puVar12;
        uVar5 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar7 = *puVar9;
        puVar7[1] = uVar5;
        uVar5 = puVar9[4];
        uVar4 = puVar9[5];
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar2 = puVar9[6];
        uVar3 = puVar9[7];
        puVar7[4] = uVar5;
        puVar7[5] = uVar4;
        uVar5 = puVar9[8];
        uVar4 = puVar9[9];
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar2 = puVar9[10];
        uVar3 = puVar9[0xb];
        puVar7[8] = uVar5;
        puVar7[9] = uVar4;
        uVar5 = puVar9[0xc];
        uVar4 = puVar9[0xd];
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
        uVar2 = puVar9[0xe];
        uVar3 = puVar9[0xf];
        puVar7[0xc] = uVar5;
        puVar7[0xd] = uVar4;
        puVar7[0xe] = uVar2;
        puVar7[0xf] = uVar3;
        lVar11 = lVar11 + -1;
        puVar12 = puVar7 + 0x10;
        puVar10 = puVar9 + 0x10;
      } while (lVar11 != 0);
      uVar5 = *(undefined8 *)((longlong)puVar9 + 0x84);
      puVar12 = (undefined8 *)((longlong)puVar6 + 0x22bU & 0xfffffffffffffff8);
      *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar9 + 0x7c);
      *(undefined8 *)((longlong)puVar7 + 0x84) = uVar5;
      *puVar12 = 0;
      *puVar6 = FUN_18002b074;
      *(undefined8 **)(lVar8 + 0x1350 + (ulonglong)*(uint *)(lVar8 + 0x14bc) * 0x28) = puVar12;
      if (*(char *)(lVar8 + 0x14c5) != '\0') {
        FUN_18005e1c0(piVar1);
        SetEvent(*(HANDLE *)(lVar8 + 0x1340));
        return;
      }
      goto LAB_18002b05d;
    }
    FUN_18005e1c0(piVar1);
    Sleep(100);
    FUN_18005e070(piVar1);
  }
  puVar6 = *(undefined8 **)(lVar8 + 0x14a0);
  *puVar6 = param_1;
  puVar12 = puVar6 + 1;
  puVar10 = local_238;
  do {
    puVar9 = puVar10;
    puVar7 = puVar12;
    uVar5 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    *puVar7 = *puVar9;
    puVar7[1] = uVar5;
    uVar5 = puVar9[4];
    uVar4 = puVar9[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar9[6];
    uVar3 = puVar9[7];
    puVar7[4] = uVar5;
    puVar7[5] = uVar4;
    uVar5 = puVar9[8];
    uVar4 = puVar9[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar9[10];
    uVar3 = puVar9[0xb];
    puVar7[8] = uVar5;
    puVar7[9] = uVar4;
    uVar5 = puVar9[0xc];
    uVar4 = puVar9[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar9[0xe];
    uVar3 = puVar9[0xf];
    puVar7[0xc] = uVar5;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar11 = lVar11 + -1;
    puVar12 = puVar7 + 0x10;
    puVar10 = puVar9 + 0x10;
  } while (lVar11 != 0);
  uVar5 = *(undefined8 *)((longlong)puVar9 + 0x84);
  *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar9 + 0x7c);
  *(undefined8 *)((longlong)puVar7 + 0x84) = uVar5;
  FUN_18002b074(puVar6);
LAB_18002b05d:
  FUN_18005e1c0(piVar1);
  return;
}

