/*
 * FUN_1004eb48 at 1004eb48
 * undefined FUN_1004eb48(void)
 * Address ranges: 1004eb48-1004eda7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004eb48(int param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined8 extraout_x11;
  uint extraout_w12;
  ulonglong extraout_x13;
  longlong extraout_x14;
  undefined4 local_70 [4];
  undefined1 local_60 [16];
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  iVar9 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar9 == 0) {
    FUN_10001c10(0);
  }
  auVar8._8_8_ = local_60._8_8_;
  auVar8._0_8_ = local_60._0_8_;
  auVar7._8_8_ = local_60._8_8_;
  auVar7._0_8_ = local_60._0_8_;
  auVar6._8_8_ = local_60._8_8_;
  auVar6._0_8_ = local_60._0_8_;
  iVar9 = -0x7ff8ffa9;
  if ((((param_3 != 0) && (local_60 = auVar6, param_5 == 0)) &&
      (local_60 = auVar7, (param_4 & 0xffff87cc) == 0)) &&
     (local_60 = auVar8, (param_4 & 0x30) != 0x30)) {
    local_60._0_8_ = 0;
    *(undefined4 *)(param_3 + 0x24) = 0;
    local_60._12_4_ = *(uint *)(param_1 + 0x158);
    local_60._8_4_ = *(uint *)(param_1 + 0x15c);
    if (((param_2 != (int *)0x0) && (*param_2 != param_2[2])) && (param_2[1] != param_2[3])) {
      local_60._8_8_ = *(undefined8 *)(param_2 + 2);
      local_60._0_8_ = *(undefined8 *)param_2;
    }
    local_60 = FUN_10054830(param_1,local_60);
    FUN_1004c3a8(param_1 + 0x150);
    uVar10 = FUN_1004c408(extraout_x13 & 0xffffffff);
    uVar3 = *(uint *)(param_1 + 0x15c);
    uVar4 = *(uint *)(param_1 + 0x158);
    uVar2 = extraout_w12;
    if (uVar3 < extraout_w12) {
      uVar2 = uVar3;
    }
    if (uVar4 < uVar10) {
      uVar10 = uVar4;
    }
    if ((((int)extraout_x14 < (int)extraout_x11) &&
        (iVar11 = (int)((ulonglong)extraout_x11 >> 0x20),
        (int)((ulonglong)extraout_x14 >> 0x20) < iVar11)) &&
       (((-1 < (int)extraout_x14 &&
         ((((int)extraout_x11 <= (int)uVar3 && (-1 < extraout_x14)) && (iVar11 <= (int)uVar4)))) &&
        (((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0 ||
         (uVar12 = FUN_1004d5d0(local_60,uVar2,uVar10), (uVar12 & 1) != 0)))))) {
      local_50 = 0;
      local_48 = uVar3;
      uStack_44 = uVar4;
      iVar11 = (*(code *)PTR_FUN_100ba1d8)(&local_50,local_60);
      iVar9 = -0x7fffbfff;
      if ((param_4 >> 1 & 1) == 0) {
        local_70[0] = 0;
        iVar9 = FUN_1004d890(param_1,param_2,param_3,local_70,local_60,
                             (param_4 >> 8 & 0x40 | param_4 & 0x30) >> 4,iVar11 == 1,0);
        if (-1 < iVar9) {
          piVar1 = (int *)(param_1 + 4);
          iVar11 = *piVar1;
          if ((*(int *)(iVar11 + 0x9c) == 0) && (*(int *)(iVar11 + 0xa4) != 0)) {
            bVar13 = 1;
          }
          else {
            bVar13 = 0;
          }
          *(byte *)(iVar11 + 0xad) = *(byte *)(iVar11 + 0xad) | bVar13;
          iVar11 = *piVar1;
          uVar5 = *(undefined4 *)(param_3 + 0x10);
          *(undefined4 *)(iVar11 + 0x9c) = local_70[0];
          *(undefined4 *)(iVar11 + 0xa0) = uVar5;
          FUN_10009250(*piVar1);
        }
      }
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return iVar9;
}

