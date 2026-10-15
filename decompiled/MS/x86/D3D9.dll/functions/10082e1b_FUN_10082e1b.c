/*
 * FUN_10082e1b at 10082e1b
 * undefined __thiscall FUN_10082e1b(void * this, int param_1, uint param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 10082e1b-10083132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10082e1b(void *this,int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b4 [3];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  void *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  float *local_8;
  
  if ((1 < *(uint *)((int)this + 0x28)) && (param_2 != 0)) {
    local_14 = (**(code **)(*(int *)this + 0x20))(0);
    local_18 = (**(code **)(*(int *)this + 0x24))(0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x24) != 0) {
      do {
        if (((param_2 & 1 << ((byte)uVar6 & 0x1f)) != 0) &&
           (uVar5 = 1, 1 < *(uint *)((int)this + 0x28))) {
          do {
            bVar2 = (byte)uVar5;
            uVar3 = local_14 >> (bVar2 - 1 & 0x1f);
            local_c = 1;
            if (uVar3 != 0) {
              local_c = uVar3;
            }
            uVar3 = local_18 >> (bVar2 - 1 & 0x1f);
            local_10 = 1;
            if (uVar3 != 0) {
              local_10 = uVar3;
            }
            uVar3 = local_14 >> (bVar2 & 0x1f);
            local_30 = 1;
            if (uVar3 != 0) {
              local_30 = uVar3;
            }
            uVar3 = local_18 >> (bVar2 & 0x1f);
            local_34 = 1;
            if (uVar3 != 0) {
              local_34 = uVar3;
            }
            if (*(char *)((int)this + 0x3c) == '\0') {
              local_1c = 0.5;
            }
            else {
              local_1c = 1.0;
            }
            iVar4 = param_5;
            if (param_5 == 0) {
              iVar4 = *(int *)((int)this + 0x2c);
            }
            local_38 = iVar4 * uVar6 + uVar5;
            local_3c = local_38 + -1;
            FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&local_40,
                         *(uint *)(param_1 + 0x1c),local_38);
            uVar3 = param_3;
            if (param_3 == 0xffffffff) {
              uVar3 = *(uint *)(param_1 + 0x18);
            }
            FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_44,uVar3,param_4);
            cVar1 = *(char *)((int)this + 0x3c);
            iVar4 = 0;
            local_8 = (float *)CONCAT31(local_8._1_3_,cVar1);
            if (cVar1 != '\0') {
              iVar4 = 0x100;
            }
            local_24 = iVar4 << 8 | 0x80000016;
            local_28 = *(int *)((int)this + 0x1c);
            local_2c = *(void **)((int)this + 0xe0);
            fVar9 = (float)((double)(int)local_c + (double)(&DAT_100d97a0)[-((int)local_c >> 0x1f)])
            ;
            dVar8 = (double)(int)local_10;
            iVar4 = (int)local_10 >> 0x1f;
            fVar10 = local_1c / fVar9;
            local_10 = *(undefined4 *)(param_1 + 0xc);
            local_c = *(undefined4 *)(param_1 + 0x34);
            uVar3 = local_20 >> 8;
            local_20 = local_20 & 0xffffff00;
            fVar7 = (float)(dVar8 + (double)(&DAT_100d97a0)[-iVar4]);
            fVar9 = (fVar9 + local_1c) / fVar9;
            fVar11 = local_1c / fVar7;
            fVar7 = (fVar7 + local_1c) / fVar7;
            if ((((local_24 == 0x24) || (local_24 == 0x25)) || (local_24 == 0x26)) ||
               (local_24 == 0x27)) {
              local_20 = CONCAT31((int3)uVar3,1);
            }
            FUN_1008d81c(local_2c,local_28,0,0,0,0,cVar1,cVar1,0);
            local_78 = 0;
            local_68 = 0;
            local_5c = 0;
            local_50 = 0;
            local_4c = 0;
            local_70 = 0;
            local_60 = 0;
            local_58 = 0;
            local_b4[0] = 0.495;
            local_b4[1] = 0.495;
            local_b4[2] = (float)((double)(int)local_30 +
                                 (double)(&DAT_100d97a0)[-((int)local_30 >> 0x1f)]) + 0.495;
            local_90 = 0xffffffff;
            local_8c = local_38;
            local_88 = uVar5 - 1;
            local_80 = local_3c;
            local_7c = local_10;
            local_6c = local_10;
            local_54 = local_c;
            local_74 = local_40;
            local_64 = local_44;
            local_a8 = (float)((double)(int)local_34 +
                              (double)(&DAT_100d97a0)[-((int)local_34 >> 0x1f)]) + 0.495;
            local_a4 = fVar10;
            local_a0 = fVar11;
            local_9c = fVar9;
            local_98 = fVar7;
            local_94 = uVar5;
            local_84 = uVar6;
            FUN_1007cf8b(local_2c,local_b4,local_28,local_28,local_24,(char)local_20,local_8,
                         1.4013e-45);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)((int)this + 0x28));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((int)this + 0x24));
    }
  }
  return;
}

