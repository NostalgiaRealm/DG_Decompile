/*
 * FUN_1800789b8 at 1800789b8
 * undefined1 __fastcall FUN_1800789b8(uint * param_1, longlong param_2, undefined8 param_3, undefined1 param_4, undefined1 param_5, undefined4 param_6, longlong * param_7, undefined8 * param_8, undefined4 param_9, longlong * param_10, undefined8 * param_11)
 * Address ranges: 1800789b8-180078caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800789b8(uint *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined4 param_6,longlong *param_7,undefined8 *param_8,
             undefined4 param_9,longlong *param_10,undefined8 *param_11)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined2 uStack_8b8;
  undefined2 uStack_8b6;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined8 local_8ac;
  undefined8 local_8a4;
  undefined8 *local_898;
  undefined8 *puStack_890;
  undefined8 local_888;
  undefined1 local_880;
  undefined1 local_878 [8];
  undefined8 local_870;
  undefined4 local_858 [2];
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined1 *local_828;
  undefined2 local_820;
  undefined1 local_804;
  undefined1 local_802 [66];
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined8 *local_744;
  undefined8 uStack_73c;
  undefined2 local_734;
  undefined8 local_732;
  undefined8 uStack_72a;
  undefined2 local_722;
  uint local_720;
  uint local_6cc;
  longlong local_6c8;
  undefined1 *local_6c0;
  undefined1 local_6ad;
  undefined1 local_6ac;
  undefined8 local_358;
  int local_34c;
  undefined2 local_33a;
  undefined1 local_338;
  undefined1 local_337;
  
  FUN_1800fbea0(local_878,0,0x850);
  puVar7 = local_858;
  local_870 = param_3;
  FUN_1800fbea0((undefined1 *)puVar7,0,0x40);
  local_858[0] = param_9;
  local_828 = local_802;
  local_804 = param_5;
  local_6cc = *(uint *)(param_2 + 0x44) & 0x77fff;
  local_820 = 0x40;
  local_6c0 = local_878;
  local_6ad = 0;
  local_33a = 0;
  local_338 = 1;
  local_79c = 0x110800;
  local_7a0 = 0x210800;
  local_7a4 = 0x310800;
  local_7a8 = 0x410800;
  local_798 = 0x410802;
  local_7c0 = 0x110400;
  local_7bc = 0x410400;
  local_7b8 = 0x20000d00;
  local_6c8 = param_2;
  local_358 = param_3;
  local_337 = param_4;
  FUN_180077fa4(puVar7,(longlong)local_878);
  local_8c8 = 0x43425844;
  uStack_8b4 = 1;
  uStack_8b0 = 0;
  local_8ac = 3;
  bVar2 = false;
  local_8a4 = 0;
  uStack_8c4 = 0;
  uStack_8c0 = 0;
  uStack_8bc = 0;
  uStack_8b8 = 0;
  uStack_8b6 = 0;
  FUN_1800edd90(param_10,(undefined8 *)&local_8c8,0x2c);
  local_6ac = 1;
  uVar8 = 0x800;
  uStack_8b8 = 0x800;
  uStack_8b6 = 0;
  uStack_8b4 = 0;
  uStack_8b0 = CONCAT31(uStack_8b0._1_3_,1);
  uVar6 = thunk_FUN_1800fbccc(0x800);
  uStack_8c0 = (undefined4)uVar6;
  uStack_8bc = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_8c8 = uStack_8c0;
  uStack_8c4 = uStack_8bc;
  local_34c = FUN_18007ab08(uVar8,(longlong *)&local_8c8,(longlong)local_878);
  if (local_34c != 0) {
    local_888 = 0x800;
    local_880 = 1;
    local_898 = (undefined8 *)thunk_FUN_1800fbccc(0x800);
    puStack_890 = local_898;
    cVar4 = FUN_180078508(param_1,(longlong *)&local_898,(longlong)local_878);
    puVar3 = local_898;
    if (cVar4 != '\0') {
      lVar1 = *param_10;
      *(int *)(lVar1 + 0x20) = (int)param_10[1] - (int)lVar1;
      uVar6 = FUN_18007e390(lVar1,param_10,(longlong)local_878,'\x01');
      if ((char)uVar6 != '\0') {
        *(int *)(*param_10 + 0x24) = (int)param_10[1] - (int)*param_10;
        FUN_1800edd90(param_10,(undefined8 *)CONCAT44(uStack_8c4,local_8c8),
                      CONCAT44(uStack_8bc,uStack_8c0) - CONCAT44(uStack_8c4,local_8c8));
        *(int *)(*param_10 + 0x28) = (int)param_10[1] - (int)*param_10;
        FUN_1800edd90(param_10,puVar3,(longlong)puStack_890 - (longlong)puVar3);
        FUN_1800edec4(param_10);
        if (param_11 != (undefined8 *)0x0) {
          *param_11 = local_850;
          param_11[1] = uStack_848;
          param_11[2] = local_840;
          param_11[3] = uStack_838;
          param_11[4] = local_830;
        }
        bVar2 = true;
      }
    }
    FUN_1800fbcf0(puVar3);
  }
  FUN_1800fbcf0((LPVOID)CONCAT44(uStack_8c4,local_8c8));
  uVar5 = 0;
  if (bVar2) {
    FUN_1800fbea0((undefined1 *)local_858,0,0x40);
    local_858[0] = param_6;
    local_828 = local_802;
    local_820 = 0x40;
    local_888 = CONCAT62(local_888._2_6_,local_734);
    uStack_8b8 = local_722;
    local_898 = local_744;
    puStack_890 = (undefined8 *)uStack_73c;
    local_804 = 0;
    local_8c8 = (undefined4)local_732;
    uStack_8c4 = (undefined4)((ulonglong)local_732 >> 0x20);
    uStack_8c0 = (undefined4)uStack_72a;
    uStack_8bc = (undefined4)((ulonglong)uStack_72a >> 0x20);
    uVar5 = FUN_180078690(param_1,(longlong)local_878,param_7,(ulonglong)&local_8c8,
                          (longlong)&local_898,local_720,param_8);
  }
  return uVar5;
}

