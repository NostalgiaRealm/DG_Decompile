/*
 * FUN_180089afc at 180089afc
 * undefined __fastcall FUN_180089afc(longlong param_1, undefined8 * param_2)
 * Address ranges: 180089afc-180089d72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180089afc(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined *puVar8;
  float fVar9;
  uint uVar10;
  int local_a8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0) {
    fVar1 = *(float *)((longlong)param_2 + 0x2c);
    fVar2 = *(float *)(param_2 + 5);
    fVar9 = (float)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
    FUN_1800daf98(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                  *(uint *)(*(longlong *)(param_1 + 8) + 0x28),param_2[1],*(uint *)(param_2 + 3),
                  *(uint *)((longlong)param_2 + 0x1c),fVar2 * 0.0 + *(float *)(param_2 + 6),
                  fVar1 * 0.0 + *(float *)((longlong)param_2 + 0x34),
                  (float)*(uint *)(param_2 + 2) * fVar2 + *(float *)(param_2 + 6),
                  (float)*(uint *)((longlong)param_2 + 0x14) * fVar1 +
                  *(float *)((longlong)param_2 + 0x34),fVar2 * fVar9,fVar1 * fVar9);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x24) != '\0') {
    FUN_1800a9f2c(*(longlong **)(param_1 + 8),(undefined8 *)param_2[4]);
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d4f8) != 0) {
      uVar5 = FUN_1800aa004(*(longlong *)(param_1 + 8));
      if ((char)uVar5 != '\0') {
        FUN_1800dbbbc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x28),(int *)&DAT_180110c00,
                      (int *)0x0,-1,'\0');
        uVar5 = 0;
        FUN_1800dbc90(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x28),(int *)&DAT_180100350,
                      0);
        puVar8 = &DAT_180100328;
        FUN_1800dbe08(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x28),(uint *)&DAT_180100328
                     );
        uVar10 = 0x80102b10;
        FUN_1800dc0cc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x28),puVar8,uVar5,
                      (uint *)&DAT_180102b10);
        lVar4 = *(longlong *)(param_1 + 8);
        iVar7 = *(int *)(param_2[4] + 8);
        iVar3 = *(int *)(param_2[4] + 0xc);
        local_a8[0] = (iVar7 - *(int *)(lVar4 + 0xa0)) + -10;
        local_a8[1] = (iVar3 - *(int *)(lVar4 + 0xa4)) + -10;
        local_a8[2] = iVar7 + -10;
        local_a8[3] = iVar3 + -10;
        iVar7 = 0;
        do {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar7 + 4;
          *(float *)((longlong)&local_98 + lVar6) = (float)*(int *)((longlong)local_a8 + lVar6);
        } while (iVar7 != 0x10);
        local_58 = *param_2;
        local_50 = param_2[1];
        local_40 = *(undefined8 *)(lVar4 + 0x1d4f0);
        local_38 = *(undefined8 *)(lVar4 + 0x1d4f8);
        local_88 = local_98;
        uStack_80 = uStack_90;
        local_78 = 0x3f80000000000000;
        uStack_70 = 0x3f800000;
        local_68 = 0;
        local_60 = 0;
        local_48 = 0;
        local_30 = 0;
        local_28 = 0;
        uStack_20 = 0;
        FUN_180089dfc(lVar4,(undefined4 *)&local_88,*(longlong *)(lVar4 + 0x1d010),(int)lVar4,
                      uVar10 & 0xffffff00);
      }
    }
  }
  return;
}

