/*
 * FUN_1001f930 at 1001f930
 * undefined FUN_1001f930(void)
 * Address ranges: 1001f930-1001fc3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001f930(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar1 = param_1 + 0x268a;
  puVar2 = param_1 + 0x1a81;
  puVar3 = param_1 + 0xe78;
  puVar4 = param_1 + 0xd10;
  FUN_1002d788(param_1,param_2,puVar4,param_1 + 0xe54,puVar3,puVar2,puVar1);
  *param_1 = &PTR_FUN_10094858;
  param_1[0xa56] = &PTR_FUN_100949f4;
  param_1[0xc60] = 0;
  param_1[0xc61] = param_2;
  *(undefined8 *)(param_1 + 0xc62) = 0;
  *(undefined8 *)(param_1 + 0xc64) = 0;
  *(undefined8 *)(param_1 + 0xc66) = 0;
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xc6a) = 0;
  *(undefined8 *)(param_1 + 0xc6c) = 0;
  param_1[0xc6e] = 0xffffffff;
  FUN_10029528(puVar4,param_1);
  *puVar4 = &PTR__grCheckForRoom_4_native_10094ed4;
  param_1[0xd5e] = param_1;
  iVar7 = 3;
  puVar6 = (undefined8 *)(param_1 + 0xd81);
  do {
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    iVar7 = iVar7 + -1;
    puVar6 = puVar6 + 0x24;
  } while (iVar7 != 0);
  *(undefined8 *)(param_1 + 0xe52) = 0;
  *(undefined8 *)(param_1 + 0xe3a) = 0;
  *(undefined8 *)(param_1 + 0xe38) = 0;
  *(undefined8 *)(param_1 + 0xe3e) = 0;
  *(undefined8 *)(param_1 + 0xe3c) = 0;
  *(undefined8 *)(param_1 + 0xe42) = 0;
  *(undefined8 *)(param_1 + 0xe40) = 0;
  *(undefined8 *)(param_1 + 0xe46) = 0;
  *(undefined8 *)(param_1 + 0xe44) = 0;
  *(undefined8 *)(param_1 + 0xe4a) = 0;
  *(undefined8 *)(param_1 + 0xe48) = 0;
  *(undefined8 *)(param_1 + 0xe4c) = 0;
  param_1[0xe4e] = 0;
  *(undefined8 *)(param_1 + 0xe4f) = 0;
  param_1[0xe51] = 0;
  param_1[0xe55] = param_1;
  *(undefined8 *)(param_1 + 0xe58) = 0;
  *(undefined8 *)(param_1 + 0xe5a) = 0;
  *(undefined8 *)(param_1 + 0xe5f) = 0;
  param_1[0xe61] = 0;
  *(undefined1 *)(param_1 + 0xe62) = 0;
  param_1[0xe54] = &PTR_FUN_10094f28;
  *(undefined8 *)(param_1 + 0xe56) = 0;
  param_1[0xe63] = param_1;
  *(undefined1 *)(param_1 + 0xe5c) = 0;
  *(undefined8 *)(param_1 + 0xe5d) = 0;
  *(undefined1 *)(param_1 + 0xe6d) = 0;
  *(undefined8 *)(param_1 + 0xe6e) = 0;
  param_1[0xe6c] = 0;
  param_1[0xe70] = 0;
  uVar5 = FUN_1007a040(0xc000);
  param_1[0xe71] = uVar5;
  *(undefined8 *)(param_1 + 0xe72) = 0x400;
  param_1[0xe74] = param_1 + 0xe70;
  *(undefined8 *)(param_1 + 0xe75) = 0;
  param_1[0xe77] = 0;
  *(undefined8 *)(param_1 + 0xe56) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe5d) = 0;
  *(undefined1 *)(param_1 + 0xe5c) = 0;
  param_1[0xe60] = 0;
  *(undefined8 *)(param_1 + 0xe69) = 0;
  *(undefined8 *)(param_1 + 0xe58) = 0;
  *(undefined8 *)(param_1 + 0xe5a) = 0;
  FUN_1003e0c8(puVar3,param_1,param_1 + 0xb34,0);
  FUN_1003e0c8(puVar2,param_1,param_1 + 0xb94,1);
  FUN_1003e0c8(puVar1,param_1,param_1 + 0xbf4,2);
  param_1[0x3295] = puVar1;
  *(undefined8 *)(param_1 + 0x3296) = 0;
  *(undefined8 *)(param_1 + 0x3298) = 0;
  param_1[0x3293] = puVar3;
  param_1[0x3294] = puVar2;
  return param_1;
}

