/*
 * FUN_100348d8 at 100348d8
 * undefined FUN_100348d8(void)
 * Address ranges: 100348d8-10034cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100348d8(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined2 *param_7,undefined8 *param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined1 param_17,
            undefined4 param_18,byte param_19)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined4 *)FUN_100913c0(0x1f0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar2 = 0;
    if (param_5 != 0) {
      iVar2 = param_5 + 0x3c;
    }
    *puVar3 = &PTR_FUN_100b1ae8;
    puVar4 = param_3;
    if (param_3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_100913c0(0xd0);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[0x14] = param_6;
        *(undefined8 *)(puVar4 + 0x15) = 0;
        puVar4[0x13] = param_4;
        *(undefined8 *)(puVar4 + 0x17) = 0xffffffff00000000;
        *(undefined8 *)(puVar4 + 0x22) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x26) = 0;
        *(undefined8 *)(puVar4 + 0x24) = 0;
        *(undefined8 *)(puVar4 + 0x2a) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        puVar4[0x1b] = param_11;
        puVar4[0x1c] = param_13;
        puVar4[1] = iVar2;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0xe) = 0;
        puVar4[0x12] = 0;
        *(undefined1 *)(puVar4 + 0x12) = param_17;
        *puVar4 = &PTR_FUN_100b1b00;
        *(undefined8 *)(puVar4 + 0x2c) = 0;
        *(undefined8 *)(puVar4 + 0x2e) = 0;
        *(undefined8 *)(puVar4 + 0x30) = 0;
        *(undefined8 *)(puVar4 + 0x32) = 0;
      }
    }
    puVar3[1] = puVar4;
    *(undefined2 *)(puVar3 + 2) = 0;
    *puVar3 = &PTR_FUN_100b2670;
    puVar1 = (undefined8 *)(puVar3 + 3);
    *puVar1 = 0;
    puVar3[5] = 0;
    if ((puVar4 != (undefined4 *)0x0) && (param_3 == (undefined4 *)0x0)) {
      puVar4[0x32] = param_19 | 4;
    }
    *(undefined8 *)(puVar3 + 8) = 0;
    puVar3[10] = 0;
    puVar4 = puVar3 + 0xb;
    *puVar4 = 0;
    puVar3[0xc] = 0;
    *(undefined8 *)(puVar3 + 0xf) = 0;
    *(undefined8 *)(puVar3 + 0xd) = 0;
    *(undefined8 *)(puVar3 + 0x13) = 0;
    *(undefined8 *)(puVar3 + 0x11) = 0;
    *(undefined8 *)(puVar3 + 0x17) = 0;
    *(undefined8 *)(puVar3 + 0x15) = 0;
    *(undefined8 *)(puVar3 + 0x1b) = 0;
    *(undefined8 *)(puVar3 + 0x19) = 0;
    *(undefined8 *)(puVar3 + 0x1f) = 0;
    *(undefined8 *)(puVar3 + 0x1d) = 0;
    *(undefined8 *)(puVar3 + 0x23) = 0;
    *(undefined8 *)(puVar3 + 0x21) = 0;
    *(undefined8 *)(puVar3 + 0x27) = 0;
    *(undefined8 *)(puVar3 + 0x25) = 0;
    *(undefined8 *)(puVar3 + 0x2b) = 0;
    *(undefined8 *)(puVar3 + 0x29) = 0;
    *(undefined8 *)(puVar3 + 0x2f) = 0;
    *(undefined8 *)(puVar3 + 0x2d) = 0;
    *(undefined8 *)(puVar3 + 0x33) = 0;
    *(undefined8 *)(puVar3 + 0x31) = 0;
    *(undefined8 *)(puVar3 + 0x37) = 0;
    *(undefined8 *)(puVar3 + 0x35) = 0;
    *(undefined8 *)(puVar3 + 0x3b) = 0;
    *(undefined8 *)(puVar3 + 0x39) = 0;
    puVar3[0x3d] = 0;
    *(undefined8 *)(puVar3 + 0x41) = 0;
    *puVar3 = &PTR_FUN_100b24d0;
    *(undefined8 *)(puVar3 + 0x43) = 0;
    puVar3[0x3e] = param_2;
    *(undefined8 *)(puVar3 + 0x45) = 0;
    puVar3[0x3f] = param_5;
    puVar3[0x47] = 0;
    puVar3[0x40] = param_1;
    *(ulonglong *)(puVar3 + 0x52) =
         CONCAT26(param_7[0xc],CONCAT24(param_7[10],CONCAT22(param_7[2],*param_7)));
    uVar9 = *param_8;
    uVar8 = param_8[3];
    uVar7 = param_8[2];
    *(undefined8 *)(puVar3 + 0x56) = param_8[1];
    *(undefined8 *)(puVar3 + 0x54) = uVar9;
    *(undefined8 *)(puVar3 + 0x5a) = uVar8;
    *(undefined8 *)(puVar3 + 0x58) = uVar7;
    uVar9 = param_8[4];
    uVar8 = param_8[7];
    uVar7 = param_8[6];
    *(undefined8 *)(puVar3 + 0x5e) = param_8[5];
    *(undefined8 *)(puVar3 + 0x5c) = uVar9;
    *(undefined8 *)(puVar3 + 0x62) = uVar8;
    *(undefined8 *)(puVar3 + 0x60) = uVar7;
    uVar9 = param_8[8];
    uVar8 = param_8[0xb];
    uVar7 = param_8[10];
    *(undefined8 *)(puVar3 + 0x66) = param_8[9];
    *(undefined8 *)(puVar3 + 100) = uVar9;
    *(undefined8 *)(puVar3 + 0x6a) = uVar8;
    *(undefined8 *)(puVar3 + 0x68) = uVar7;
    uVar7 = param_8[0xc];
    *(undefined8 *)(puVar3 + 0x6e) = param_8[0xd];
    *(undefined8 *)(puVar3 + 0x6c) = uVar7;
    *(undefined8 *)(puVar3 + 0x70) = param_8[0xe];
    puVar3[0x72] = *(undefined4 *)(param_8 + 0xf);
    puVar3[0x73] = param_9;
    puVar3[0x74] = 0;
    puVar3[0x75] = param_15;
    *(undefined8 *)(puVar3 + 0x76) = 0x100000000;
    puVar3[0x78] = 0;
    *(undefined8 *)(puVar3 + 0x4a) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    puVar3[0x4c] = 0;
    *(undefined8 *)(puVar3 + 0x4f) = 0;
    *(undefined8 *)(puVar3 + 0x4d) = 0;
    puVar3[0x51] = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    if (puVar3[0x40] != 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5);
    }
    FUN_10045638(puVar4,&DAT_100b1a30,0);
    FUN_10045638(puVar4,&DAT_100b1860,puVar1);
    uVar6 = 0;
    FUN_10045638(puVar4,&DAT_100b1870,0);
    FUN_10045638(puVar4,&DAT_100b1880,uVar6 & 0xffffffff);
    uVar6 = 0;
    FUN_10045638(puVar4,&DAT_100b1890,0);
    FUN_10045638(puVar4,&DAT_100b18a0,uVar6 & 0xffffffff);
    FUN_10045638(puVar4,&DAT_100b18d0,puVar1);
    *puVar3 = &PTR_FUN_100b24d0;
    puVar3[0x7a] = &PTR_FUN_100b24c8;
  }
  return puVar3;
}

