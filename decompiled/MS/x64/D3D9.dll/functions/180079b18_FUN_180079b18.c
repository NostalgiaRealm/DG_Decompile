/*
 * FUN_180079b18 at 180079b18
 * undefined1 __fastcall FUN_180079b18(undefined8 param_1, ulonglong param_2, undefined8 * param_3, longlong param_4, undefined4 param_5, ulonglong * param_6)
 * Address ranges: 180079b18-180079d28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_180079b18(undefined8 param_1,ulonglong param_2,undefined8 *param_3,longlong param_4,
             undefined4 param_5,ulonglong *param_6)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  undefined4 local_5318;
  undefined8 local_5314;
  undefined8 uStack_530c;
  undefined8 local_5304;
  undefined8 local_52fc;
  undefined8 local_52f4;
  longlong local_52e8 [2];
  undefined8 *local_52d8;
  undefined8 local_52d0;
  undefined4 local_52c8;
  undefined8 local_52c4;
  undefined1 local_52bc [36];
  undefined1 *local_5298;
  undefined2 local_5290;
  undefined1 local_5274;
  undefined1 local_5272 [1050];
  undefined1 local_4e58 [144];
  ulonglong local_4dc8;
  uint local_4dc0;
  undefined1 local_4dac;
  char local_4daa;
  undefined8 local_4a98 [2381];
  undefined8 uStack_30;
  ulonglong uVar6;
  
  uStack_30 = 0x180079b31;
  FUN_180078cb0(param_1,local_4a98,param_3,param_2);
  uVar6 = 0;
  local_52d8 = local_4a98;
  local_52e8[1] = 0;
  local_52d0 = 0;
  local_52c4 = 0;
  local_52e8[0] = param_4;
  FUN_1800fbea0(local_52bc,0,0x464);
  FUN_1800fbea0(local_4e58,0,0x3c0);
  FUN_1800fbea0((undefined1 *)&local_52c8,0,0x40);
  local_52c8 = param_5;
  local_5298 = local_5272;
  local_5290 = 0x40;
  bVar2 = false;
  local_5274 = 0;
  local_5318 = 0x43425844;
  local_5314 = 0;
  uStack_530c = 0;
  local_5304 = 1;
  local_52fc = 3;
  local_52f4 = 0;
  local_4dc8 = param_2;
  FUN_1800edd90((longlong *)param_6,(undefined8 *)&local_5318,0x2c);
  uVar8 = 0;
  uVar7 = *param_6;
  *(int *)(uVar7 + 0x20) = (int)param_6[1] - (int)uVar7;
  local_4daa = '\0';
  if ((local_4dc8 >> 9 & 1) != 0) {
    uVar3 = 0xffffffff;
    uVar9 = 0xffffffff;
    do {
      if (*(char *)((longlong)local_52d8 + uVar6) == '\0') {
        if (*(char *)((longlong)local_52d8 + uVar6 + 0x10) != '\0') {
          uVar9 = uVar6;
        }
      }
      else if (*(char *)((longlong)local_52d8 + uVar6) == '0') {
        uVar3 = (uint)uVar6;
      }
      uVar5 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < 0x10);
    uVar7 = uVar6;
    if (((int)uVar9 != -1) && (uVar3 != 0xffffffff)) {
      bVar2 = true;
      local_4daa = '\x01';
      local_4dc0 = uVar3;
    }
  }
  local_4dac = 0;
  if (bVar2) {
    uVar7 = (ulonglong)local_4dc0;
    local_4dac = *(undefined1 *)((longlong)local_52d8 + uVar7 + 0x10);
    pbVar1 = (byte *)((longlong)local_52d8 + uVar7 + 0x10);
    *pbVar1 = *pbVar1 | 7;
  }
  uVar4 = FUN_180084e74(uVar7,(longlong *)param_6,local_52e8);
  if ((char)uVar4 != '\0') {
    uVar7 = *param_6;
    *(int *)(uVar7 + 0x24) = (int)param_6[1] - (int)uVar7;
    if (local_4daa != '\0') {
      uVar7 = CONCAT71((int7)(uVar7 >> 8),local_4dac);
      *(undefined1 *)((longlong)local_52d8 + (ulonglong)local_4dc0 + 0x10) = local_4dac;
    }
    uVar4 = FUN_180078d60(uVar7,(longlong *)param_6,local_52e8);
    if ((char)uVar4 != '\0') {
      *(int *)(*param_6 + 0x28) = (int)param_6[1] - (int)*param_6;
      uVar4 = FUN_180078f18(param_1,(longlong *)param_6,(longlong)local_52e8);
      if ((char)uVar4 != '\0') {
        FUN_1800edec4((longlong *)param_6);
        uVar8 = 1;
      }
    }
  }
  return uVar8;
}

