/*
 * FUN_1002fbe1 at 1002fbe1
 * undefined1 __thiscall FUN_1002fbe1(void * this, undefined4 param_1, uint param_2, byte param_3, char param_4, byte param_5, byte param_6)
 * Address ranges: 1002fbe1-10030237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1002fbe1(void *this,undefined4 param_1,uint param_2,byte param_3,char param_4,byte param_5,
            byte param_6)

{
  void *pvVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 uVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  void *pvVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  uint local_d4 [6];
  undefined4 local_bc;
  uint local_6c;
  uint local_68;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  byte local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  void *local_14;
  byte local_d;
  uint local_c;
  byte local_5;
  
  uVar9 = 0;
  iVar4 = *(int *)((int)this + 4);
  local_2c = 0;
  puVar11 = (uint *)((int)this + 0x150);
  puVar15 = local_d4;
  for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar15 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar15 = puVar15 + 1;
  }
  local_28 = *(int **)(iVar4 + 0x4c);
  local_5 = 0;
  local_34 = *(undefined4 *)(iVar4 + 0x70);
  local_14 = this;
  bVar16 = param_2 == 0;
  if (param_2 != 0) {
    local_24 = local_d4[3];
    local_20 = local_d4[2];
    local_c = local_6c;
    uVar14 = local_6c;
    do {
      pvVar1 = local_14;
      local_d = local_5;
      if ((uVar14 & 0x1000) == 0) {
        uVar14 = uVar14 & 0xffff7dc3;
        if (uVar9 == 0) {
          local_5 = 1;
          local_c = uVar14 | 0x8238;
          local_6c = uVar14 | 0x8238;
          goto LAB_1002fe01;
        }
        if (uVar9 == 1) {
          local_d4[1] = local_d4[1] & 0xffffffdf;
          uVar14 = uVar14 | 0x14;
          local_6c = uVar14;
          local_c = uVar14;
        }
        else {
          local_d4[1] = local_d4[1] & 0xffffffdf;
          uVar14 = uVar14 | 0x10;
          local_c = uVar14;
          local_6c = uVar14;
          if (uVar9 == 0) goto LAB_1002fe01;
        }
LAB_1002fcfc:
        local_1c = -(uint)((uVar14 & 0x1000) != 0) & local_2c;
        if (local_1c == 0) {
          local_18 = (int *)0x0;
        }
        else {
          local_18 = *(int **)(*(int *)((int)pvVar1 + 4) + 0x50);
        }
        puVar3 = FUN_100226a2(*(undefined4 *)((int)this + 0x100),*(undefined4 *)((int)this + 0xf8),
                              (undefined4 *)0x0,local_28,*(int *)((int)this + 0xfc),local_18,
                              (undefined2 *)
                              (&DAT_1006c42c + *(int *)(*(int *)((int)this + 0xfc) + 0x11c) * 0x228)
                              ,local_d4,*(undefined4 *)((int)pvVar1 + 0x1cc),local_1c,local_34,
                              *(int *)((int)this + 0x1d4) + local_2c,
                              *(undefined1 *)(*(int *)((int)pvVar1 + 4) + 0x48),
                              *(byte *)(*(int *)((int)pvVar1 + 4) + 200) & 1);
        local_18 = (int *)((int)pvVar1 + 0x110);
        *local_18 = (int)puVar3;
        pvVar13 = local_14;
        if (puVar3 == (undefined4 *)0x0) goto LAB_10030229;
        cVar2 = FUN_1002a193(puVar3,param_1);
        if (cVar2 == '\0') {
LAB_100301d1:
          piVar6 = local_18;
          puVar3 = (undefined4 *)*local_18;
          if (puVar3 != (undefined4 *)0x0) {
            FUN_10029e6d(puVar3);
            FUN_10060be1(puVar3);
          }
          *piVar6 = 0;
          pvVar13 = local_14;
          goto LAB_10030229;
        }
        iVar4 = (**(code **)(*(int *)*local_18 + 0x34))(param_1,(int)pvVar1 + 0x114,0);
        if (iVar4 < 0) {
          FUN_1002a1c6((void *)*local_18);
          goto LAB_100301d1;
        }
        *(void **)(*local_18 + 0x10c) = pvVar1;
        *(undefined1 *)(*local_18 + 0x32) = 1;
        local_14 = (void *)*local_18;
        local_5 = local_d;
        puVar11 = (uint *)(*local_18 + 0x1b8);
        *puVar11 = *puVar11 | 8;
      }
      else {
        if (uVar9 != 0) {
          uVar14 = uVar14 & 0xfffdfff7;
          local_d4[3] = 1;
          if (local_24 >> 1 != 0) {
            local_d4[3] = local_24 >> 1;
          }
          local_bc = 0;
          local_d4[2] = 1;
          if (local_20 >> 1 != 0) {
            local_d4[2] = local_20 >> 1;
          }
          local_6c = uVar14;
          local_24 = local_d4[3];
          local_20 = local_d4[2];
          local_c = uVar14;
          if (((*(uint *)((int)this + 0x1bc) & 0x200) != 0) ||
             (cVar2 = (**(code **)(**(int **)((int)this + 0xfc) + 0x30))(), cVar2 == '\0')) {
            local_68 = local_68 | 0x10000;
          }
          goto LAB_1002fcfc;
        }
LAB_1002fe01:
        iVar4 = *(int *)((int)this + 4);
        puVar11 = local_d4;
        puVar15 = (uint *)((int)this + 0x150);
        for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar15 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar15 = puVar15 + 1;
        }
        uVar9 = *(uint *)(iVar4 + 200);
        *(uint *)(iVar4 + 200) = ((uint)local_5 * 2 ^ uVar9) & 2 ^ uVar9;
        local_18 = (int *)FUN_10031f92((int)this);
        if (*(int *)(*(int *)((int)this + 4) + 0x50) == 0) {
          FUN_100253c5(*(void **)((int)this + 0xfc),&local_54);
          uVar9 = local_24;
          if (((*(uint *)((int)this + 0x1b8) & 0x200) == 0) ||
             ((local_54 == local_50 && (local_4c == local_48)))) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
          uVar14 = (uint)param_3 | (uint)param_5 * 2 | (uint)param_6 << 2;
          local_30 = CONCAT31(local_30._1_3_,cVar2);
          if (((*(uint *)((int)this + 0x1b8) & 0x2001) == 0) && (cVar2 == '\0')) {
            if (param_6 != 0) {
              FUN_10004dc3(local_24,local_20);
            }
            uVar5 = FUN_100321a7((int)this + 0x150);
            piVar6 = (int *)(**(code **)(*local_28 + 0x2c))
                                      (uVar9,local_20,*(undefined4 *)((int)this + 0x1cc),
                                       extraout_EDX,uVar5,uVar14);
          }
          else {
            piVar6 = &local_54;
            uVar5 = local_30;
            iVar4 = FUN_100321a7((int)this + 0x150);
            uVar10 = local_24;
            FUN_100314b0(this,&local_44,local_24,local_20,iVar4,piVar6,(char)uVar5);
            uVar9 = *(uint *)(*(int *)((int)this + 4) + 200);
            *(uint *)(*(int *)((int)this + 4) + 200) = (local_38 ^ uVar9) & 1 ^ uVar9;
            if (param_6 != 0) {
              FUN_10004dc3(local_44,local_40);
            }
            uVar5 = FUN_100321a7((int)this + 0x150);
            piVar6 = (int *)(**(code **)(*local_28 + 0x28))
                                      (local_44,local_40,uVar10,local_20,local_3c,
                                       *(undefined4 *)((int)this + 0x1cc),extraout_EDX_00,uVar5,
                                       uVar14);
            if (((char)local_30 != '\0') && (piVar6 != (int *)0x0)) {
              (**(code **)(*piVar6 + 0x44))();
            }
          }
          *(int **)(*(int *)((int)this + 4) + 0x50) = piVar6;
        }
        pvVar1 = *(void **)((int)this + 4);
        pvVar13 = local_14;
        if (*(int *)((int)pvVar1 + 0x50) == 0) goto LAB_10030229;
        if (*(int *)((int)pvVar1 + 0xcc) == 0) {
          if ((param_3 == 0) || (local_1c = 4, param_4 != '\0')) {
            local_1c = 1;
          }
          uVar9 = FUN_10031403((int)this + 0x150);
          FUN_100313c3(extraout_ECX);
          iVar4 = FUN_1003137a(extraout_ECX_00);
          FUN_10004dd8(pvVar1,*(int *)((int)this + 0x15c),*(uint *)((int)this + 0x158),
                       extraout_ECX_01,*(uint *)((int)this + 0x1a4),iVar4,extraout_EDX_01,uVar9,
                       extraout_ECX_01,local_1c);
          *(undefined1 *)((int)pvVar1 + 0x1f) = 0;
        }
        local_1c = *(uint *)((int)this + 0x1bc) >> 9 & 0xffffff01;
        FUN_1002fb13(this,'\0');
        piVar6 = local_18;
        uVar14 = local_c;
        if ((*(uint *)((int)this + 0x154) >> 0xb & 1) == 0) {
          if ((char)local_1c == '\0') {
            if (((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) &&
               (piVar12 = (int *)0x0, local_18 != (int *)0x0)) {
              do {
                uVar14 = *(uint *)((int)this + 0x158) >> ((byte)piVar12 & 0x1f);
                uVar10 = *(uint *)((int)this + 0x15c) >> ((byte)piVar12 & 0x1f);
                uVar9 = 1;
                if (uVar14 != 0) {
                  uVar9 = uVar14;
                }
                uVar14 = 1;
                if (uVar10 != 0) {
                  uVar14 = uVar10;
                }
                (**(code **)(*local_28 + 0x80))
                          (piVar12,local_34,*(undefined4 *)(*(int *)((int)this + 4) + 0x50),0,0,0,
                           (float)((double)(int)uVar14 +
                                  (double)(&DAT_10066fd0)[-((int)uVar14 >> 0x1f)]),
                           (float)((double)(int)uVar9 +
                                  (double)(&DAT_10066fd0)[-((int)uVar9 >> 0x1f)]));
                piVar12 = (int *)((int)piVar12 + 1);
                uVar14 = local_c;
              } while (piVar12 < piVar6);
            }
          }
          else {
LAB_100300e4:
            if ((((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) &&
                ((*(uint *)((int)this + 0x1bc) & 0xfc00) == 0)) &&
               (piVar12 = (int *)0x0, local_18 != (int *)0x0)) {
              do {
                uVar14 = *(uint *)((int)this + 0x158) >> ((byte)piVar12 & 0x1f);
                uVar10 = *(uint *)((int)this + 0x15c) >> ((byte)piVar12 & 0x1f);
                uVar9 = 1;
                if (uVar14 != 0) {
                  uVar9 = uVar14;
                }
                uVar14 = 1;
                if (uVar10 != 0) {
                  uVar14 = uVar10;
                }
                (**(code **)(*local_28 + 0x80))
                          (piVar12,local_34,*(undefined4 *)(*(int *)((int)this + 4) + 0x50),
                           *(undefined4 *)((int)this + 0x178),0,0,
                           (float)((double)(int)uVar14 +
                                  (double)(&DAT_10066fd0)[-((int)uVar14 >> 0x1f)]),
                           (float)((double)(int)uVar9 +
                                  (double)(&DAT_10066fd0)[-((int)uVar9 >> 0x1f)]));
                piVar12 = (int *)((int)piVar12 + 1);
                uVar14 = local_c;
              } while (piVar12 < piVar6);
            }
          }
        }
        else if ((char)local_1c != '\0') goto LAB_100300e4;
      }
      uVar9 = local_2c + 1;
      local_2c = uVar9;
    } while (uVar9 < param_2);
    bVar16 = uVar9 == param_2;
  }
  uVar7 = 1;
  pvVar13 = local_14;
  if (!bVar16) {
LAB_10030229:
    for (; pvVar13 != (void *)0x0; pvVar13 = *(void **)((int)pvVar13 + 0x10c)) {
      if (*(void **)((int)pvVar13 + 0x110) != (void *)0x0) {
        FUN_1002a1c6(*(void **)((int)pvVar13 + 0x110));
        puVar3 = *(undefined4 **)((int)pvVar13 + 0x110);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_10029e6d(puVar3);
          FUN_10060be1(puVar3);
        }
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}

