/*
 * FUN_180009420 at 180009420
 * undefined __fastcall FUN_180009420(longlong param_1, undefined8 * param_2, longlong param_3)
 * Address ranges: 180009420-180009587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009420(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined1 local_188 [352];
  
  puVar3 = (undefined8 *)FUN_1800090e4(local_188,*(longlong *)(param_1 + 0x228) + 0x3270);
  lVar5 = 2;
  puVar2 = param_2;
  do {
    puVar7 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar4[1];
    *puVar7 = *puVar4;
    puVar7[1] = uVar1;
    uVar1 = puVar4[3];
    puVar7[2] = puVar4[2];
    puVar7[3] = uVar1;
    uVar1 = puVar4[5];
    puVar7[4] = puVar4[4];
    puVar7[5] = uVar1;
    uVar1 = puVar4[7];
    puVar7[6] = puVar4[6];
    puVar7[7] = uVar1;
    uVar1 = puVar4[9];
    puVar7[8] = puVar4[8];
    puVar7[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar7[10] = puVar4[10];
    puVar7[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar7[0xc] = puVar4[0xc];
    puVar7[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar7[0xe] = puVar4[0xe];
    puVar7[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar7 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar4[0x11];
  uVar6 = 1;
  puVar7[0x10] = puVar4[0x10];
  puVar7[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar7[0x12] = puVar4[0x12];
  puVar7[0x13] = uVar1;
  uVar1 = puVar4[0x15];
  puVar7[0x14] = puVar4[0x14];
  puVar7[0x15] = uVar1;
  uVar1 = puVar4[0x17];
  puVar7[0x16] = puVar4[0x16];
  puVar7[0x17] = uVar1;
  uVar1 = puVar4[0x19];
  puVar7[0x18] = puVar4[0x18];
  puVar7[0x19] = uVar1;
  uVar1 = puVar4[0x1b];
  puVar7[0x1a] = puVar4[0x1a];
  puVar7[0x1b] = uVar1;
LAB_1800094e6:
  do {
    if (*(int *)(param_3 + 0x38 + (ulonglong)uVar6 * 4) != 0) {
      puVar3 = param_2;
      FUN_180009180((longlong)param_2,*(longlong *)(param_1 + 0x228) + 0x3270,uVar6,
                    *(undefined4 *)(param_3 + (ulonglong)uVar6 * 4),'\x01');
      if (uVar6 == 5) {
        uVar8 = 0;
        FUN_180009180((longlong)puVar3,*(longlong *)(param_1 + 0x228) + 0x3270,3,0,'\0');
        FUN_180009180((longlong)puVar3,*(longlong *)(param_1 + 0x228) + 0x3270,4,uVar8,(char)uVar8);
        uVar6 = 6;
        goto LAB_1800094e6;
      }
      if (uVar6 - 3 < 2) {
        FUN_180009180((longlong)puVar3,*(longlong *)(param_1 + 0x228) + 0x3270,5,0,'\0');
      }
    }
    uVar6 = uVar6 + 1;
    if (0xd < uVar6) {
      return;
    }
  } while( true );
}

