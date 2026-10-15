/*
 * FUN_1800206f0 at 1800206f0
 * undefined __cdecl FUN_1800206f0(longlong * param_1)
 * Address ranges: 1800206f0-180020833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800206f0(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 auStack_170 [44];
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((uVar1 < 0x22) && ((0x240800000U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) {
    if (uVar1 == 0x17) {
      *(undefined4 *)(lVar4 + 0x2c44) = *(undefined4 *)(lVar4 + 0x2c14);
    }
    else if (uVar1 == 0x1e) {
      *(undefined4 *)(lVar4 + 0x2c40) = *(undefined4 *)(lVar4 + 0x2c10);
    }
    else if (uVar1 == 0x21) {
      *(undefined4 *)(lVar4 + 0x2c48) = *(undefined4 *)(lVar4 + 0x2c18);
    }
  }
  else if (uVar1 == 0x1d) {
    *(undefined4 *)(lVar4 + 0x2c4c) = *(undefined4 *)(lVar4 + 0x2c1c);
    *(undefined4 *)(lVar4 + 0x2c50) = *(undefined4 *)(lVar4 + 0x2c20);
    *(undefined8 *)(lVar4 + 0x2c58) = *(undefined8 *)(lVar4 + 0x2c28);
    *(undefined4 *)(lVar4 + 0x2c60) = *(undefined4 *)(lVar4 + 0x2c30);
    *(undefined4 *)(lVar4 + 0x2c64) = *(undefined4 *)(lVar4 + 0x2c34);
  }
  else if (uVar1 == 0x29) {
    FUN_180025b18(lVar4 + 0x42a0,0,0);
    lVar3 = *(longlong *)(lVar4 + 0x44c8);
    *(undefined8 *)(lVar3 + 0x3270) = 0;
    *(undefined4 *)(lVar3 + 0x3278) = 0;
    *(undefined4 *)(lVar3 + 0x327c) = 0x3f800000;
    *(undefined8 *)(lVar3 + 0x3280) = 0;
    *(undefined8 *)(lVar3 + 0x3288) = 0;
    *(undefined4 *)(lVar3 + 0x3290) = 0;
    *(undefined4 *)(lVar3 + 0x3294) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x3298) = 0x3f800000;
    *(undefined8 *)(lVar3 + 0x329c) = 0;
    *(undefined4 *)(lVar3 + 0x32a4) = 0x3f800000;
    *(undefined8 *)(lVar3 + 0x32a8) = 0;
    *(undefined4 *)(lVar3 + 0x32b0) = 0x3f800000;
    *(undefined8 *)(lVar3 + 0x32b4) = 0;
    *(undefined4 *)(lVar3 + 0x32bc) = 0x3f800000;
    puVar2 = (undefined8 *)FUN_18000b900(auStack_170,lVar3 + 0x3270);
    thunk_FUN_1800010d8((undefined8 *)(lVar4 + 0x42a8),puVar2,0x160);
    *(undefined1 *)(lVar4 + 0x32f0) = 1;
  }
  return;
}

