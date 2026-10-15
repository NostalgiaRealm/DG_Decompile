/*
 * FUN_180040d08 at 180040d08
 * undefined __cdecl FUN_180040d08(longlong param_1, int * param_2, longlong * param_3, ushort param_4)
 * Address ranges: 180040d08-180040ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040d08(longlong param_1,int *param_2,longlong *param_3,ushort param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong extraout_x14;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [12];
  
  iVar10 = *(int *)(param_1 + 0x74);
  lVar12 = 4;
  if (iVar10 == 0) {
    lVar12 = 0;
  }
  if ((&DAT_18006aeb0)[lVar12] == 0xff) {
    lVar2 = 5;
    if (iVar10 == 0) {
      lVar2 = 1;
    }
    if ((&DAT_18006aeb0)[lVar2] == 0xff) {
      lVar2 = 6;
      if (iVar10 == 0) {
        lVar2 = 2;
      }
      if ((&DAT_18006aeb0)[lVar2] == 0xff) {
        return;
      }
    }
  }
  uVar5 = FUN_18003dbe0(param_2,(uint)param_4,0,0,0,0,7,param_3);
  uVar11 = (ulonglong)(ushort)uVar5;
  if (((uVar5 & 0xf0) != 0x80) && ((uVar5 & 0xf0) != 0xf0)) {
    uVar5 = FUN_18003da90((longlong)param_2,0,0,0,0,7,0);
    uVar11 = (ulonglong)(ushort)uVar5;
  }
  uVar7 = (uint)uVar11;
  FUN_18003f3c8(param_2,param_3,(uint)param_4,0xa4,uVar7,uVar7,7,1);
  auVar13 = FUN_18003d4b8((longlong)param_2,uVar7,7);
  uVar5 = FUN_18003dba8(auVar13._0_8_,auVar13._8_4_,0xa4);
  FUN_18003d598(param_2,0,uVar7,(byte)uVar5,0,0);
  uVar5 = 0;
  if ((uVar7 & 0xf0) == 0x80) {
    uVar5 = (uint)param_2[(uVar11 & 0xf) + 0x26] >> 0x12 & 3;
  }
  lVar2 = 5;
  if (iVar10 == 0) {
    lVar2 = 1;
  }
  lVar8 = 6;
  if (iVar10 == 0) {
    lVar8 = 2;
  }
  if (uVar5 == 0) {
    iVar10 = (&DAT_18006aeb0)[lVar12];
    iVar9 = 0;
    lVar12 = lVar2;
  }
  else {
    iVar9 = (&DAT_18006aeb0)[lVar8];
    iVar10 = 0;
    lVar8 = lVar2;
  }
  iVar3 = (&DAT_18006aeb0)[lVar12];
  iVar4 = (&DAT_18006aeb0)[lVar8];
  puVar1 = (uint *)(param_2 + 0x5f);
  puVar1[0] = 5;
  puVar1[1] = 0x4e46;
  param_2[0x61] = iVar10;
  param_2[0x62] = iVar3;
  param_2[99] = iVar4;
  param_2[100] = iVar9;
  FUN_180056e08(param_3,(param_2[0x4f] + param_2[0x57]) * 0x1000000 + 0x6000000U & 0x7f000000 | 1,
                (uint *)(param_2 + 0x4f),(uint *)(param_2 + 0x57),puVar1,(uint *)0x0);
  FUN_180056e08(param_3,(param_2[0x57] + param_2[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x56
                ,(uint *)(param_2 + 0x4f),(uint *)(param_2 + 0x57),(uint *)0x0,(uint *)0x0);
  piVar6 = (int *)FUN_18003d4b8((longlong)param_2,0x70,7);
  FUN_18003d598(piVar6,0,uVar7,0xa4,0,0);
  puVar1[0] = 5;
  puVar1[1] = 0x4006;
  param_2[99] = 0x3b808081;
  param_2[100] = 0x3b808081;
  param_2[0x61] = 0x3b808081;
  param_2[0x62] = 0x3b808081;
  FUN_180056e08(param_3,(param_2[0x4f] + param_2[0x57]) * 0x1000000 + 0x6000000U & 0x7f000000 |
                        0x2038,(uint *)(param_2 + 0x4f),(uint *)(param_2 + 0x57),puVar1,(uint *)0x0)
  ;
  if (uVar7 != param_4 && (uVar7 & 0xf0) == 0x80) {
    FUN_180055de0((longlong)param_2,param_2[(ulonglong)(uVar7 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14 + 0x98) = 0;
  }
  return;
}

