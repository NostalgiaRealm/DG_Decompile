/*
 * FUN_1008dee0 at 1008dee0
 * undefined FUN_1008dee0(void)
 * Address ranges: 1008dee0-1008e09f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008dee0(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (param_2 != 0) {
    pcVar1 = (char *)((int)param_1 + param_2 + 0x1b);
    if (*pcVar1 != '\0') {
      puVar3 = (undefined8 *)(param_1[6] + (param_2 + -1) * 0x120);
      uVar8 = 0;
      do {
        if (param_3 == *(int *)((int)puVar3 + uVar8 * 4 + 0x10)) {
          *(undefined4 *)((int)puVar3 + uVar8 * 4 + 0x10) = 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 4);
      uVar8 = 0;
      do {
        if (*(int *)((int)puVar3 + uVar8 * 4 + 0x10) != 0) {
          return;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 4);
      if (uVar8 == 4) {
        puVar2 = (uint *)(param_1 + 1);
        uVar8 = *puVar2;
        if (uVar8 != 0) {
          uVar6 = uVar8;
          do {
            uVar5 = uVar6 - 1;
            if (param_2 + -1 == *(int *)(*param_1 + -4 + uVar6 * 0x84)) {
              if (uVar5 < uVar8) {
                if (uVar6 < uVar8) {
                  do {
                    uVar8 = uVar6 + 1;
                    puVar4 = (undefined8 *)(*param_1 + uVar6 * 0x84);
                    *(undefined8 *)((int)puVar4 + -0x7c) = puVar4[1];
                    *(undefined8 *)((int)puVar4 + -0x84) = *puVar4;
                    *(undefined8 *)((int)puVar4 + -0x6c) = puVar4[3];
                    *(undefined8 *)((int)puVar4 + -0x74) = puVar4[2];
                    *(undefined8 *)((int)puVar4 + -0x5c) = puVar4[5];
                    *(undefined8 *)((int)puVar4 + -100) = puVar4[4];
                    *(undefined8 *)((int)puVar4 + -0x4c) = puVar4[7];
                    *(undefined8 *)((int)puVar4 + -0x54) = puVar4[6];
                    *(undefined8 *)((int)puVar4 + -0x3c) = puVar4[9];
                    *(undefined8 *)((int)puVar4 + -0x44) = puVar4[8];
                    *(undefined8 *)((int)puVar4 + -0x2c) = puVar4[0xb];
                    *(undefined8 *)((int)puVar4 + -0x34) = puVar4[10];
                    *(undefined8 *)((int)puVar4 + -0x1c) = puVar4[0xd];
                    *(undefined8 *)((int)puVar4 + -0x24) = puVar4[0xc];
                    *(undefined8 *)((int)puVar4 + -0xc) = puVar4[0xf];
                    *(undefined8 *)((int)puVar4 + -0x14) = puVar4[0xe];
                    *(undefined4 *)((int)puVar4 + -4) = *(undefined4 *)(puVar4 + 0x10);
                    uVar6 = uVar8;
                  } while (uVar8 < *puVar2);
                }
                *puVar2 = *puVar2 - 1;
              }
              break;
            }
            uVar6 = uVar5;
          } while (uVar5 != 0);
        }
        iVar7 = DAT_100bb02c;
        FUN_100917a0(*(undefined4 *)puVar3,(int)puVar3 + DAT_100bb02c + 0x20,
                     *(undefined4 *)(puVar3 + 1));
        if (*(int *)((int)puVar3 + 4) != 0) {
          FUN_100917a0(*(int *)((int)puVar3 + 4),(int)puVar3 + iVar7 + 0xa0,
                       *(undefined4 *)((int)puVar3 + 0xc));
        }
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[8] = 0;
        puVar3[0xb] = 0;
        puVar3[10] = 0;
        puVar3[0xd] = 0;
        puVar3[0xc] = 0;
        puVar3[0xf] = 0;
        puVar3[0xe] = 0;
        puVar3[0x11] = 0;
        puVar3[0x10] = 0;
        puVar3[0x13] = 0;
        puVar3[0x12] = 0;
        puVar3[0x15] = 0;
        puVar3[0x14] = 0;
        puVar3[0x17] = 0;
        puVar3[0x16] = 0;
        puVar3[0x19] = 0;
        puVar3[0x18] = 0;
        puVar3[0x1b] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x1d] = 0;
        puVar3[0x1c] = 0;
        puVar3[0x1f] = 0;
        puVar3[0x1e] = 0;
        puVar3[0x21] = 0;
        puVar3[0x20] = 0;
        puVar3[0x23] = 0;
        puVar3[0x22] = 0;
        *pcVar1 = '\0';
      }
    }
  }
  return;
}

