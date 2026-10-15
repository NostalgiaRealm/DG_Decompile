/*
 * FUN_1800a418c at 1800a418c
 * undefined8 __fastcall FUN_1800a418c(longlong * param_1, longlong param_2)
 * Address ranges: 1800a418c-1800a42ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800a418c(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong local_f8;
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
  longlong local_b8 [17];
  
  local_f8 = 0x4e475349;
  local_f0 = 0;
  local_d0 = 0x210;
  local_ec = 8;
  local_c8 = 1;
  local_e0 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_d8 = local_e0;
  FUN_1800edd90((longlong *)&local_e0,&local_f8,0x10);
  FUN_1800fbea0((undefined1 *)local_b8,0,0x80);
  uVar7 = 0;
  do {
    uVar5 = 0xf;
    iVar6 = (int)uVar7;
    if (iVar6 == 0) {
      pcVar3 = "SV_POSITION";
      uVar4 = 1;
    }
    else if (iVar6 == 1) {
      pcVar3 = "TEXCOORD";
      uVar4 = 0;
      uVar5 = 3;
    }
    else {
      pcVar3 = (char *)0x0;
      uVar4 = 0;
    }
    local_f8 = FUN_1800ede70(local_b8,(byte *)pcVar3);
    local_e3 = *(undefined1 *)(param_2 + 0x7f + uVar7);
    local_f8 = local_f8 & 0xffffffff;
    local_ec = 3;
    local_e2 = 0;
    local_f0 = uVar4;
    local_e8 = iVar6;
    local_e4 = uVar5;
    FUN_1800edd90((longlong *)&local_e0,&local_f8,0x18);
    uVar7 = (ulonglong)(iVar6 + 1U);
  } while (iVar6 + 1U < 2);
  FUN_1800ee130((longlong *)&local_e0,2,local_b8);
  puVar1 = local_e0;
  FUN_1800edd90(param_1,local_e0,(longlong)local_d8 - (longlong)local_e0);
  uVar2 = FUN_1800fbcf0(puVar1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

