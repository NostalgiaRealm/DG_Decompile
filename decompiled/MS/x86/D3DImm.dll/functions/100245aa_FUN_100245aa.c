/*
 * FUN_100245aa at 100245aa
 * undefined __thiscall FUN_100245aa(void * this, int param_1, void * param_2, uint param_3, ushort * param_4, undefined4 param_5, uint param_6, byte param_7)
 * Address ranges: 100245aa-10024894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100245aa(void *this,int param_1,void *param_2,uint param_3,ushort *param_4,undefined4 param_5,
            uint param_6,byte param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  int local_10;
  int local_c;
  
  FUN_100209b0((int)this);
  if ((param_1 == 6) && (*(char *)(*(int *)((int)this + 0x1d58) + 0x13) == '\0')) {
    if (param_6 < 3) {
      return;
    }
    param_6 = param_6 - 2;
    param_1 = 0;
    if (param_6 != 0) {
      while( true ) {
        iVar16 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
        if (0x1000U - iVar16 < 0x10) {
          FUN_100218e0(this,0,1,0);
          iVar16 = 0;
        }
        uVar14 = (0x1000U - iVar16) / 3;
        uVar17 = param_6;
        if (uVar14 <= param_6) {
          uVar17 = uVar14;
        }
        FUN_100209f0(this,4,param_2,*(int *)((int)this + 0x201c),*(int *)((int)this + 0x1d6c),
                     *(int *)((int)this + 0x534),*(uint *)((int)this + 0x4f0),(void *)0x0,uVar17 * 3
                     ,param_7);
        param_3 = 0;
        *(byte *)((int)this + 0x1d3f) =
             *(byte *)((int)this + 0x1d3f) |
             (*(uint *)((int)this + 0x21c8) & *(uint *)((int)param_2 + 0x10)) !=
             *(uint *)((int)param_2 + 0x10);
        *(undefined4 *)((int)this + 0x21c8) = *(undefined4 *)((int)param_2 + 0x10);
        *(undefined1 *)((int)this + 0x21cc) = 1;
        if (uVar17 != 0) {
          do {
            uVar4 = param_4[param_1 + param_3 + 2];
            uVar5 = *param_4;
            **(uint **)((int)this + 100) = (uint)param_4[param_1 + param_3 + 1];
            *(uint *)(*(int *)((int)this + 100) + 4) = (uint)uVar4;
            *(uint *)(*(int *)((int)this + 100) + 8) = (uint)uVar5;
            *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
            param_3 = param_3 + 1;
          } while (param_3 < uVar17);
        }
        param_1 = param_1 + uVar17;
        *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar17 * 3;
        param_6 = param_6 - uVar17;
        if (param_6 == 0) break;
        FUN_10021d20(this,(uint)param_2);
        *(undefined4 *)((int)this + 0x70) = param_5;
      }
      *(undefined4 *)((int)this + 0x70) = param_5;
    }
  }
  else {
    iVar16 = param_1 * 3;
    local_10 = 0;
    bVar1 = (&DAT_1005ed39)[iVar16];
    bVar2 = (&DAT_1005ed38)[iVar16];
    bVar3 = (&DAT_1005ed3a)[iVar16];
    for (; bVar2 <= param_6; param_6 = param_6 + (bVar3 - uVar17)) {
      local_c = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (0x1000U - local_c < 0x10) {
        FUN_100218e0(this,0,1,0);
        local_c = 0;
      }
      uVar14 = (0x1000 - (0x1000U - local_c) % (uint)bVar1) - local_c;
      uVar17 = param_6;
      if (uVar14 <= param_6) {
        uVar17 = uVar14;
      }
      FUN_100209f0(this,param_1,param_2,param_3,*(int *)((int)this + 0x1d6c),0,
                   *(uint *)((int)param_2 + 0xc),(void *)0x0,uVar17,param_7);
      puVar15 = param_4 + local_10;
      pauVar18 = *(undefined1 (**) [16])((int)this + 100);
      for (uVar14 = uVar17 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        uVar4 = *puVar15;
        puVar8 = puVar15 + 1;
        puVar9 = puVar15 + 2;
        puVar10 = puVar15 + 3;
        uVar5 = puVar15[4];
        uVar11 = puVar15[5];
        uVar12 = puVar15[6];
        uVar13 = puVar15[7];
        puVar15 = puVar15 + 8;
        auVar6._2_2_ = 0;
        auVar6._0_2_ = uVar4;
        auVar6._4_2_ = *puVar8;
        auVar6._6_2_ = 0;
        auVar6._8_2_ = *puVar9;
        auVar6._10_2_ = 0;
        auVar6._12_2_ = *puVar10;
        auVar6._14_2_ = 0;
        *pauVar18 = auVar6;
        auVar7._2_2_ = 0;
        auVar7._0_2_ = uVar5;
        auVar7._4_2_ = uVar11;
        auVar7._6_2_ = 0;
        auVar7._8_2_ = uVar12;
        auVar7._10_2_ = 0;
        auVar7._12_2_ = uVar13;
        auVar7._14_2_ = 0;
        pauVar18[1] = auVar7;
        pauVar18 = pauVar18 + 2;
      }
      for (uVar14 = uVar17 & 7; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(uint *)*pauVar18 = (uint)*puVar15;
        pauVar18 = (undefined1 (*) [16])(*pauVar18 + 4);
        puVar15 = puVar15 + 1;
      }
      if (param_1 == 6) {
        **(uint **)((int)this + 100) = (uint)*param_4;
      }
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar17;
      local_10 = local_10 + (uVar17 - bVar3);
      *(uint *)((int)this + 100) = *(int *)((int)this + 100) + uVar17 * 4;
      *(byte *)((int)this + 0x1d3f) =
           *(byte *)((int)this + 0x1d3f) |
           (*(uint *)((int)this + 0x21c8) & *(uint *)((int)param_2 + 0x10)) !=
           *(uint *)((int)param_2 + 0x10);
      *(undefined4 *)((int)this + 0x21c8) = *(undefined4 *)((int)param_2 + 0x10);
      *(undefined1 *)((int)this + 0x21cc) = 1;
      FUN_10021d20(this,(uint)param_2);
      *(undefined4 *)((int)this + 0x70) = param_5;
    }
  }
  FUN_100218e0(this,0,0,0);
  *(undefined4 *)((int)this + 0x70) = 0;
  return;
}

