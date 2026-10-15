/*
 * FUN_18007e390 at 18007e390
 * undefined8 __fastcall FUN_18007e390(undefined8 param_1, longlong * param_2, longlong param_3, char param_4)
 * Address ranges: 18007e390-18007e5fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18007e390(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  uint uVar7;
  uint uVar9;
  undefined8 local_res8;
  undefined4 local_res18 [4];
  undefined4 local_118 [2];
  byte *local_110;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined2 local_fa;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined2 local_e2;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 *local_b8 [16];
  ulonglong uVar8;
  
  local_110 = (byte *)0x4e475349;
  uVar8 = 0;
  local_d0 = 0x210;
  local_108 = 0;
  local_104 = 8;
  local_c8 = 1;
  local_res8 = param_1;
  local_e0 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_d8 = local_e0;
  FUN_1800edd90((longlong *)&local_e0,&local_110,0x10);
  ppuVar6 = local_b8;
  FUN_1800fbea0((undefined1 *)ppuVar6,0,0x80);
  uVar4 = uVar8;
  if (*(char *)(param_3 + 0x1cb) == '\0') {
    uVar9 = 0;
    if (*(int *)(param_3 + 0x158) != 0) {
      do {
        local_110 = (byte *)0x0;
        local_res18[0] = 0;
        local_118[0] = 3;
        bVar1 = *(byte *)(param_3 + 0x146 + uVar8);
        local_res8 = CONCAT71(local_res8._1_7_,0xf);
        FUN_18007e1e0(ppuVar6,param_3,(uint)bVar1,&local_110,local_res18,local_118,
                      (undefined1 *)&local_res8,param_4);
        uVar4 = FUN_1800ede70((longlong *)local_b8,local_110);
        local_e3 = *(undefined1 *)(param_3 + 0x134 + (ulonglong)bVar1);
        local_f8 = (undefined4)uVar4;
        local_f4 = local_res18[0];
        local_ec = local_118[0];
        ppuVar6 = &local_e0;
        local_e4 = (undefined1)local_res8;
        local_f0 = 0;
        local_e2 = 0;
        local_e8 = (int)uVar8;
        FUN_1800edd90((longlong *)ppuVar6,(undefined8 *)&local_f8,0x18);
        uVar9 = *(uint *)(param_3 + 0x158);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar9);
    }
  }
  else {
    do {
      local_110 = (byte *)0x0;
      local_res18[0] = 0;
      local_118[0] = 3;
      local_res8 = CONCAT71(local_res8._1_7_,0xf);
      FUN_18007e1e0(ppuVar6,param_3,(uint)uVar8,&local_110,local_res18,local_118,
                    (undefined1 *)&local_res8,param_4);
      if (local_110 != (byte *)0x0) {
        uVar3 = FUN_1800ede70((longlong *)local_b8,local_110);
        local_110 = (byte *)CONCAT44(local_res18[0],(int)uVar3);
        local_108 = 0;
        local_fa = 0;
        local_100 = (uint)*(byte *)(param_3 + 0x146 + uVar8);
        local_fb = *(undefined1 *)(param_3 + 0x134 + uVar8);
        ppuVar6 = &local_e0;
        local_104 = local_118[0];
        local_fc = (undefined1)local_res8;
        FUN_1800edd90((longlong *)ppuVar6,&local_110,0x18);
        uVar4 = (ulonglong)((int)uVar4 + 1);
      }
      uVar9 = (uint)uVar4;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < 0x11);
  }
  FUN_1800ee130((longlong *)&local_e0,uVar9,(longlong *)local_b8);
  puVar2 = local_e0;
  FUN_1800edd90(param_2,local_e0,(longlong)local_d8 - (longlong)local_e0);
  uVar5 = FUN_1800fbcf0(puVar2);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}

