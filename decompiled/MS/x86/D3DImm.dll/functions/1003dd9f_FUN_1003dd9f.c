/*
 * FUN_1003dd9f at 1003dd9f
 * undefined __fastcall FUN_1003dd9f(undefined4 * param_1)
 * Address ranges: 1003dd9f-1003e159
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003dd9f(undefined4 *param_1)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  undefined4 auStack_14c [7];
  undefined4 uStack_130;
  int iStack_12c;
  byte local_118;
  uint uStack_114;
  undefined4 *local_110;
  undefined4 *puStack_10c;
  undefined4 *puStack_108;
  int iStack_104;
  float local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  float afStack_90 [35];
  
  local_110 = param_1;
  if ((*(char *)(param_1 + 0x5d5) != '\0') ||
     (cVar1 = *(char *)(param_1[0x547] + 0xd2), *(undefined1 *)(param_1[0x547] + 0xd2) = 0,
     cVar1 != '\0')) {
    iVar3 = param_1[0x547];
    *(undefined1 *)(iVar3 + 0xd2) = 0;
    uVar9 = *(uint *)(*(int *)(param_1[6] + 4) + 100);
    if ((*(uint *)(iVar3 + 0xa8) < uVar9) &&
       ((((uint)(*(int *)(iVar3 + 0xb0) + *(int *)(iVar3 + 0xa8)) <= uVar9 &&
         (uVar9 = *(uint *)(*(int *)(param_1[6] + 4) + 0x68), *(uint *)(iVar3 + 0xac) < uVar9)) &&
        ((uint)(*(int *)(iVar3 + 0xb4) + *(int *)(iVar3 + 0xac)) <= uVar9)))) {
      puVar6 = (undefined4 *)(iVar3 + 0xa4);
      puVar7 = auStack_14c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      pfVar2 = FUN_1003e2c6(&local_100);
      pfVar8 = (float *)(local_110 + 0x259);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        pfVar8 = pfVar8 + 1;
      }
      *(undefined1 *)((int)local_110 + 0x905) = 0;
      *(undefined1 *)((int)local_110 + 0x907) = 0;
      *(undefined2 *)((int)local_110 + 0x90a) = 0;
      local_110[0xb] = *(undefined4 *)(iVar3 + 0xa8);
      local_110[0xc] = *(undefined4 *)(iVar3 + 0xac);
      local_110[0xd] = *(undefined4 *)(iVar3 + 0xb0);
      local_110[0xe] = *(undefined4 *)(iVar3 + 0xb4);
      local_110[0xf] = 0;
      local_110[0x10] = 0x3f800000;
      iVar5 = *(int *)local_110[5];
      iStack_12c = 0x1003deaf;
      FUN_10013790((void *)(local_110[0x273] + 0x40),(int *)&local_100,(int)(local_110 + 0x259));
      iStack_12c = 0x1003deb7;
      (**(code **)(iVar5 + 0x5c))();
      iStack_12c = iVar3 + 0xd0;
      uStack_130 = 0x1003dec7;
      (**(code **)(**(int **)(iVar3 + 0xb8) + 0x44))();
      *(undefined4 *)(iVar3 + 0x15bc) = *(undefined4 *)(iVar3 + 0x15c0);
      param_1 = (undefined4 *)(iVar3 + 0xa4);
    }
  }
  if (*(char *)(param_1 + 0x5d5) == '\0') {
    cVar1 = *(char *)(param_1[0x547] + 0xd3);
    *(undefined1 *)(param_1[0x547] + 0xd3) = 0;
    if (cVar1 == '\0') goto LAB_1003e14d;
    if (*(char *)(param_1 + 0x5d5) != '\0') goto LAB_1003df00;
  }
  else {
LAB_1003df00:
    FUN_100065bd((int)param_1);
  }
  iVar3 = param_1[0x547];
  uStack_114 = 0;
  if (*(int *)(iVar3 + 0x9c) != 0) {
    puStack_10c = param_1 + 0x53;
    puStack_108 = param_1 + 0x57;
    do {
      if (*(char *)(param_1 + 0x5d5) == '\0') {
        cVar1 = *(char *)(*(int *)(iVar3 + 0x98) + 4 + uStack_114 * 8);
        *(undefined1 *)(*(int *)(iVar3 + 0x98) + 4 + uStack_114 * 8) = 0;
        uVar9 = uStack_114;
        if (cVar1 != '\0') {
          iVar3 = param_1[0x547];
          goto LAB_1003df5b;
        }
      }
      else {
LAB_1003df5b:
        local_118 = 0;
        if ((*(char *)(*(int *)(iVar3 + 0x98) + 5 + uStack_114 * 8) != '\0') &&
           (iStack_104 = *(int *)(*(int *)(iVar3 + 0x8c) + 4 +
                                 *(int *)(*(int *)(iVar3 + 0x98) + uStack_114 * 8) * 8),
           iStack_104 != 0)) {
          local_100 = *(float *)(iStack_104 + 0x50);
          uStack_fc = *(undefined4 *)(iStack_104 + 0x54);
          uStack_f8 = *(undefined4 *)(iStack_104 + 0x58);
          uStack_f4 = *(undefined4 *)(iStack_104 + 0x5c);
          uStack_f0 = *(undefined4 *)(iStack_104 + 0x60);
          if ((*(byte *)(iStack_104 + 0x98) & 2) == 0) {
            uStack_ec = *(undefined4 *)(iStack_104 + 0x54);
            uStack_e8 = *(undefined4 *)(iStack_104 + 0x58);
            uStack_e4 = *(undefined4 *)(iStack_104 + 0x5c);
            uStack_e0 = *(undefined4 *)(iStack_104 + 0x60);
            if (*(char *)(iStack_104 + 0xa0) == '\0') {
              uStack_b0 = 0x3f800000;
            }
            else {
              uStack_b0 = *(undefined4 *)(iStack_104 + 0x80);
            }
          }
          else {
            uStack_e0 = 0;
            uStack_e4 = 0;
            uStack_e8 = 0;
            uStack_ec = 0;
            uStack_b0 = 0;
          }
          uStack_d0 = 0;
          uStack_d4 = 0;
          uStack_d8 = 0;
          uStack_dc = 0;
          uStack_cc = *(undefined4 *)(iStack_104 + 100);
          uStack_c8 = *(undefined4 *)(iStack_104 + 0x68);
          uStack_c4 = *(undefined4 *)(iStack_104 + 0x6c);
          uStack_c0 = *(undefined4 *)(iStack_104 + 0x70);
          uStack_bc = *(undefined4 *)(iStack_104 + 0x74);
          uStack_b8 = *(undefined4 *)(iStack_104 + 0x78);
          uStack_b4 = *(undefined4 *)(iStack_104 + 0x7c);
          uStack_ac = *(undefined4 *)(iStack_104 + 0x84);
          uStack_a8 = *(undefined4 *)(iStack_104 + 0x88);
          uStack_a4 = *(undefined4 *)(iStack_104 + 0x8c);
          uStack_a0 = *(undefined4 *)(iStack_104 + 0x90);
          uStack_9c = *(undefined4 *)(iStack_104 + 0x94);
          uStack_98 = *(char *)(iStack_104 + 0xa0) == '\0';
          iStack_12c = 0x1003e0a6;
          FUN_100082ab(puStack_10c,&uStack_114,&local_100);
          iStack_12c = 0x1003e0b8;
          pfVar2 = FUN_10008ec8(afStack_90,(int *)&local_100);
          iStack_12c = 0x1003e0c7;
          FUN_100081ef(puStack_108,&uStack_114,pfVar2);
          local_118 = (byte)*(undefined4 *)(iStack_104 + 0x98) & 1;
          param_1 = local_110;
        }
        uVar9 = uStack_114;
        uVar4 = FUN_100081c6(param_1 + 0x5e,(int *)&uStack_114);
        if (*(char *)(param_1 + 0x5d5) == '\0') {
          if (local_118 == 0) {
            if (uVar4 != 0xffffffff) {
              FUN_100066f5(param_1,uVar9);
            }
          }
          else {
            if (uVar4 == 0xffffffff) goto LAB_1003e112;
            iStack_12c = 0x1003e125;
            FUN_100067bc(param_1,uVar9,&local_100);
          }
        }
        else if (local_118 != 0) {
LAB_1003e112:
          FUN_10006691(param_1,uVar9);
        }
      }
      iVar3 = param_1[0x547];
      uStack_114 = uVar9 + 1;
    } while (uStack_114 < *(uint *)(iVar3 + 0x9c));
  }
LAB_1003e14d:
  *(undefined1 *)(param_1 + 0x5d5) = 0;
  return;
}

