/*
 * FUN_18011cc78 at 18011cc78
 * undefined FUN_18011cc78(void)
 * Address ranges: 18011cc78-18011cd07;18011cd18-18011ce67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18011cc78(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x400);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar7 * 8) == 0) {
        if ((int)uVar7 != -1) goto LAB_18011cd38;
        break;
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
    } while (uVar1 < uVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x404);
  if (uVar2 == uVar1) {
    uVar2 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar2 = 0x10;
    }
    lVar6 = CONCAT44(0,uVar2) << 3;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = FUN_1802229a8(lVar6);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar6,*(undefined8 *)(param_1 + 0x3f8),
                          (ulonglong)*(uint *)(param_1 + 0x404) << 3);
    }
    uVar7 = 0xffffffff;
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x400) * 8) = 0;
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x400);
    *(uint *)(param_1 + 0x400) = *(uint *)(param_1 + 0x400) + 1;
  }
  if ((int)uVar7 != -1) {
LAB_18011cd38:
    puVar4 = (undefined4 *)FUN_1802229a8(0xad40);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      lVar6 = 0x10a;
      puVar5 = (undefined8 *)(puVar4 + 0x1de);
      do {
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        lVar6 = lVar6 + -1;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
        *(undefined4 *)(puVar5 + 5) = 0x3f800000;
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0x3f800000;
        *(undefined4 *)puVar5 = 0x3f800000;
        puVar5 = puVar5 + 8;
      } while (lVar6 != 0);
      *(undefined8 *)(puVar4 + 0x12b2) = 0;
      *(undefined8 *)(puVar4 + 0x12ae) = 0;
      *(undefined8 *)(puVar4 + 0x12b0) = 0;
      *(undefined8 *)(puVar4 + 0x2b1c) = 0;
      *(undefined8 *)(puVar4 + 0x2b1a) = 0;
      *(undefined8 *)(puVar4 + 0x2b20) = 0;
      *(undefined8 *)(puVar4 + 0x2b1e) = 0;
      *(undefined8 *)(puVar4 + 0x2b24) = 0;
      *(undefined8 *)(puVar4 + 0x2b22) = 0;
      *(undefined8 *)(puVar4 + 0x2b28) = 0;
      *(undefined8 *)(puVar4 + 0x2b26) = 0;
      *(undefined8 *)(puVar4 + 0x2b2a) = 0;
      *(undefined8 *)(puVar4 + 0x2b2e) = 0;
      *(undefined8 *)(puVar4 + 0x2b2c) = 0;
      *(undefined8 *)(puVar4 + 0x2b32) = 0;
      *(undefined8 *)(puVar4 + 0x2b30) = 0;
      *(undefined8 *)(puVar4 + 0x2b34) = 0;
      *(undefined8 *)(puVar4 + 0x2b36) = 0;
      *(undefined8 *)(puVar4 + 0x2b38) = 0;
      *(undefined2 *)(puVar4 + 0x2b3a) = 0;
      *(undefined8 *)(puVar4 + 0x2b3c) = 0;
      puVar4[0x2b3e] = 0;
      *(undefined2 *)(puVar4 + 0x2b3f) = 0;
      *(undefined1 *)((longlong)puVar4 + 0xacfe) = 0;
      *(undefined8 *)(puVar4 + 0x2b42) = 0;
      *(undefined8 *)(puVar4 + 0x2b40) = 0;
      *(undefined8 *)(puVar4 + 0x2b46) = 0;
      *(undefined8 *)(puVar4 + 0x2b44) = 0;
      *(undefined8 *)(puVar4 + 0x2b4a) = 0;
      *(undefined8 *)(puVar4 + 0x2b48) = 0;
      *(undefined8 *)(puVar4 + 0x2b4c) = 0;
      *(undefined8 *)(puVar4 + 0x2b4e) = 0;
      *(undefined8 *)(puVar4 + 0x13dc) = 0;
      *(undefined8 *)(puVar4 + 0x13da) = 0;
      *(undefined8 *)(puVar4 + 0x13e0) = 0;
      *(undefined8 *)(puVar4 + 0x13de) = 0;
      *(undefined8 *)(puVar4 + 0x13e4) = 0;
      *(undefined8 *)(puVar4 + 0x13e2) = 0;
      *(undefined8 *)(puVar4 + 0x13e8) = 0;
      *(undefined8 *)(puVar4 + 0x13e6) = 0;
    }
    *(undefined4 **)(*(longlong *)(param_1 + 0x3f8) + uVar7 * 8) = puVar4;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + uVar7 * 8);
    if (lVar6 != 0) {
      FUN_180222c50(lVar6,0,0xad40);
      return uVar7;
    }
  }
  return 0xffffffff;
}

