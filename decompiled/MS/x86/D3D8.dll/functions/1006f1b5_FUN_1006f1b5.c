/*
 * FUN_1006f1b5 at 1006f1b5
 * undefined __thiscall FUN_1006f1b5(void * this, int param_1, int param_2)
 * Address ranges: 1006f1b5-1006f6e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006f1b5(void *this,int param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  void *extraout_ECX;
  void *pvVar9;
  int iVar10;
  void *extraout_EDX;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  void *pvVar17;
  void *pvVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float *pfVar27;
  byte bVar28;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  void *local_40;
  void *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  void *local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  char local_5;
  
  local_24 = 0;
  local_c = this;
  if (*(int *)((int)this + 0x24) != 0) {
    do {
      local_20 = 0;
      uVar11 = local_24;
      if (*(int *)((int)this + 0x20) != 0) {
        do {
          uVar4 = local_20;
          uVar3 = *(uint *)((int)this + 0x14) >> ((byte)local_20 & 0x1f);
          local_14 = 1;
          if (uVar3 != 0) {
            local_14 = uVar3;
          }
          uVar3 = *(uint *)((int)this + 0x18) >> ((byte)local_20 & 0x1f);
          local_10 = 1;
          if (uVar3 != 0) {
            local_10 = uVar3;
          }
          local_18 = *(void **)((int)this + 0x2c);
          local_1c = (int)local_18 * uVar11 + local_20;
          cVar2 = FUN_100306bf(*(int *)((int)this + 0x34));
          if (cVar2 == '\0') {
            iVar19 = *(int *)((int)extraout_EDX + 0x1c);
            pvVar9 = extraout_EDX;
            if (iVar19 == 0) {
              FUN_10068fb1(*(void **)((int)extraout_EDX + 0xe0),1,*(int *)((int)extraout_EDX + 8));
              local_18 = *(void **)((int)local_c + 0x2c);
              iVar19 = *(int *)((int)local_c + 0x1c);
              pvVar9 = local_c;
            }
            local_5 = *(char *)(*(int *)(*(int *)((int)pvVar9 + 0xe0) + 4) + 0x84);
            if (*(char *)((int)pvVar9 + 0x1bc) == '\0') {
              uVar4 = *(uint *)(&DAT_100b06b8 + iVar19 * 4);
            }
            else {
              uVar4 = 1;
            }
            uVar3 = 0;
            if (local_5 != '\0') {
              uVar3 = 0x1000;
            }
            fVar8 = (float)((uVar3 | uVar4 & 7 | 0xf8000000) << 4 |
                           *(uint *)(&DAT_100b0560 + iVar19 * 4) & 0xf);
            local_28 = *(int *)(param_2 + 0x10);
            if (local_28 == 0) {
              local_28 = *(int *)(param_2 + 0xc);
            }
            local_30 = *(float *)((int)pvVar9 + 0x1b8);
            local_18 = (void *)((int)local_18 * uVar11);
            bVar28 = 1;
            uVar11 = *(uint *)(param_2 + 0x1c);
            uVar20 = *(undefined4 *)(param_1 + 0xc);
            local_34 = *(float *)((int)pvVar9 + 0x1b4);
            pvVar17 = *(void **)(*(int *)((int)pvVar9 + 0x44) + 0x15dc);
            local_38 = *(float *)((int)pvVar9 + 0x1c);
            local_3c = *(void **)((int)pvVar9 + 0xe0);
            pfVar27 = (float *)0x0;
            uVar26 = 0;
            uVar25 = 0;
            uVar24 = *(undefined4 *)(param_2 + 0x34);
            piVar23 = (int *)&DAT_100b0400;
            puVar22 = (undefined4 *)&DAT_100b0400;
            local_2c = fVar8;
            piVar5 = FUN_10097b61(*(void **)(*(int *)((int)pvVar9 + 0x44) + 0x15d8),&local_44,
                                  *(uint *)(param_1 + 0x18),0);
            puVar21 = (undefined4 *)&DAT_100b0400;
            piVar6 = FUN_10097b61(pvVar17,&local_48,uVar11,local_1c);
            fVar12 = (float)(int)local_10;
            fVar13 = (float)(int)local_14;
            fVar7 = local_38;
            pvVar9 = local_3c;
            fVar14 = (float)((int)local_18 + local_20);
            fVar15 = local_34 * 0.0;
            fVar16 = local_30 * 0.0;
            pvVar17 = (void *)(local_34 * fVar13);
            pvVar18 = (void *)(local_30 * fVar12);
            iVar19 = local_28;
            iVar10 = 0;
LAB_1006f69e:
            uVar4 = local_20;
            uVar11 = local_24;
            FUN_1006937d(pvVar9,(int)fVar7,(uint)fVar7,local_20,fVar14,local_20,local_24,fVar14,
                         fVar15,fVar16,pvVar17,pvVar18,0,0,fVar13,fVar12,iVar19,0,uVar20,0,iVar10,
                         piVar6,puVar21,piVar5,puVar22,piVar23,uVar24,uVar25,uVar26,pfVar27,
                         (uint)fVar8,bVar28);
            this = local_c;
          }
          else {
            bVar28 = 1;
            uVar3 = 0xf;
            local_28 = *(int *)(param_2 + 0x10);
            if (local_28 == 0) {
              local_28 = *(int *)(param_2 + 0xc);
            }
            local_34 = *(float *)((int)extraout_EDX + 0x1b8) * 0.0;
            local_2c = (float)(*(int *)((int)extraout_EDX + 0x2c) * uVar11 + uVar4);
            uVar11 = *(uint *)(param_1 + 0x18);
            uVar20 = *(undefined4 *)(param_1 + 0xc);
            pvVar9 = *(void **)(*(int *)((int)extraout_EDX + 0x44) + 0x15d8);
            local_18 = *(void **)((int)extraout_EDX + 0x1c);
            local_3c = (void *)(*(float *)((int)extraout_EDX + 0x1b8) * (float)(int)local_10);
            local_40 = *(void **)((int)extraout_EDX + 0xe0);
            pfVar27 = (float *)0x0;
            uVar24 = *(undefined4 *)(param_2 + 0x34);
            local_30 = *(float *)((int)extraout_EDX + 0x1b4) * 0.0;
            uVar25 = 0;
            uVar26 = 0;
            local_38 = *(float *)((int)extraout_EDX + 0x1b4) * (float)(int)local_14;
            piVar5 = FUN_10097b61(*(void **)(*(int *)((int)extraout_EDX + 0x44) + 0x15e0),&local_4c,
                                  *(uint *)(param_2 + 0x20),local_1c);
            puVar21 = (undefined4 *)&DAT_100b0400;
            piVar6 = FUN_10097b61(pvVar9,&local_50,uVar11,0);
            uVar4 = local_20;
            uVar11 = local_24;
            FUN_1006937d(local_40,(int)local_18,(uint)local_18,local_20,local_2c,local_20,local_24,
                         local_2c,local_30,local_34,local_38,local_3c,0,0,(float)(int)local_14,
                         (float)(int)local_10,0,0,uVar20,0,local_28,(undefined4 *)&DAT_100b0400,
                         (undefined4 *)&DAT_100b0400,piVar6,puVar21,piVar5,uVar26,uVar25,uVar24,
                         pfVar27,uVar3,bVar28);
            local_40 = *(void **)((int)local_c + 0x40);
            iVar19 = *(int *)((int)local_c + 0x10);
            this = local_c;
            if ((&DAT_100b0728)[*(int *)((int)local_c + 0x1c)] != '\0') {
              iVar10 = FUN_1006f182((int)local_c);
              this = extraout_ECX;
              if (((&DAT_100b0728)[iVar10] != '\0') &&
                 (*(char *)((int)local_40 + 0x531 + iVar19 * 0x18) != '\0')) {
                local_30 = (float)((*(int *)((int)extraout_ECX + 0x24) + uVar11) *
                                   *(int *)((int)extraout_ECX + 0x2c) + uVar4);
                local_28 = *(int *)(param_2 + 0x10);
                if (local_28 == 0) {
                  local_28 = *(int *)(param_2 + 0xc);
                }
                bVar28 = 1;
                fVar8 = 4.76441e-44;
                uVar11 = *(uint *)(param_1 + 0x18);
                uVar20 = *(undefined4 *)(param_1 + 0xc);
                pvVar9 = *(void **)(*(int *)((int)extraout_ECX + 0x44) + 0x15d8);
                local_2c = *(float *)((int)extraout_ECX + 0x1c);
                local_40 = (void *)(*(float *)((int)extraout_ECX + 0x1b8) * (float)(int)local_10);
                local_18 = *(void **)((int)extraout_ECX + 0xe0);
                pfVar27 = (float *)0x0;
                uVar26 = *(undefined4 *)(param_2 + 0x34);
                local_3c = (void *)(*(float *)((int)extraout_ECX + 0x1b4) * (float)(int)local_14);
                uVar25 = 0;
                uVar24 = 0;
                local_38 = *(float *)((int)extraout_ECX + 0x1b8) * 0.0;
                local_34 = *(float *)((int)extraout_ECX + 0x1b4) * 0.0;
                piVar23 = FUN_10097b61(*(void **)(*(int *)((int)extraout_ECX + 0x44) + 0x15e0),
                                       &local_54,*(uint *)(param_2 + 0x20),local_1c);
                puVar22 = (undefined4 *)&DAT_100b0400;
                piVar5 = FUN_10097b61(pvVar9,&local_58,uVar11,1);
                puVar21 = (undefined4 *)&DAT_100b0400;
                piVar6 = (int *)&DAT_100b0400;
                fVar12 = (float)(int)local_10;
                iVar19 = 0;
                fVar13 = (float)(int)local_14;
                fVar7 = local_2c;
                pvVar9 = local_18;
                fVar14 = local_30;
                fVar15 = local_34;
                fVar16 = local_38;
                pvVar17 = local_3c;
                pvVar18 = local_40;
                iVar10 = local_28;
                goto LAB_1006f69e;
              }
            }
          }
          iVar10 = (local_1c >> 5) * 4;
          iVar19 = (int)(local_1c & 0x1f) >> 3;
          pbVar1 = (byte *)((int)this + iVar19 + iVar10 + 0x1c0);
          *pbVar1 = *pbVar1 & ~('\x01' << (local_1c & 7));
          pbVar1 = (byte *)((int)this + iVar19 + iVar10 + 0x1e4);
          *pbVar1 = *pbVar1 & ~('\x01' << (local_1c & 7));
          local_20 = uVar4 + 1;
        } while (local_20 < *(uint *)((int)this + 0x20));
      }
      local_24 = uVar11 + 1;
    } while (local_24 < *(uint *)((int)this + 0x24));
  }
  return;
}

