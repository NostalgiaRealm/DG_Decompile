/*
 * FUN_18006b96c at 18006b96c
 * undefined8 __fastcall FUN_18006b96c(uint * param_1, uint * param_2, ulonglong param_3, undefined1 param_4, uint param_5, longlong * param_6, undefined8 * param_7)
 * Address ranges: 18006b96c-18006bbdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18006b96c(uint *param_1,uint *param_2,ulonglong param_3,undefined1 param_4,
                       uint param_5,longlong *param_6,undefined8 *param_7)

{
  byte *pbVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined7 uVar8;
  undefined8 *local_5c8;
  undefined8 *local_5c0;
  undefined8 local_5b8;
  undefined1 local_5b0;
  LPVOID local_5a8;
  LPVOID pvStack_5a0;
  undefined8 local_598;
  undefined1 local_590;
  uint local_588 [12];
  undefined1 *local_558;
  undefined2 local_550;
  undefined4 local_548;
  undefined8 local_544;
  undefined6 uStack_53c;
  undefined2 uStack_536;
  undefined2 uStack_534;
  undefined1 uStack_532;
  undefined5 uStack_531;
  undefined7 uStack_52c;
  undefined1 uStack_525;
  undefined2 uStack_524;
  byte bStack_522;
  undefined1 local_4d0 [328];
  byte local_388;
  undefined1 local_387;
  char acStack_386 [8];
  byte local_37e;
  byte local_37a;
  byte local_379;
  
  FUN_1800fbea0((undefined1 *)&local_544,0,0x50c);
  local_548 = 0;
  puVar7 = local_588;
  FUN_1800fbea0((undefined1 *)puVar7,0,0x40);
  local_558 = local_4d0;
  local_588[0] = param_5;
  local_550 = 0x40;
  FUN_18006439c(puVar7,(longlong)local_588);
  puVar7 = param_1;
  FUN_1800667c8(param_1,param_2,(longlong)local_588,param_4);
  uStack_534 = 0;
  uStack_532 = 0;
  uStack_531 = 0;
  uStack_52c = 0;
  uStack_525 = 0;
  uStack_524 = 0;
  bStack_522 = 0;
  local_544 = 0;
  uStack_53c = 0;
  uStack_536 = 0;
  if ((param_3 >> 0x39 & 1) != 0) {
    uVar3 = (uint)(param_3 >> 0x3a) & 3;
    if (uVar3 == 0) {
      local_544 = 0x100000000;
    }
    else if (((uVar3 == 1) || (uVar3 == 2)) || (uVar3 == 3)) {
      local_544 = 0xc;
    }
  }
  if ((param_3 >> 0x38 & 1) != 0) {
    local_544._0_2_ = CONCAT11(0xf,(undefined1)local_544);
  }
  uVar8 = (undefined7)((ulonglong)puVar7 >> 8);
  local_544 = CONCAT53(local_544._3_5_,CONCAT12(~local_37e | local_388,(undefined2)local_544)) &
              0xffffffffff0fffff;
  local_544 = CONCAT44(local_544._4_4_,CONCAT13(local_387,(undefined3)local_544)) &
              0xffffffff08ffffff | 0x7000000;
  local_37a = FUN_1800ee208(0xe4,(~local_37e | local_388) & 0xf);
  uVar6 = CONCAT71(uVar8,0xe4);
  local_379 = FUN_1800ee208(0xe4,local_544._3_1_);
  uVar5 = 0;
  do {
    if (acStack_386[uVar5] != '\0') {
      *(undefined1 *)((longlong)&local_544 + (ulonglong)((int)uVar5 + 5)) = 0xf;
    }
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar3;
  } while (uVar3 < 8);
  uStack_536 = 0xff00;
  uStack_534 = 0xffff;
  bStack_522 = (byte)(param_3 >> 0x30) & 1;
  uStack_532 = 0xff;
  uVar5 = FUN_180064950(uVar6,param_6,(longlong)local_588);
  if ((char)uVar5 != '\0') {
    local_5b0 = 1;
    local_5b8 = 0x200;
    local_5c8 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
    local_5c0 = local_5c8;
    iVar4 = FUN_1800ee08c((longlong *)&local_5c8,param_5);
    local_590 = 1;
    local_5a8 = (LPVOID)0x0;
    pvStack_5a0 = (LPVOID)0x0;
    local_598 = 0x80;
    local_5a8 = (LPVOID)thunk_FUN_1800fbccc(0x80);
    pvStack_5a0 = local_5a8;
    uVar6 = FUN_18006b59c(param_1,(longlong)param_2,local_588,(longlong *)&local_5c8,
                          (longlong *)&local_5a8,param_3);
    if ((char)uVar6 != '\0') {
      FUN_1800ee0e8((longlong *)&local_5c8,(longlong *)&local_5a8,iVar4);
      puVar2 = local_5c8;
      FUN_1800edd90(param_6,local_5c8,(longlong)local_5c0 - (longlong)local_5c8);
      if (param_1[2] != 0) {
        pbVar1 = (byte *)(((ulonglong)(param_6[1] - *param_6) >> 1) + *param_6);
        *pbVar1 = *pbVar1 ^ 0x2a;
      }
      FUN_1800edec4(param_6);
      FUN_180065f34(param_6,(longlong)local_588,param_7);
      FUN_1800fbcf0(local_5a8);
      uVar6 = FUN_1800fbcf0(puVar2);
      return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    FUN_1800fbcf0(local_5a8);
    uVar5 = FUN_1800fbcf0(local_5c8);
  }
  return uVar5 & 0xffffffffffffff00;
}

