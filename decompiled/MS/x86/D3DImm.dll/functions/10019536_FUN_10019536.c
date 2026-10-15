/*
 * FUN_10019536 at 10019536
 * undefined __thiscall FUN_10019536(void * this, int param_1, uint * param_2, int param_3, ushort * param_4, undefined4 param_5, uint param_6, byte param_7)
 * Address ranges: 10019536-100197ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10019536(void *this,int param_1,uint *param_2,int param_3,ushort *param_4,undefined4 param_5,
            uint param_6,byte param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  int local_8;
  
  if (*(int **)((int)this + 0x1e58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e58) + 4))
              (*(undefined4 *)((int)this + 0x1e6c),*(undefined4 *)((int)this + 0x1e7c),0);
  }
  if (*(int **)((int)this + 0x1e68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e68) + 4))
              (*(undefined4 *)((int)this + 0x1e8c),*(undefined4 *)((int)this + 0x1e90),0);
  }
  FUN_10017820(this,0,0,0);
  iVar6 = *(int *)(param_3 + 0xc);
  uVar19 = param_2[3];
  if (param_1 == 6) {
    if (2 < param_6) {
      param_3 = 0;
      for (uVar21 = param_6 - 2; uVar21 != 0; uVar21 = uVar21 - uVar18) {
        iVar17 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
        if (0x1000U - iVar17 < 0x10) {
          FUN_10017820(this,0,1,0);
          iVar17 = 0;
        }
        uVar15 = (0x1000U - iVar17) / 3;
        uVar18 = uVar21;
        if (uVar15 <= uVar21) {
          uVar18 = uVar15;
        }
        FUN_10017c50(this,4,param_2,iVar6,*(int *)((int)this + 0x1d70),0,uVar19,0,uVar18 * 3,param_7
                    );
        param_6 = 0;
        if (uVar18 != 0) {
          do {
            uVar4 = param_4[param_3 + param_6 + 2];
            uVar5 = *param_4;
            **(uint **)((int)this + 100) = (uint)param_4[param_3 + param_6 + 1];
            *(uint *)(*(int *)((int)this + 100) + 4) = (uint)uVar4;
            *(uint *)(*(int *)((int)this + 100) + 8) = (uint)uVar5;
            *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
            param_6 = param_6 + 1;
          } while (param_6 < uVar18);
        }
        *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar18 * 3;
        param_3 = param_3 + uVar18;
        *(undefined4 *)((int)this + 0x70) = param_5;
      }
      FUN_10017820(this,0,0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
    }
  }
  else {
    iVar17 = param_1 * 3;
    local_8 = 0;
    bVar1 = (&DAT_1005e9ac)[iVar17];
    bVar2 = (&DAT_1005e9ad)[iVar17];
    bVar3 = (&DAT_1005e9ae)[iVar17];
    for (; bVar1 <= param_6; param_6 = param_6 + (bVar3 - uVar19)) {
      iVar17 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (0x1000U - iVar17 < 0x10) {
        FUN_10017820(this,0,1,0);
        iVar17 = 0;
      }
      uVar21 = (0x1000 - (0x1000U - iVar17) % (uint)bVar2) - iVar17;
      uVar19 = param_6;
      if (uVar21 <= param_6) {
        uVar19 = uVar21;
      }
      FUN_10017c50(this,param_1,param_2,iVar6,*(int *)((int)this + 0x1d70),0,param_2[3],0,uVar19,
                   param_7);
      puVar16 = param_4 + local_8;
      pauVar20 = *(undefined1 (**) [16])((int)this + 100);
      for (uVar21 = uVar19 >> 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        uVar4 = *puVar16;
        puVar9 = puVar16 + 1;
        puVar10 = puVar16 + 2;
        puVar11 = puVar16 + 3;
        uVar5 = puVar16[4];
        uVar12 = puVar16[5];
        uVar13 = puVar16[6];
        uVar14 = puVar16[7];
        puVar16 = puVar16 + 8;
        auVar7._2_2_ = 0;
        auVar7._0_2_ = uVar4;
        auVar7._4_2_ = *puVar9;
        auVar7._6_2_ = 0;
        auVar7._8_2_ = *puVar10;
        auVar7._10_2_ = 0;
        auVar7._12_2_ = *puVar11;
        auVar7._14_2_ = 0;
        *pauVar20 = auVar7;
        auVar8._2_2_ = 0;
        auVar8._0_2_ = uVar5;
        auVar8._4_2_ = uVar12;
        auVar8._6_2_ = 0;
        auVar8._8_2_ = uVar13;
        auVar8._10_2_ = 0;
        auVar8._12_2_ = uVar14;
        auVar8._14_2_ = 0;
        pauVar20[1] = auVar8;
        pauVar20 = pauVar20 + 2;
      }
      for (uVar21 = uVar19 & 7; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(uint *)*pauVar20 = (uint)*puVar16;
        pauVar20 = (undefined1 (*) [16])(*pauVar20 + 4);
        puVar16 = puVar16 + 1;
      }
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar19;
      local_8 = local_8 + (uVar19 - bVar3);
      *(uint *)((int)this + 100) = *(int *)((int)this + 100) + uVar19 * 4;
      *(undefined4 *)((int)this + 0x70) = param_5;
    }
    FUN_10017820(this,0,0,0);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  return;
}

