/*
 * FUN_1006cc6f at 1006cc6f
 * undefined __thiscall FUN_1006cc6f(void * this, int param_1, uint param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 1006cc6f-1006cfe5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1006cc6f(void *this,int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  void *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float *unaff_EBX;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uStack_b4;
  char cStack_a8;
  int iStack_88;
  int iStack_84;
  float afStack_80 [3];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((1 < *(uint *)((int)this + 0x28)) && (param_2 != 0)) {
    (**(code **)(*(int *)this + 0x20))(0);
    uVar5 = (**(code **)(*(int *)this + 0x24))(0);
    uVar14 = 0;
    if (*(int *)((int)this + 0x24) != 0) {
      do {
        if (((param_2 & 1 << ((byte)uVar14 & 0x1f)) != 0) &&
           (uVar13 = 1, 1 < *(uint *)((int)this + 0x28))) {
          do {
            bVar4 = (byte)uVar13;
            uVar6 = uStack_b4 >> (bVar4 - 1 & 0x1f);
            uVar11 = 1;
            if (uVar6 != 0) {
              uVar11 = uVar6;
            }
            uVar7 = uVar5 >> (bVar4 - 1 & 0x1f);
            uVar6 = 1;
            if (uVar7 != 0) {
              uVar6 = uVar7;
            }
            uVar8 = uStack_b4 >> (bVar4 & 0x1f);
            uVar7 = 1;
            if (uVar8 != 0) {
              uVar7 = uVar8;
            }
            uVar9 = uVar5 >> (bVar4 & 0x1f);
            uVar8 = 1;
            if (uVar9 != 0) {
              uVar8 = uVar9;
            }
            if (*(char *)((int)this + 0x3c) == '\0') {
              fVar15 = 0.5;
            }
            else {
              fVar15 = 1.0;
            }
            iVar10 = param_5;
            if (param_5 == 0) {
              iVar10 = *(int *)((int)this + 0x2c);
            }
            iVar10 = iVar10 * uVar14 + uVar13;
            FUN_10097b61(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&iStack_88,
                         *(uint *)(param_1 + 0x1c),iVar10);
            uVar9 = param_3;
            if (param_3 == 0xffffffff) {
              uVar9 = *(uint *)(param_1 + 0x18);
            }
            FUN_10097b61(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&iStack_84,uVar9,param_4);
            cVar1 = *(char *)((int)this + 0x3c);
            iVar12 = 0;
            unaff_EBX = (float *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar1);
            if (cVar1 != '\0') {
              iVar12 = 0x100;
            }
            uVar9 = iVar12 << 8 | 0x80000016;
            iVar12 = *(int *)((int)this + 0x1c);
            this_00 = *(void **)((int)this + 0xe0);
            fVar17 = (float)((double)(int)uVar11 + (double)(&DAT_100b5ce0)[-((int)uVar11 >> 0x1f)]);
            fVar18 = fVar15 / fVar17;
            uVar2 = *(undefined4 *)(param_1 + 0xc);
            uVar3 = *(undefined4 *)(param_1 + 0x34);
            cStack_a8 = '\0';
            fVar16 = (float)((double)(int)uVar6 + (double)(&DAT_100b5ce0)[-((int)uVar6 >> 0x1f)]);
            fVar17 = (fVar17 + fVar15) / fVar17;
            fVar19 = fVar15 / fVar16;
            fVar16 = (fVar16 + fVar15) / fVar16;
            if ((((uVar9 == 0x24) || (uVar9 == 0x25)) || (uVar9 == 0x26)) || (uVar9 == 0x27)) {
              cStack_a8 = '\x01';
            }
            FUN_1007766c(this_00,iVar12,0,0,0,0,cVar1,cVar1,0);
            uStack_44 = 0;
            uStack_34 = 0;
            uStack_28 = 0;
            uStack_1c = 0;
            uStack_18 = 0;
            uStack_3c = 0;
            uStack_2c = 0;
            uStack_24 = 0;
            afStack_80[0] = 0.495;
            afStack_80[1] = 0.495;
            afStack_80[2] =
                 (float)((double)(int)uVar7 + (double)(&DAT_100b5ce0)[-((int)uVar7 >> 0x1f)]) +
                 0.495;
            uStack_5c = 0xffffffff;
            iStack_54 = uVar13 - 1;
            iStack_40 = iStack_88;
            iStack_30 = iStack_84;
            fStack_74 = (float)((double)(int)uVar8 + (double)(&DAT_100b5ce0)[-((int)uVar8 >> 0x1f)])
                        + 0.495;
            fStack_70 = fVar18;
            fStack_6c = fVar19;
            fStack_68 = fVar17;
            fStack_64 = fVar16;
            uStack_60 = uVar13;
            iStack_58 = iVar10;
            uStack_50 = uVar14;
            iStack_4c = iVar10 + -1;
            uStack_48 = uVar2;
            uStack_38 = uVar2;
            uStack_20 = uVar3;
            FUN_10067073(this_00,afStack_80,iVar12,iVar12,uVar9,cStack_a8,unaff_EBX,1.4013e-45);
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)((int)this + 0x28));
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)((int)this + 0x24));
    }
  }
  return;
}

