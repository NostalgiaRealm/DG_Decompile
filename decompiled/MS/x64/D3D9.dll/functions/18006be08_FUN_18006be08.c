/*
 * FUN_18006be08 at 18006be08
 * undefined8 __fastcall FUN_18006be08(undefined8 param_1, longlong * param_2, uint * param_3, ulonglong param_4, longlong param_5, uint * param_6)
 * Address ranges: 18006be08-18006c3f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18006be08(undefined8 param_1,longlong *param_2,uint *param_3,ulonglong param_4,longlong param_5,
             uint *param_6)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  LPVOID local_a8;
  LPVOID pvStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  
  local_70 = 1;
  local_78 = 0x200;
  local_88 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  local_80 = local_88;
  iVar3 = FUN_1800ee08c((longlong *)&local_88,*param_3);
  local_90 = 1;
  local_a8 = (LPVOID)0x0;
  pvStack_a0 = (LPVOID)0x0;
  local_98 = 0x80;
  local_a8 = (LPVOID)thunk_FUN_1800fbccc(0x80);
  pvStack_a0 = local_a8;
  if (*(char *)(*(longlong *)(param_3 + 0x40) + 0x126d) != '\x03') {
    FUN_1800649ec(*(longlong *)(param_3 + 0x40),param_3,(longlong *)&local_a8,param_4);
  }
  lVar10 = 0;
  if (*(byte *)(*(longlong *)(param_3 + 0x40) + 0x126d) == 1) {
    param_3[0x86] = 0;
    param_3[0x87] = 0;
    param_3[0x88] = 0;
    param_3[0x89] = 0;
    param_3[0x8a] = 0;
    param_3[0x8b] = 0;
    param_3[0x8c] = 0;
    param_3[0x8d] = 0;
    param_3[0x8e] = 0;
    param_3[0x8f] = 0;
    param_3[0x90] = 0;
    param_3[0x91] = 0;
    param_3[0x92] = 0;
    param_3[0x93] = 0;
    param_3[0xf0] = 0;
    param_3[0xf1] = 0;
    param_3[0xf2] = 0;
    param_3[0xf3] = 0;
  }
  else {
    uVar5 = *(byte *)(*(longlong *)(param_3 + 0x40) + 0x126d) - 2;
    if ((uVar5 == 0) || (uVar5 == 1)) {
      FUN_1800702f8((ulonglong)uVar5,param_3,(longlong *)&local_a8,param_4,param_5);
      *(ulonglong *)((longlong)param_3 + 0x4d5) =
           CONCAT17((undefined1)uStack_5c,CONCAT43(uStack_60,local_68._5_3_));
      param_3[0x137] = uStack_5c;
      param_3[0x134] = 0xffffffff;
      *(undefined1 *)(param_3 + 0x135) = 0;
      param_3[0x138] = 0xffffffff;
      param_3[0x139] = 0xffffffff;
      param_3[0x13a] = 0xffffffff;
      param_3[0x13b] = 0xffffffff;
    }
  }
  cVar1 = *(char *)(*(longlong *)(param_3 + 0x40) + 0x126d);
  if (cVar1 == '\x01') {
    FUN_18006fdb0(param_1,param_3,(longlong *)&local_a8,param_6,param_4);
    lVar11 = 1;
    do {
      FUN_1800ec960((longlong)param_3,param_3[lVar11 + 0x86]);
      lVar11 = lVar11 + 1;
      lVar12 = lVar10;
    } while (lVar11 != 6);
    do {
      FUN_1800ec960((longlong)param_3,param_3[lVar12 + 0x8c]);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 6);
    do {
      puVar6 = param_3;
      FUN_1800ec960((longlong)param_3,param_3[lVar10 + 0x92]);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 2);
    uVar5 = param_3[0x86];
    FUN_180064ce4(puVar6,param_3,(longlong *)&local_a8,(ulonglong)uVar5,param_4);
    FUN_180064f30(puVar6,param_3,(longlong *)&local_a8,uVar5,param_4);
    FUN_180065288(puVar6,param_3,(longlong *)&local_a8,uVar5,param_4);
    FUN_1800edbe0(param_3,(longlong *)&local_a8,0x2036,0x410200);
    FUN_1800edbe0(param_3,(longlong *)&local_a8,0x3e,0);
    FUN_1800ec960((longlong)param_3,param_3[0x86]);
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *(undefined1 *)((longlong)param_3 + 0x531) = 0;
    FUN_180074738(param_1,param_3,(longlong *)&local_a8,param_6 + 1,param_4);
    local_50 = 1;
    local_58 = 0x100;
    puVar6 = (uint *)&DAT_00000100;
    local_68._0_5_ = 0;
    local_68._5_3_ = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uVar4 = thunk_FUN_1800fbccc(0x100);
    *(undefined1 *)((longlong)param_3 + 0x531) = 1;
    lVar10 = 0;
    uStack_60 = (undefined4)uVar4;
    uStack_5c = (uint)((ulonglong)uVar4 >> 0x20);
    local_68._0_5_ = (undefined5)uVar4;
    local_68._5_3_ = (undefined3)((ulonglong)uVar4 >> 0x28);
    do {
      if (*(int *)(*(longlong *)(param_3 + 0x40) + 0x2f0 + lVar10 * 4) != 0) {
        param_3[0xc2] = 0xffffffff;
        FUN_180074738(param_1,param_3,&local_68,
                      param_6 + *(uint *)(*(longlong *)(param_3 + 0x40) + 0x2f0 + lVar10 * 4),
                      param_4);
        puVar6 = param_3;
        FUN_1800edbe0(param_3,&local_68,0x3e,0);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x10);
    FUN_18007057c(puVar6,(longlong)param_3);
    bVar9 = (byte)(param_4 >> 0x38);
    bVar9 = (bVar9 >> 4 | bVar9 >> 1) & 1;
    uVar5 = (uint)(param_4 >> 0x34) & 7;
    uVar7 = (ulonglong)uVar5;
    if ((char)uVar5 != '\a') {
      bVar9 = 1;
    }
    if (bVar9 != 0) {
      uVar5 = param_3[0xb4];
      cVar1 = *(char *)((longlong)param_3 + 0x52);
      FUN_180064ce4(uVar7,param_3,(longlong *)&local_a8,(ulonglong)uVar5,param_4);
      FUN_180064f30(uVar7,param_3,(longlong *)&local_a8,uVar5,param_4);
      FUN_180065288(uVar7,param_3,(longlong *)&local_a8,uVar5,param_4);
      FUN_1800edbe0(param_3,(longlong *)&local_a8,0x36,(ulonglong)((int)cVar1 | 0x410200));
      FUN_1800ec960((longlong)param_3,param_3[0xb4]);
      param_3[0xb4] = 0;
    }
    FUN_1800edbe0(param_3,(longlong *)&local_a8,0x3e,0);
    FUN_1800edd90((longlong *)&local_a8,(undefined8 *)CONCAT35(local_68._5_3_,(undefined5)local_68),
                  CONCAT44(uStack_5c,uStack_60) -
                  (longlong)CONCAT35(local_68._5_3_,(undefined5)local_68));
    FUN_1800fbcf0((LPVOID)CONCAT35(local_68._5_3_,(undefined5)local_68));
  }
  uVar7 = 0;
  FUN_1800ee2d0(*param_3,(longlong *)&local_88,0);
  if ((param_3[2] & 8) != 0) {
    FUN_1800ee354(*param_3,(longlong *)&local_88);
  }
  if ((param_3[2] & 0x10) != 0) {
    FUN_1800ee354(*param_3,(longlong *)&local_88);
  }
  if ((param_3[2] & 0x20) != 0) {
    FUN_1800ee354(*param_3,(longlong *)&local_88);
  }
  uVar5 = *(byte *)(*(longlong *)(param_3 + 0x40) + 0x126d) - 1;
  uVar8 = (ulonglong)uVar5;
  if (uVar5 == 0) {
    FUN_18006544c(0,(int *)param_3,(longlong *)&local_88,param_4);
    FUN_18006c550(uVar8,(longlong)param_3,(longlong *)&local_88,param_4);
  }
  else {
    uVar5 = *(byte *)(*(longlong *)(param_3 + 0x40) + 0x126d) - 2;
    uVar8 = (ulonglong)uVar5;
    if ((uVar5 == 0) || (uVar5 == 1)) {
      FUN_18006544c(uVar8,(int *)param_3,(longlong *)&local_88,param_4);
      FUN_1800700f8(uVar8,(longlong)param_3,(longlong *)&local_88,param_4);
    }
  }
  if (*(byte *)((longlong)param_3 + 0x39) != 0) {
    FUN_1800eddec((longlong *)&local_88,2,0x2000068,(ulonglong)*(byte *)((longlong)param_3 + 0x39));
  }
  if (((char)param_3[0xb2] != '\0') && (param_3[0xb3] == 0xffffffff)) {
    FUN_1800eddec((longlong *)&local_88,4,0x400005b,0x1010f2);
  }
  if (param_3[200] != 0) {
    do {
      FUN_1800eddec((longlong *)&local_88,4,0x4000069,uVar7);
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_3[200]);
  }
  FUN_1800ee0e8((longlong *)&local_88,(longlong *)&local_a8,iVar3);
  puVar2 = local_88;
  FUN_1800edd90(param_2,local_88,(longlong)local_80 - (longlong)local_88);
  FUN_1800fbcf0(local_a8);
  uVar4 = FUN_1800fbcf0(puVar2);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}

