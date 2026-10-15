/*
 * FUN_18000f4a4 at 18000f4a4
 * undefined8 * __fastcall FUN_18000f4a4(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 18000f4a4-18000f766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18000f4a4(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  puVar1 = param_1 + 0x1500;
  puVar2 = param_1 + 0xed8;
  puVar3 = param_1 + 0x84c;
  puVar4 = param_1 + 0x8b0;
  FUN_1800111b4(param_1,param_2,param_1 + 0x6b4,puVar3,puVar4,puVar2,puVar1);
  *(undefined4 *)(param_1 + 0x667) = param_2;
  *param_1 = &PTR_FUN_180063dd0;
  param_1[0x6b5] = param_1;
  param_1[0x666] = 0;
  param_1[0x53d] = &PTR_FUN_180063dc8;
  param_1[0x6b6] = 0;
  *(undefined4 *)(param_1 + 0x6ba) = 1;
  param_1[0x6bb] = 0;
  *(undefined4 *)(param_1 + 0x6bc) = 0;
  *(undefined4 *)(param_1 + 0x6d9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x36cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36ce) = 0;
  param_1[0x6da] = 0;
  param_1[0x6db] = 0;
  param_1[0x6b7] = 0;
  param_1[0x6b8] = 0;
  param_1[0x6b9] = 0;
  FUN_180060f94((undefined1 *)(param_1 + 0x6bd),0,0x70);
  FUN_180060f94((undefined1 *)(param_1 + 0x6cb),0,0x70);
  param_1[0x6dc] = param_1;
  param_1[0x6b4] = &PTR__grErrorSetCallback_4_1800648f0;
  lVar7 = 7;
  puVar5 = param_1 + 0x6dd;
  do {
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x30;
  } while (lVar7 != 0);
  param_1[0x84a] = 0;
  param_1[0x84b] = 0;
  FUN_180060f94((undefined1 *)(param_1 + 0x6dd),0,0xa80);
  FUN_180060f94((undefined1 *)(param_1 + 0x82d),0,0xb8);
  param_1[0x844] = 0;
  param_1[0x845] = 0;
  param_1[0x846] = 0;
  param_1[0x847] = 0;
  param_1[0x848] = 0;
  param_1[0x849] = 0;
  FUN_180012690(puVar3,param_1);
  param_1[0x89c] = param_1;
  *puVar3 = &PTR_FUN_180064990;
  *(undefined4 *)(param_1 + 0x8a7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x453c) = 0;
  param_1[0x8a8] = 0;
  param_1[0x8a9] = 0;
  *(undefined4 *)(param_1 + 0x8aa) = 0;
  uVar6 = thunk_FUN_180060a9c(0xc000);
  param_1[0x8ab] = uVar6;
  param_1[0x8ac] = 0x400;
  param_1[0x8ad] = param_1 + 0x8aa;
  param_1[0x8ae] = 0;
  param_1[0x8af] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44d4) = 0;
  param_1[0x8a4] = 0;
  param_1[0x8a5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4494) = 0;
  param_1[0x894] = 0;
  param_1[0x895] = 0;
  param_1[0x896] = 0;
  param_1[0x898] = 0;
  param_1[0x899] = 0;
  *(undefined1 *)(param_1 + 0x897) = 0;
  FUN_1800237c8(puVar4,param_1,param_1 + 0x5b2,0);
  FUN_1800237c8(puVar2,param_1,param_1 + 0x5e6,1);
  FUN_1800237c8(puVar1,param_1,param_1 + 0x61a,2);
  param_1[0x1b28] = puVar4;
  param_1[0x1b29] = puVar2;
  param_1[0x1b2a] = puVar1;
  FUN_180060f94((undefined1 *)(param_1 + 0x674),0,0x200);
  return param_1;
}

