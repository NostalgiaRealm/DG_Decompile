/*
 * FUN_1800160d8 at 1800160d8
 * undefined __fastcall FUN_1800160d8(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800160d8-180016194
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800160d8(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 != (undefined8 *)0x0) {
      lVar9 = 2;
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf0);
      puVar6 = param_2;
      do {
        puVar8 = puVar6;
        puVar7 = puVar5;
        uVar4 = puVar7[1];
        *puVar8 = *puVar7;
        puVar8[1] = uVar4;
        uVar4 = puVar7[3];
        puVar8[2] = puVar7[2];
        puVar8[3] = uVar4;
        uVar4 = puVar7[5];
        puVar8[4] = puVar7[4];
        puVar8[5] = uVar4;
        uVar4 = puVar7[7];
        puVar8[6] = puVar7[6];
        puVar8[7] = uVar4;
        uVar4 = puVar7[9];
        puVar8[8] = puVar7[8];
        puVar8[9] = uVar4;
        uVar4 = puVar7[0xb];
        puVar8[10] = puVar7[10];
        puVar8[0xb] = uVar4;
        uVar4 = puVar7[0xd];
        puVar8[0xc] = puVar7[0xc];
        puVar8[0xd] = uVar4;
        uVar4 = puVar7[0xf];
        puVar8[0xe] = puVar7[0xe];
        puVar8[0xf] = uVar4;
        lVar9 = lVar9 + -1;
        puVar5 = puVar7 + 0x10;
        puVar6 = puVar8 + 0x10;
      } while (lVar9 != 0);
      uVar4 = puVar7[0x11];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar4;
      uVar1 = *(undefined4 *)((longlong)puVar7 + 0x94);
      uVar2 = *(undefined4 *)(puVar7 + 0x13);
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0x9c);
      *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(puVar7 + 0x12);
      *(undefined4 *)((longlong)puVar8 + 0x94) = uVar1;
      *(undefined4 *)(puVar8 + 0x13) = uVar2;
      *(undefined4 *)((longlong)puVar8 + 0x9c) = uVar3;
      uVar1 = *(undefined4 *)((longlong)puVar7 + 0xa4);
      uVar2 = *(undefined4 *)(puVar7 + 0x15);
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0xac);
      *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(puVar7 + 0x14);
      *(undefined4 *)((longlong)puVar8 + 0xa4) = uVar1;
      *(undefined4 *)(puVar8 + 0x15) = uVar2;
      *(undefined4 *)((longlong)puVar8 + 0xac) = uVar3;
      *(undefined8 *)((longlong)puVar8 + 0xad) = *(undefined8 *)((longlong)puVar7 + 0xad);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1c0))
                (*(longlong **)(param_1 + 0x18),(longlong)param_2 + 0x135);
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

