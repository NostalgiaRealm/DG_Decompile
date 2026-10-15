/*
 * FUN_180078690 at 180078690
 * undefined1 __fastcall FUN_180078690(undefined8 param_1, longlong param_2, longlong * param_3, ulonglong param_4, longlong param_5, uint param_6, undefined8 * param_7)
 * Address ranges: 180078690-1800789b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180078690(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
             longlong param_5,uint param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  undefined4 local_res18 [2];
  undefined4 local_118 [2];
  byte *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined1 local_ec;
  byte local_eb;
  undefined2 local_ea;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  longlong local_b8 [16];
  
  uVar9 = 0;
  local_e8 = 0x43425844;
  uStack_d4 = 1;
  uStack_d0 = 0;
  local_cc = 3;
  local_c4 = 0;
  uVar10 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  FUN_1800edd90(param_3,(undefined8 *)&local_e8,0x2c);
  puVar6 = (undefined1 *)(param_2 + 0xe4);
  FUN_1800fbea0(puVar6,0,200);
  *(undefined4 *)(param_2 + 0xdc) = 0x110800;
  *(undefined4 *)(param_2 + 0xd8) = 0x210800;
  *(undefined4 *)(param_2 + 0xd4) = 0x310800;
  *(undefined4 *)(param_2 + 0xd0) = 0x410800;
  *(undefined4 *)(param_2 + 0xe0) = 0x410802;
  *(undefined4 *)(param_2 + 0xb8) = 0x110400;
  *(undefined4 *)(param_2 + 0xbc) = 0x410400;
  *(undefined4 *)(param_2 + 0xc0) = 0x20000d00;
  *(undefined1 *)(param_2 + 0x1cc) = 0;
  *(bool *)(param_2 + 0x1cb) = (*(int *)(param_2 + 0x20) - 0x10051U & 0xfffeffff) != 0;
  FUN_18007e050(puVar6,param_2);
  uVar3 = param_6;
  if (param_6 != 0) {
    do {
      if (*(char *)(param_4 + uVar9) != '\x11') {
        FUN_18007e0a8(puVar6,param_2,(uint)*(byte *)(param_4 + uVar9),
                      *(byte *)((ulonglong)*(byte *)(param_4 + uVar9) + param_5));
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < uVar3);
  }
  lVar1 = *param_3;
  *(int *)(lVar1 + 0x20) = (int)param_3[1] - (int)lVar1;
  uVar4 = FUN_18007e390(lVar1,param_3,param_2,'\0');
  uVar9 = 0;
  if ((char)uVar4 != '\0') {
    local_110 = (byte *)0x4e47534f;
    local_108 = 0;
    *(int *)(*param_3 + 0x24) = (int)param_3[1] - (int)*param_3;
    uStack_d8 = 0x210;
    uStack_d4 = 0;
    local_104 = 8;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,1);
    uVar4 = thunk_FUN_1800fbccc(0x210);
    uStack_e0 = (undefined4)uVar4;
    uStack_dc = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_e8 = uStack_e0;
    uStack_e4 = uStack_dc;
    FUN_1800edd90((longlong *)&local_e8,&local_110,0x10);
    plVar7 = local_b8;
    FUN_1800fbea0((undefined1 *)plVar7,0,0x80);
    param_6 = 0;
    if (uVar3 != 0) {
      do {
        local_110 = (byte *)0x0;
        local_res18[0] = 0;
        local_118[0] = 3;
        param_6 = CONCAT31(param_6._1_3_,0xf);
        FUN_18007e1e0(plVar7,param_2,(uint)*(byte *)(param_4 + uVar9),&local_110,local_res18,
                      local_118,(undefined1 *)&param_6,'\x01');
        uVar5 = FUN_1800ede70(local_b8,local_110);
        local_100 = (undefined4)uVar5;
        local_fc = local_res18[0];
        local_f4 = local_118[0];
        local_f0 = (uint)uVar9 & 0xff;
        local_ec = (undefined1)param_6;
        local_f8 = 0;
        local_ea = 0;
        local_eb = ~*(byte *)((ulonglong)*(byte *)(param_4 + uVar9) + param_5);
        plVar7 = (longlong *)&local_e8;
        FUN_1800edd90(plVar7,(undefined8 *)&local_100,0x18);
        uVar8 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < uVar3);
    }
    uVar10 = 0;
    FUN_1800ee130((longlong *)&local_e8,uVar3,local_b8);
    puVar2 = (undefined8 *)CONCAT44(uStack_e4,local_e8);
    FUN_1800edd90(param_3,puVar2,CONCAT44(uStack_dc,uStack_e0) - (longlong)puVar2);
    FUN_1800fbcf0(puVar2);
    *(int *)(*param_3 + 0x28) = (int)param_3[1] - (int)*param_3;
    uVar4 = FUN_180077c68(param_1,param_3,param_2,param_4,param_5,uVar3);
    if ((char)uVar4 != '\0') {
      FUN_1800edec4(param_3);
      if (param_7 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)(param_2 + 0x30);
        *param_7 = *(undefined8 *)(param_2 + 0x28);
        param_7[1] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x40);
        param_7[2] = *(undefined8 *)(param_2 + 0x38);
        param_7[3] = uVar4;
        param_7[4] = *(undefined8 *)(param_2 + 0x48);
      }
      uVar10 = 1;
    }
  }
  return uVar10;
}

