/*
 * FUN_1000cda0 at 1000cda0
 * undefined FUN_1000cda0(void)
 * Address ranges: 1000cda0-1000cedb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cda0(int param_1,ulonglong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  ulonglong extraout_x14_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_100 [240];
  
  uVar5 = ZEXT48((int *)(param_1 + 0x1b0U));
  param_2 = param_2 & 0xffffffff;
  puVar2 = (undefined8 *)FUN_1000ca10(auStack_100,*(int *)(param_1 + 0x1b0U) + 0x3250);
  uVar6 = 1;
  uVar10 = *puVar2;
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  uVar7 = (ulonglong)(param_3 + 0x38);
  puVar1 = (undefined8 *)param_2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  uVar10 = puVar2[4];
  uVar9 = puVar2[7];
  uVar8 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar10;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  uVar10 = puVar2[8];
  uVar9 = puVar2[0xb];
  uVar8 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar10;
  puVar1[0xb] = uVar9;
  puVar1[10] = uVar8;
  uVar10 = puVar2[0xc];
  uVar9 = puVar2[0xf];
  uVar8 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar10;
  puVar1[0xf] = uVar9;
  puVar1[0xe] = uVar8;
  uVar10 = puVar2[0x10];
  uVar9 = puVar2[0x13];
  uVar8 = puVar2[0x12];
  puVar1[0x11] = puVar2[0x11];
  puVar1[0x10] = uVar10;
  puVar1[0x13] = uVar9;
  puVar1[0x12] = uVar8;
  uVar10 = puVar2[0x14];
  uVar9 = puVar2[0x17];
  uVar8 = puVar2[0x16];
  puVar1[0x15] = puVar2[0x15];
  puVar1[0x14] = uVar10;
  puVar1[0x17] = uVar9;
  puVar1[0x16] = uVar8;
  uVar10 = puVar2[0x18];
  uVar9 = puVar2[0x1b];
  uVar8 = puVar2[0x1a];
  puVar1[0x19] = puVar2[0x19];
  puVar1[0x18] = uVar10;
  puVar1[0x1b] = uVar9;
  puVar1[0x1a] = uVar8;
  puVar1[0x1c] = puVar2[0x1c];
  param_2 = param_2 & 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1d) = *(undefined4 *)(puVar2 + 0x1d);
LAB_1000ce24:
  do {
    if (*(int *)((int)uVar7 + uVar6 * 4) != 0) {
      param_2 = FUN_1000cad0(param_2 & 0xffffffff,*(int *)uVar5 + 0x3250,uVar6,
                             *(undefined4 *)(param_3 + uVar6 * 4),1);
      if (uVar6 == 5) {
        uVar4 = 0;
        uVar7 = 0;
        uVar3 = FUN_1000cad0(param_2 & 0xffffffff,*(int *)uVar5 + 0x3250,3,0,0);
        param_2 = FUN_1000cad0(uVar3,*(int *)uVar5 + 0x3250,4,uVar7 & 0xffffffff,uVar4 & 0xffffffff)
        ;
        uVar6 = uVar6 + 1;
        uVar7 = extraout_x14_00;
        goto LAB_1000ce24;
      }
      uVar7 = extraout_x14;
      if (uVar6 - 3 < 2) {
        param_2 = FUN_1000cad0(param_2 & 0xffffffff,*(int *)uVar5 + 0x3250,5,0,0);
        uVar7 = extraout_x14_01;
      }
    }
    uVar6 = uVar6 + 1;
    if (0xd < uVar6) {
      return;
    }
  } while( true );
}

