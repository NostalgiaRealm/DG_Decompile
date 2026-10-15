/*
 * FUN_1004f260 at 1004f260
 * undefined FUN_1004f260(void)
 * Address ranges: 1004f260-1004f3cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1004f260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar7;
  
  puVar5 = (undefined4 *)FUN_10081cb0(0x13c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar5 + 8;
    *puVar1 = 0;
    puVar5[9] = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined8 *)(puVar5 + 0x14) = 0;
    *(undefined8 *)(puVar5 + 0x12) = 0;
    *(undefined8 *)(puVar5 + 0x16) = 0;
    *(undefined8 *)(puVar5 + 1) = 0;
    *(undefined8 *)(puVar5 + 3) = 0;
    *(undefined8 *)(puVar5 + 5) = 0;
    puVar5[7] = 0;
    *puVar5 = &PTR_FUN_1009ca60;
    puVar5[0x18] = param_1;
    puVar5[0x1a] = param_3;
    *(undefined8 *)(puVar5 + 0x4b) = 0xffffffff00000000;
    puVar5[0x4d] = 0;
    *(undefined1 *)(puVar5 + 0x4e) = 0;
    puVar5[0x19] = param_2;
    FUN_100618b0(puVar1,&DAT_1009c5d0);
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(param_3);
    if (cVar4 == '\0') {
      puVar2 = &DAT_1009c570;
    }
    else {
      puVar2 = &DAT_1009c560;
    }
    FUN_100618b0(puVar1,puVar2);
    uVar7 = *param_4;
    *(undefined8 *)(puVar5 + 0x1d) = param_4[1];
    *(undefined8 *)(puVar5 + 0x1b) = uVar7;
    uVar6 = (*pcVar3)();
    (*extraout_w11_00)(uVar6);
  }
  return puVar5;
}

