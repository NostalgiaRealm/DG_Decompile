/*
 * FUN_180084ca4 at 180084ca4
 * undefined __fastcall FUN_180084ca4(longlong param_1, longlong param_2, undefined8 param_3, longlong * param_4)
 * Address ranges: 180084ca4-180084e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180084ca4(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong *plVar8;
  undefined2 uStackX_1d;
  undefined1 uStackX_1f;
  undefined7 local_53;
  undefined4 uStack_4c;
  
  FUN_1800fbea0((undefined1 *)(param_2 + 0x100),0,0x1ec);
  *(undefined4 *)(param_2 + 0x2d8) = 0x110803;
  *(undefined4 *)(param_2 + 0x2d4) = 0x210803;
  *(undefined4 *)(param_2 + 0x2d0) = 0x310803;
  *(undefined4 *)(param_2 + 0x2cc) = 0x410803;
  *(undefined4 *)(param_2 + 0x2e8) = 0x110804;
  *(undefined4 *)(param_2 + 0x2e4) = 0x210804;
  *(undefined4 *)(param_2 + 0x2e0) = 0x310804;
  *(undefined4 *)(param_2 + 0x2dc) = 0x410804;
  *(undefined4 *)(param_2 + 0xb8) = 0x110400;
  *(undefined4 *)(param_2 + 0xbc) = 0x410400;
  *(undefined4 *)(param_2 + 0xc0) = 0x20000d00;
  FUN_1800fbea0((undefined1 *)(param_2 + 0x140),0,0x80);
  bVar7 = 1;
  *(ulonglong *)(param_2 + 0x465) = CONCAT17((undefined1)uStack_4c,local_53);
  uVar6 = 0;
  *(undefined4 *)(param_2 + 0x46c) = uStack_4c;
  *(undefined4 *)(param_2 + 0x460) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x464) = 0;
  *(undefined4 *)(param_2 + 0x470) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x474) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x478) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x47c) = 0xffffffff;
  do {
    lVar4 = *(longlong *)(param_2 + 0x10);
    bVar1 = *(byte *)(uVar6 + 0x10 + lVar4);
    if ((bVar1 != 0) && (*(char *)(uVar6 + lVar4) != -1)) {
      lVar4 = param_1;
      uVar3 = FUN_180084a50(param_1,param_2,param_4,(uint)uVar6,bVar1,0);
      bVar7 = bVar7 & (byte)uVar3;
    }
    uVar5 = (uint)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 0x10);
  uStackX_1d = (undefined2)((ulonglong)param_3 >> 0x28);
  *(undefined2 *)(param_2 + 0x235) = uStackX_1d;
  uStackX_1f = (undefined1)((ulonglong)param_3 >> 0x38);
  *(undefined1 *)(param_2 + 0x237) = uStackX_1f;
  *(undefined4 *)(param_2 + 0x230) = 0;
  *(undefined1 *)(param_2 + 0x234) = 0;
  plVar8 = param_4;
  FUN_180084aec(lVar4,param_2,param_4,0xffffffff);
  cVar2 = *(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c);
  if (cVar2 == '\x02') {
    FUN_18007b0b4(0,param_2);
  }
  else if (cVar2 == '\x03') {
    FUN_18007b468(1,param_2,plVar8,param_4,bVar7);
  }
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x40) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1800ec8c0(param_2 + 0x20,4,'\x01');
  }
  *(uint *)(param_2 + 0x238) = uVar5;
  return;
}

