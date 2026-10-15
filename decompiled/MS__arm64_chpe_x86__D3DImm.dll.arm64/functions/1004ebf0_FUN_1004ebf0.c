/*
 * FUN_1004ebf0 at 1004ebf0
 * undefined FUN_1004ebf0(void)
 * Address ranges: 1004ebf0-1004edc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004ebf0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(param_2);
  if (iVar2 != 0) {
    iVar4 = -0x7ff8ffa9;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
      iVar4 = FUN_10066c40(iVar2 + 4,param_3,param_4,0,param_5);
    }
    goto LAB_1004ed94;
  }
  puVar3 = (undefined4 *)FUN_10081cb0(100);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = -0x7ff8fff2;
    uVar5 = 0;
LAB_1004ed38:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined8 *)(puVar3 + 5) = 0;
    *(undefined8 *)(puVar3 + 3) = 0;
    *(undefined8 *)(puVar3 + 9) = 0;
    *(undefined8 *)(puVar3 + 7) = 0;
    *(undefined8 *)(puVar3 + 0xd) = 0;
    *(undefined8 *)(puVar3 + 0xb) = 0;
    *(undefined8 *)(puVar3 + 0x11) = 0;
    *(undefined8 *)(puVar3 + 0xf) = 0;
    *(undefined8 *)(puVar3 + 0x15) = 0;
    *(undefined8 *)(puVar3 + 0x13) = 0;
    puVar3[0x17] = 0;
    *puVar3 = &PTR_FUN_1009ca5c;
    puVar3[0x18] = param_2;
    FUN_10066be0(puVar3 + 1,&DAT_1009c5d0);
    FUN_10066be0(extraout_x12 & 0xffffffff,&DAT_1009c4c0);
    FUN_10066be0(extraout_x12_00 & 0xffffffff,&DAT_1009c4d0);
    iVar4 = -0x7ff8ffa9;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
      iVar4 = FUN_10066c40(puVar3 + 1,param_3,param_4,0,param_5);
    }
    if (iVar4 != 0) {
      *puVar3 = &PTR_FUN_1009ca5c;
      uVar5 = FUN_10081d50(puVar3,100);
      goto LAB_1004ed38;
    }
    uVar5 = 0;
  }
  (*pcVar1)(uVar5,puVar3);
  (*extraout_w11_00)(param_2,extraout_x1 & 0xffffffff);
LAB_1004ed94:
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar4;
}

