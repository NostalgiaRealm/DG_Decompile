/*
 * FUN_18001cab8 at 18001cab8
 * undefined8 * __fastcall FUN_18001cab8(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 18001cab8-18001cdc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18001cab8(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  puVar1 = param_1 + 0x13ca;
  puVar2 = param_1 + 0xda2;
  puVar3 = param_1 + 0x77a;
  FUN_180022b3c(param_1,param_2,param_1 + 0x684,param_1 + 0x75c,puVar3,puVar2,puVar1);
  *(undefined4 *)(param_1 + 0x637) = param_2;
  *param_1 = &PTR_FUN_180063008;
  param_1[0x685] = param_1;
  param_1[0x636] = 0;
  param_1[0x52e] = &PTR_FUN_180063000;
  param_1[0x686] = 0;
  *(undefined4 *)(param_1 + 0x68a) = 1;
  param_1[0x68b] = 0;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0x6a9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x354c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x354e) = 0;
  param_1[0x6aa] = 0;
  param_1[0x6ab] = 0;
  param_1[0x687] = 0;
  param_1[0x688] = 0;
  param_1[0x689] = 0;
  FUN_18005f814((undefined1 *)(param_1 + 0x68d),0,0x70);
  FUN_18005f814((undefined1 *)(param_1 + 0x69b),0,0x70);
  param_1[0x6ac] = param_1;
  param_1[0x684] = &PTR_ConvertAndDownloadRLE_180063a88;
  lVar6 = 3;
  puVar4 = param_1 + 0x6ad;
  do {
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 0x30;
  } while (lVar6 != 0);
  param_1[0x75a] = 0;
  param_1[0x75b] = 0;
  FUN_18005f814((undefined1 *)(param_1 + 0x6ad),0,0x480);
  FUN_18005f814((undefined1 *)(param_1 + 0x73d),0,0xb8);
  param_1[0x754] = 0;
  param_1[0x755] = 0;
  param_1[0x756] = 0;
  param_1[0x757] = 0;
  param_1[0x758] = 0;
  param_1[0x759] = 0;
  *(undefined4 *)(param_1 + 0x75f) = 0;
  param_1[0x760] = 0;
  param_1[0x761] = 0;
  param_1[0x762] = 0;
  *(undefined1 *)(param_1 + 0x763) = 0;
  param_1[0x764] = 0;
  param_1[0x765] = 0;
  param_1[0x75c] = &PTR_FUN_180063b28;
  param_1[0x75d] = param_1;
  param_1[0x75e] = 0;
  param_1[0x766] = 0;
  *(undefined4 *)(param_1 + 0x767) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b3c) = 0;
  param_1[0x768] = param_1;
  *(undefined4 *)(param_1 + 0x771) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b8c) = 0;
  param_1[0x772] = 0;
  param_1[0x773] = 0;
  *(undefined4 *)(param_1 + 0x774) = 0;
  uVar5 = thunk_FUN_18005db9c(0xc000);
  param_1[0x775] = uVar5;
  param_1[0x776] = 0x400;
  param_1[0x777] = param_1 + 0x774;
  param_1[0x778] = 0;
  param_1[0x779] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b34) = 0;
  param_1[0x76e] = 0;
  param_1[0x76f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3af4) = 0;
  param_1[0x760] = 0;
  param_1[0x761] = 0;
  param_1[0x762] = 0;
  param_1[0x764] = 0;
  param_1[0x765] = 0;
  *(undefined1 *)(param_1 + 0x763) = 0;
  FUN_180031218(puVar3,param_1,param_1 + 0x59e,0);
  FUN_180031218(puVar2,param_1,param_1 + 0x5ce,1);
  FUN_180031218(puVar1,param_1,param_1 + 0x5fe,2);
  param_1[0x19f2] = puVar3;
  param_1[0x19f3] = puVar2;
  param_1[0x19f4] = puVar1;
  FUN_18005f814((undefined1 *)(param_1 + 0x644),0,0x200);
  return param_1;
}

