/*
 * FUN_10051fa0 at 10051fa0
 * undefined FUN_10051fa0(void)
 * Address ranges: 10051fa0-100521ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10051fa0(int param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 uStack_3a;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0xd9b4);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  cVar5 = *(char *)(param_3 + 0x443);
  uVar6 = *(undefined1 *)(param_1 + 0x86);
  puVar7 = (undefined4 *)FUN_100febf0(0x3c);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[3] = 0;
    puVar7[8] = param_2;
    puVar7[4] = &PTR_FUN_10129924;
    *(ulonglong *)(puVar7 + 9) = CONCAT26(uStack_3a,CONCAT15(uVar6,CONCAT14(cVar5 != '\0',uVar4)));
    *puVar7 = &PTR_FUN_10129848;
    puVar7[6] = &PTR_FUN_10129844;
    *(undefined8 *)(puVar7 + 0xb) = 0;
    puVar7[0xd] = &PTR_FUN_10129924;
    puVar7[7] = param_3;
    puVar7[1] = uVar3;
    puVar7[2] = uVar2;
    if (param_4 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_100febf0(0xc0);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
        uVar12 = *param_4;
        uVar11 = param_4[3];
        uVar10 = param_4[2];
        puVar8[3] = param_4[1];
        puVar8[2] = uVar12;
        puVar8[5] = uVar11;
        puVar8[4] = uVar10;
        uVar12 = param_4[4];
        uVar11 = param_4[7];
        uVar10 = param_4[6];
        puVar8[7] = param_4[5];
        puVar8[6] = uVar12;
        puVar8[9] = uVar11;
        puVar8[8] = uVar10;
        uVar12 = param_4[8];
        uVar11 = param_4[0xb];
        uVar10 = param_4[10];
        puVar8[0xb] = param_4[9];
        puVar8[10] = uVar12;
        puVar8[0xd] = uVar11;
        puVar8[0xc] = uVar10;
        uVar12 = param_4[0xc];
        uVar11 = param_4[0xf];
        uVar10 = param_4[0xe];
        puVar8[0xf] = param_4[0xd];
        puVar8[0xe] = uVar12;
        puVar8[0x11] = uVar11;
        puVar8[0x10] = uVar10;
        uVar12 = param_4[0x10];
        uVar11 = param_4[0x13];
        uVar10 = param_4[0x12];
        puVar8[0x13] = param_4[0x11];
        puVar8[0x12] = uVar12;
        puVar8[0x15] = uVar11;
        puVar8[0x14] = uVar10;
        uVar10 = param_4[0x14];
        puVar8[0x17] = param_4[0x15];
        puVar8[0x16] = uVar10;
      }
      puVar7[3] = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        iVar9 = FUN_1005d9f8(puVar7,param_4);
        puVar7[0xb] = iVar9;
        if (iVar9 != 0) {
          iVar9 = FUN_1005d9f8(puVar7,param_4 + 0x16);
          puVar7[0xc] = iVar9;
          if (iVar9 != 0) goto LAB_1005218c;
        }
        puVar8 = (undefined8 *)puVar7[3];
        if (puVar8 != (undefined8 *)0x0) {
          FUN_100fed00(*(undefined4 *)puVar8);
          *puVar8 = 0;
          *(undefined4 *)((int)puVar8 + 0xc) = 0;
          *(undefined4 *)(puVar8 + 1) = 0;
          FUN_100fec90(puVar8,0xc0);
        }
      }
    }
    FUN_1005db80(puVar7);
    FUN_100fec90(puVar7,0x3c);
  }
  puVar7 = (undefined4 *)0x0;
LAB_1005218c:
  puVar1 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = puVar7 + 6;
  }
  return puVar1;
}

