/*
 * FUN_180088bd8 at 180088bd8
 * undefined __fastcall FUN_180088bd8(undefined8 * param_1, undefined8 * param_2)
 * Address ranges: 180088bd8-180088d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180088bd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 2) == 1) {
    lVar2 = 4;
    do {
      puVar5 = param_1;
      puVar4 = param_2;
      uVar1 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      uVar1 = puVar5[3];
      puVar4[2] = puVar5[2];
      puVar4[3] = uVar1;
      uVar1 = puVar5[5];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar1;
      uVar1 = puVar5[7];
      puVar4[6] = puVar5[6];
      puVar4[7] = uVar1;
      uVar1 = puVar5[9];
      puVar4[8] = puVar5[8];
      puVar4[9] = uVar1;
      uVar1 = puVar5[0xb];
      puVar4[10] = puVar5[10];
      puVar4[0xb] = uVar1;
      uVar1 = puVar5[0xd];
      puVar4[0xc] = puVar5[0xc];
      puVar4[0xd] = uVar1;
      uVar1 = puVar5[0xf];
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xf] = uVar1;
      lVar2 = lVar2 + -1;
      param_2 = puVar4 + 0x10;
      param_1 = puVar5 + 0x10;
    } while (lVar2 != 0);
    uVar1 = puVar5[0x11];
    puVar4[0x10] = puVar5[0x10];
    puVar4[0x11] = uVar1;
    uVar1 = puVar5[0x13];
    puVar4[0x12] = puVar5[0x12];
    puVar4[0x13] = uVar1;
    uVar1 = puVar5[0x15];
    puVar4[0x14] = puVar5[0x14];
    puVar4[0x15] = uVar1;
    uVar1 = puVar5[0x17];
    puVar4[0x16] = puVar5[0x16];
    puVar4[0x17] = uVar1;
    uVar1 = puVar5[0x19];
    puVar4[0x18] = puVar5[0x18];
    puVar4[0x19] = uVar1;
    *(undefined4 *)(puVar4 + 0x1a) = *(undefined4 *)(puVar5 + 0x1a);
  }
  else {
    FUN_180088764((undefined1 *)param_2);
    iVar6 = 0;
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    uVar8 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_1 + 4);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_2 + 2) = 1;
    if (*(int *)(param_1 + 1) != 0) {
      do {
        *(undefined1 *)((longlong)param_2 + uVar8 + 0x214) =
             *(undefined1 *)((longlong)param_1 + uVar8 + 0x214);
        uVar3 = (ulonglong)*(byte *)((longlong)param_1 + uVar8 + 0x214);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *(undefined1 *)((longlong)param_2 + uVar3 * 8 + 0x14) = 0;
        *(undefined1 *)((longlong)param_2 + uVar3 * 8 + 0x15) =
             *(undefined1 *)((longlong)param_1 + uVar3 * 8 + 0x15);
        *(undefined1 *)((longlong)param_2 + uVar3 * 8 + 0x16) =
             *(undefined1 *)((longlong)param_1 + uVar3 * 8 + 0x16);
        *(char *)((longlong)param_2 + uVar3 * 8 + 0x17) = (char)iVar6;
        *(undefined1 *)(param_2 + uVar3 + 3) = *(undefined1 *)(param_1 + uVar3 + 3);
        *(undefined1 *)((longlong)param_2 + uVar3 * 8 + 0x19) =
             *(undefined1 *)((longlong)param_1 + uVar3 * 8 + 0x19);
        iVar6 = iVar6 + (uint)(*(byte *)((longlong)param_1 + uVar3 * 8 + 0x16) >> 2);
      } while (uVar7 < *(uint *)(param_1 + 1));
    }
    *(int *)((longlong)param_2 + 0xc) = iVar6 * 4;
  }
  return;
}

