/*
 * FUN_10062c6f at 10062c6f
 * uint __thiscall FUN_10062c6f(void * this, int param_1, int param_2, uint param_3, int param_4)
 * Address ranges: 10062c6f-10062fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10062c6f(void *this,int param_1,int param_2,uint param_3,int param_4)

{
  double dVar1;
  double dVar2;
  undefined4 in_EAX;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  void *unaff_EDI;
  uint uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  uint uVar20;
  int *piVar21;
  void *local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  undefined4 uStack_8c;
  int local_80 [6];
  int aiStack_68 [4];
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  undefined1 local_34 [48];
  
  uVar15 = 1;
  if ((1 < *(uint *)((int)this + 0x28)) && (param_3 != 0)) {
    local_b8 = this;
    FUN_10061738(local_80,*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
    piVar21 = *(int **)(param_1 + 0xc);
    (**(code **)(*piVar21 + 0x28))(piVar21,local_34);
    if (param_2 == 0) {
      piVar3 = *(int **)(param_1 + 0x14);
    }
    else {
      piVar3 = *(int **)(param_2 + 0x14);
    }
    (**(code **)(*piVar3 + 0x20))(piVar3,aiStack_68);
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x18) + 0x20))
              ((int *)**(undefined4 **)(param_1 + 0x18),auStack_58);
    uVar4 = (**(code **)(*(int *)this + 0x20))(0);
    uVar5 = (**(code **)(*(int *)this + 0x24))(0);
    in_EAX = FUN_10061b08(uVar4,uVar5,1,1,1,uStack_44,local_80[0],aiStack_68[0],0,0,0x28,0,0,0,'\0',
                          '\0');
    if ((char)in_EAX == '\0') {
      uVar15 = 0;
    }
    else {
      uVar16 = 0;
      if (*(int *)((int)this + 0x24) != 0) {
        do {
          if (((param_3 & 1 << ((byte)uVar16 & 0x1f)) != 0) &&
             (uVar20 = 1, 1 < *(uint *)((int)this + 0x28))) {
            iVar6 = uVar16 * param_4;
            iVar7 = iVar6 * 0x1c;
            dVar17 = (double)(int)uVar5;
            dVar1 = (double)(&DAT_100b5ce0)[-((int)uVar5 >> 0x1f)];
            dVar18 = (double)(int)piVar21;
            dVar2 = (double)(&DAT_100b5ce0)[-((int)piVar21 >> 0x1f)];
            do {
              bVar12 = (char)uVar20 - 1;
              uStack_a4 = 1;
              uVar8 = (uint)piVar21 >> (bVar12 & 0x1f);
              uVar13 = uVar15;
              if (uVar8 != 0) {
                uVar13 = uVar8;
              }
              uVar9 = uVar5 >> (bVar12 & 0x1f);
              iVar14 = *(int *)((int)this + 0xb8);
              uVar8 = uVar15;
              if (uVar9 != 0) {
                uVar8 = uVar9;
              }
              local_b8 = (void *)0x0;
              uStack_b4 = 0;
              uStack_b0 = 0;
              if (iVar14 == 0) {
                iVar14 = *(int *)((int)this + 0x54);
              }
              piVar3 = *(int **)(*(int *)((int)this + 0x44) + 4);
              uStack_ac = uVar13;
              uStack_a8 = uVar8;
              (**(code **)(*piVar3 + 0xb8))
                        (piVar3,uStack_94,0,0,0,0,iVar14,uVar20 + iVar6 + -1,&local_b8);
              uVar10 = (uint)piVar21 >> ((byte)uVar20 & 0x1f);
              uVar9 = uVar15;
              if (uVar10 != 0) {
                uVar9 = uVar10;
              }
              uVar11 = uVar5 >> ((byte)uVar20 & 0x1f);
              uVar10 = uVar15;
              if (uVar11 != 0) {
                uVar10 = uVar11;
              }
              if (*(char *)((int)unaff_EDI + 0x3c) == '\0') {
                fVar19 = 0.5;
              }
              else {
                fVar19 = 1.0;
              }
              FUN_1006118c(*(void **)((int)unaff_EDI + 0xa8),*(int *)((int)unaff_EDI + 0x1c),
                           *(uint *)((int)unaff_EDI + 0x1c),uVar20,uVar16,0,0,0.495,0x3efd70a4,
                           (float)((double)(int)uVar9 +
                                  (double)(&DAT_100b5ce0)[-((int)uVar9 >> 0x1f)]) + 0.495,
                           (float)((double)(int)uVar10 +
                                  (double)(&DAT_100b5ce0)[-((int)uVar10 >> 0x1f)]) + 0.495,
                           fVar19 / (float)(dVar18 + dVar2),fVar19 / (float)(dVar17 + dVar1),
                           ((float)((double)(int)uVar13 +
                                   (double)(&DAT_100b5ce0)[-((int)uVar13 >> 0x1f)]) + fVar19) /
                           (float)(dVar18 + dVar2),
                           ((float)((double)(int)uVar8 +
                                   (double)(&DAT_100b5ce0)[-((int)uVar8 >> 0x1f)]) + fVar19) /
                           (float)(dVar17 + dVar1),*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + uVar20 * 0x1c + iVar7),0,
                           uStack_94,uStack_8c,0,0,0,*(char *)((int)unaff_EDI + 0x3c),0x80000016,0);
              uVar20 = uVar20 + 1;
              this = unaff_EDI;
            } while (uVar20 < *(uint *)((int)unaff_EDI + 0x28));
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)((int)this + 0x24));
      }
      in_EAX = FUN_10061cbb(auStack_a0,1,1);
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)uVar15);
}

