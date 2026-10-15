/*
 * FUN_1800a9214 at 1800a9214
 * undefined1 __fastcall FUN_1800a9214(uint param_1, undefined4 param_2, char param_3, longlong * param_4)
 * Address ranges: 1800a9214-1800a9492
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800a9214(uint param_1,undefined4 param_2,char param_3,longlong *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  uint local_d8;
  char local_d4;
  uint local_d3;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined4 local_c8 [12];
  undefined1 *local_98;
  undefined2 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  short local_6b;
  undefined1 local_69 [73];
  
  local_d3 = 0;
  local_cf = 0;
  local_cd = 0;
  local_cc = 0;
  local_d8 = param_1;
  local_d4 = param_3;
  FUN_1800fbea0((undefined1 *)local_c8,0,0x98);
  uVar4 = (undefined1)(local_d8 >> 10);
  local_d3._0_2_ = (ushort)((byte)(local_d8 >> 7) & 1);
  local_d3._0_3_ = CONCAT12(uVar4,(ushort)local_d3) & 0x1ffff;
  local_d3 = CONCAT13(uVar4,CONCAT12((char)((uint3)local_d3 >> 0x10),
                                     CONCAT11((char)(local_d8 >> 8),(undefined1)local_d3))) &
             0x1ff01ff;
  FUN_1800fbea0((undefined1 *)&local_88,0,0x54);
  FUN_1800fbea0((undefined1 *)local_c8,0,0x40);
  local_98 = local_69;
  uVar11 = local_d8 & 0x400;
  local_90 = 0x10;
  local_7c = 0x110800;
  local_80 = 0x210800;
  local_84 = 0x310800;
  local_88 = 0x410800;
  local_78 = 0x110400;
  bVar9 = (-(uVar11 != 0) & 2U) + 1;
  local_74 = 0x410400;
  uVar6 = local_d8 & 0xf;
  if (uVar6 == 2) {
LAB_1800a9330:
    bVar2 = false;
  }
  else {
    if (uVar6 == 1) {
      bVar2 = true;
      bVar3 = true;
      bVar9 = (-(uVar11 != 0) & 2U) + 0xd;
      goto LAB_1800a9336;
    }
    if (uVar6 != 0) goto LAB_1800a9330;
    bVar2 = true;
    bVar9 = (-(uVar11 != 0) & 2U) + 5;
  }
  bVar3 = false;
LAB_1800a9336:
  if (local_d4 == '\0') {
    bVar9 = bVar9 & 2;
    cVar10 = (bVar9 != 0) + '\x01';
    local_6b = (ushort)(byte)((-(bVar9 != 0) & 2U) - 1) << 8;
    cVar8 = -1;
    if (bVar2) {
      cVar8 = cVar10;
      cVar10 = (bVar9 != 0) + '\x02';
    }
    cVar5 = -1;
    if (bVar3) {
      cVar5 = cVar10;
    }
    local_6c = 0xff;
    local_70 = CONCAT22(0xffff,CONCAT11(cVar5,cVar8));
  }
  else {
    local_6b = 0x605;
    local_70 = 0x3020100;
    local_6c = 4;
  }
  local_108 = 0x43425844;
  uStack_f4 = 1;
  uStack_f0 = 0;
  local_ec = 3;
  local_e4 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  local_c8[0] = param_2;
  FUN_1800edd90(param_4,(undefined8 *)&local_108,0x2c);
  uVar4 = 0;
  uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
  *(int *)(*param_4 + 0x20) = (int)param_4[1] - (int)*param_4;
  uStack_f8 = 0x800;
  uStack_f4 = 0;
  uVar7 = thunk_FUN_1800fbccc(0x800);
  uStack_100 = (undefined4)uVar7;
  uStack_fc = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_108 = uStack_100;
  uStack_104 = uStack_fc;
  uVar7 = FUN_1800a8e80((longlong *)&local_108,&local_d8);
  puVar1 = (undefined8 *)CONCAT44(uStack_104,local_108);
  if (((char)uVar7 != '\0') &&
     (uVar7 = FUN_1800a418c(param_4,(longlong)&local_d8), (char)uVar7 != '\0')) {
    *(int *)(*param_4 + 0x24) = (int)param_4[1] - (int)*param_4;
    uVar7 = FUN_1800a42d0(param_4,(longlong)&local_d8);
    if ((int)uVar7 != 0) {
      *(int *)(*param_4 + 0x28) = (int)param_4[1] - (int)*param_4;
      FUN_1800edd90(param_4,puVar1,CONCAT44(uStack_fc,uStack_100) - (longlong)puVar1);
      FUN_1800edec4(param_4);
      uVar4 = 1;
    }
  }
  FUN_1800fbcf0(puVar1);
  return uVar4;
}

