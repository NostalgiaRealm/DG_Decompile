/*
 * FUN_18008469c at 18008469c
 * undefined1 __fastcall FUN_18008469c(longlong * param_1, longlong param_2, undefined8 param_3, int param_4, ulonglong * param_5, undefined8 param_6, undefined8 * param_7)
 * Address ranges: 18008469c-180084a4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_18008469c(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,ulonglong *param_5,
             undefined8 param_6,undefined8 *param_7)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  undefined8 *local_798;
  undefined8 *local_790;
  undefined8 local_788;
  undefined1 local_780;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 local_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined8 local_754;
  LPVOID local_748;
  LPVOID pvStack_740;
  undefined8 local_738;
  undefined1 local_730;
  undefined1 *local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 uStack_710;
  int local_708 [2];
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined1 *local_6d8;
  undefined2 local_6d0;
  undefined1 local_6c8 [20];
  undefined1 local_6b4;
  undefined1 local_6b3;
  undefined1 local_6b2 [66];
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  byte abStack_5f4 [18];
  byte abStack_5e2 [18];
  uint local_5d0;
  uint local_57c;
  longlong local_578;
  char local_55d;
  undefined1 local_298 [616];
  
  local_770 = 0;
  uStack_76c = 0;
  uStack_768 = 0;
  uStack_764 = 0;
  uStack_760 = 0;
  uStack_75c = 0;
  local_728 = local_298;
  local_718 = 0;
  uStack_710 = 0;
  local_720 = param_3;
  FUN_1800fbea0(local_6c8,0,0x430);
  FUN_1800fbea0((undefined1 *)&local_658,0,0x100);
  local_57c = *(uint *)(param_2 + 0x44) & 0xfffff;
  local_55d = (param_4 - 0x10051U & 0xfffeffff) != 0;
  local_578 = param_2;
  uVar3 = FUN_1800ee040(param_4);
  local_6b3 = (uint)uVar3 < 0x50;
  local_6b4 = 0;
  FUN_1800fbea0((undefined1 *)local_708,0,0x40);
  local_6d8 = local_6b2;
  local_6d0 = 0x40;
  local_64c = 0x110800;
  local_650 = 0x210800;
  local_654 = 0x310800;
  local_658 = 0x410800;
  local_648 = 0x410802;
  local_670 = 0x110400;
  local_66c = 0x410400;
  local_668 = 0x20000d00;
  local_778 = 0x43425844;
  uStack_774 = 0;
  local_770 = 0;
  uStack_76c = 0;
  uStack_768 = 0;
  uStack_764 = 1;
  uStack_760 = 0;
  uStack_75c = 3;
  uStack_758 = 0;
  local_754 = 0;
  local_708[0] = param_4;
  FUN_1800edd90((longlong *)param_5,(undefined8 *)&local_778,0x2c);
  uVar10 = 0;
  uStack_760 = CONCAT31(uStack_760._1_3_,1);
  *(int *)(*param_5 + 0x20) = (int)param_5[1] - (int)*param_5;
  uVar4 = 0x800;
  uStack_768 = 0x800;
  uStack_764 = 0;
  uVar3 = thunk_FUN_1800fbccc(0x800);
  local_770 = (undefined4)uVar3;
  uStack_76c = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_778 = local_770;
  uStack_774 = uStack_76c;
  FUN_18007e050(uVar4,(longlong)&local_728);
  local_780 = 1;
  local_788 = 0x200;
  local_798 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  local_790 = local_798;
  iVar2 = FUN_1800ee08c((longlong *)&local_798,local_708[0]);
  FUN_1800ee2d0(local_708[0],(longlong *)&local_798,0);
  local_730 = 1;
  local_748 = (LPVOID)0x0;
  pvStack_740 = (LPVOID)0x0;
  local_738 = 0x80;
  local_748 = (LPVOID)thunk_FUN_1800fbccc(0x80);
  pvStack_740 = local_748;
  FUN_1800841cc(param_1,(longlong *)&local_748,(longlong)&local_728);
  ppuVar5 = (undefined8 **)local_708;
  FUN_1800edbe0((uint *)ppuVar5,(longlong *)&local_748,0x3e,0);
  FUN_18007e170(ppuVar5,(longlong *)&local_798,(longlong)&local_728);
  if (local_55d == '\0') {
    uVar9 = 0;
    if (local_5d0 != 0) {
      do {
        ppuVar5 = &local_798;
        FUN_1800eddec((longlong *)ppuVar5,3,0x300005f,
                      (ulonglong)((uint)abStack_5f4[abStack_5e2[uVar9]] << 4 | 0x101002));
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < local_5d0);
    }
  }
  else {
    lVar8 = 0;
    do {
      bVar1 = abStack_5f4[lVar8];
      ppuVar5 = (undefined8 **)(ulonglong)bVar1;
      if (bVar1 != 0) {
        ppuVar5 = &local_798;
        FUN_1800eddec((longlong *)ppuVar5,3,0x300005f,(ulonglong)((uint)bVar1 << 4 | 0x101002));
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x11);
  }
  FUN_18007aef8((ulonglong)ppuVar5,(longlong *)&local_798,(longlong)&local_728);
  if (local_6d0._1_1_ != 0) {
    FUN_1800eddec((longlong *)&local_798,2,0x2000068,(ulonglong)local_6d0._1_1_);
  }
  FUN_1800ee0e8((longlong *)&local_798,(longlong *)&local_748,iVar2);
  puVar6 = local_798;
  FUN_1800edd90((longlong *)&local_778,local_798,(longlong)local_790 - (longlong)local_798);
  FUN_1800fbcf0(local_748);
  FUN_1800fbcf0(puVar6);
  uVar3 = FUN_18007e390(puVar6,(longlong *)param_5,(longlong)&local_728,'\0');
  puVar6 = (undefined8 *)CONCAT44(uStack_774,local_778);
  if ((char)uVar3 != '\0') {
    uVar9 = *param_5;
    *(int *)(uVar9 + 0x24) = (int)param_5[1] - (int)uVar9;
    iVar2 = FUN_18007ab08(uVar9,(longlong *)param_5,(longlong)&local_728);
    if (iVar2 != 0) {
      *(int *)(*param_5 + 0x28) = (int)param_5[1] - (int)*param_5;
      FUN_1800edd90((longlong *)param_5,puVar6,CONCAT44(uStack_76c,local_770) - (longlong)puVar6);
      FUN_1800edec4((longlong *)param_5);
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = local_700;
        param_7[1] = uStack_6f8;
        param_7[2] = local_6f0;
        param_7[3] = uStack_6e8;
        param_7[4] = local_6e0;
      }
      uVar10 = 1;
    }
  }
  FUN_1800fbcf0(puVar6);
  return uVar10;
}

