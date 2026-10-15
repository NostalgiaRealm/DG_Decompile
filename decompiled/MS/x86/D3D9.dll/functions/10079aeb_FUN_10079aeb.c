/*
 * FUN_10079aeb at 10079aeb
 * undefined __thiscall FUN_10079aeb(void * this, int param_1, int param_2)
 * Address ranges: 10079aeb-10079d6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10079aeb(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint extraout_EDX;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int local_18;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    do {
      uVar10 = 0;
      uVar7 = local_8;
      if (*(int *)((int)this + 0x20) != 0) {
        do {
          uVar5 = *(uint *)((int)this + 0x14) >> ((byte)uVar10 & 0x1f);
          uVar8 = 1;
          if (uVar5 != 0) {
            uVar8 = uVar5;
          }
          uVar6 = *(uint *)((int)this + 0x18) >> ((byte)uVar10 & 0x1f);
          uVar5 = 1;
          if (uVar6 != 0) {
            uVar5 = uVar6;
          }
          uVar6 = *(int *)((int)this + 0x2c) * uVar7 + uVar10;
          cVar4 = FUN_1003a4d0(*(int *)((int)this + 0x34));
          if (cVar4 == '\0') {
            iVar9 = *(int *)((int)this + 0x1c);
            if (iVar9 == 0) {
              FUN_10076c2b(*(void **)((int)this + 0xa8),1,*(int *)((int)this + 8));
              iVar9 = *(int *)((int)this + 0x1c);
            }
            if (*(char *)((int)this + 0x150) == '\0') {
              uVar7 = *(uint *)(&DAT_100d2940 + iVar9 * 4);
            }
            else {
              uVar7 = 1;
            }
            uVar7 = *(uint *)(&DAT_100d2730 + iVar9 * 4) & 0xf | (uVar7 & 7 | 0xf8000000) << 4;
            local_c = *(int *)(param_1 + 0x10);
            if (local_c == 0) {
              local_c = *(int *)(param_1 + 0xc);
            }
            uVar20 = 0;
            uVar19 = *(undefined4 *)(param_1 + 0x14);
            fVar1 = *(float *)((int)this + 0x14c);
            fVar2 = *(float *)((int)this + 0x148);
            uVar18 = *(undefined4 *)(*(int *)(param_2 + 0x18) + uVar6 * 0x1c);
            uVar14 = *(uint *)((int)this + 0x1c);
            uVar17 = *(undefined4 *)(param_2 + 0xc);
            fVar12 = fVar1 * (float)(int)uVar5;
            fVar13 = fVar2 * (float)(int)uVar8;
            uVar15 = uVar14;
            uVar16 = local_8;
            local_18 = local_c;
            local_c = 0;
LAB_10079d1d:
            FUN_10076efb(*(void **)((int)this + 0xa8),uVar14,uVar15,uVar10,uVar16,uVar10,uVar16,
                         fVar2 * 0.0,fVar1 * 0.0,fVar13,fVar12,0,0,(float)(int)uVar8,
                         (float)(int)uVar5,uVar17,uVar18,0,local_18,uVar19,0,local_c,uVar20,'\0',
                         uVar7,1);
            uVar7 = local_8;
          }
          else {
            uVar7 = extraout_EDX;
            if (*(int *)((int)this + 0xf4) != 0) {
              local_c = *(int *)(param_2 + 0x10);
              if (local_c == 0) {
                local_c = *(int *)(param_2 + 0xc);
              }
              uVar7 = 0xf;
              local_18 = *(int *)(param_1 + 0x10);
              if (local_18 == 0) {
                local_18 = *(int *)(param_1 + 0xc);
              }
              fVar1 = *(float *)((int)this + 0x14c);
              fVar2 = *(float *)((int)this + 0x148);
              uVar20 = *(undefined4 *)(*(int *)(param_2 + 0x18) + 4 + uVar6 * 0x1c);
              uVar19 = *(undefined4 *)(param_1 + 0x14);
              fVar12 = fVar1 * (float)(int)uVar5;
              fVar13 = fVar2 * (float)(int)uVar8;
              uVar18 = 0;
              uVar17 = 0;
              uVar15 = *(uint *)((int)this + 0x1c);
              uVar14 = *(uint *)((int)this + 0x1c);
              uVar16 = extraout_EDX;
              goto LAB_10079d1d;
            }
          }
          iVar11 = (uVar6 >> 5) * 4;
          iVar9 = (int)(uVar6 & 0x1f) >> 3;
          pbVar3 = (byte *)((int)this + iVar9 + iVar11 + 0x154);
          *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
          pbVar3 = (byte *)((int)this + iVar9 + iVar11 + 0x178);
          *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
          pbVar3 = (byte *)((int)this + iVar9 + iVar11 + 0x90);
          *pbVar3 = *pbVar3 | '\x01' << (uVar6 & 7);
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)((int)this + 0x20));
      }
      local_8 = uVar7 + 1;
    } while (local_8 < *(uint *)((int)this + 0x24));
  }
  return;
}

