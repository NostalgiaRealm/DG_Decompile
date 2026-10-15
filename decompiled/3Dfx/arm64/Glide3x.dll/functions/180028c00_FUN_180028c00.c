/*
 * FUN_180028c00 at 180028c00
 * undefined8 __cdecl FUN_180028c00(longlong * param_1, ulonglong param_2)
 * Address ranges: 180028c00-180028de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180028c00(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 local_180;
  undefined8 uStack_178;
  longlong local_170 [41];
  undefined4 local_28;
  
  uVar6 = (uint)param_2;
  uVar7 = 0;
  if ((uVar6 < 0x22) && ((0x240800000U >> (param_2 & 0x3f) & 1) != 0)) {
    FUN_180010b18((longlong)param_1,1);
    if (uVar6 == 0x17) {
      *(undefined4 *)((longlong)param_1 + 0x2c44) = *(undefined4 *)((longlong)param_1 + 0x2c14);
    }
    else if (uVar6 == 0x1e) {
      *(int *)(param_1 + 0x588) = (int)param_1[0x582];
    }
    else if (uVar6 == 0x21) {
      *(int *)(param_1 + 0x589) = (int)param_1[0x583];
    }
    FUN_1800109c0((longlong)param_1);
  }
  else if (uVar6 == 0x1d) {
    (**(code **)(*param_1 + 0x200))(param_1);
  }
  else if (uVar6 == 0x29) {
    FUN_18002d0f8((longlong)(param_1 + 0x84c),0,0);
    lVar5 = param_1[0x891];
    *(undefined8 *)(lVar5 + 0x3270) = 0;
    *(undefined4 *)(lVar5 + 0x3278) = 0;
    *(undefined4 *)(lVar5 + 0x327c) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x3280) = 0;
    *(undefined8 *)(lVar5 + 0x3288) = 0;
    *(undefined4 *)(lVar5 + 0x3290) = 0;
    *(undefined4 *)(lVar5 + 0x3294) = 0x3f800000;
    *(undefined4 *)(lVar5 + 0x3298) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x329c) = 0;
    *(undefined4 *)(lVar5 + 0x32a4) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x32a8) = 0;
    *(undefined4 *)(lVar5 + 0x32b0) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x32b4) = 0;
    *(undefined4 *)(lVar5 + 0x32bc) = 0x3f800000;
    local_170[0x28] = 0xffffffff00000000;
    local_28 = 0;
    uStack_178 = 0;
    local_180 = 0;
    local_170[1] = 0;
    local_170[0] = 0;
    local_170[3] = 0;
    local_170[2] = 0;
    local_170[5] = 0;
    local_170[4] = 0;
    local_170[7] = 0;
    local_170[6] = 0;
    local_170[9] = 0;
    local_170[8] = 0;
    local_170[0xb] = 0;
    local_170[10] = 0;
    local_170[0xd] = 0;
    local_170[0xc] = 0;
    local_170[0xf] = 0;
    local_170[0xe] = 0;
    local_170[0x11] = 0;
    local_170[0x10] = 0;
    local_170[0x13] = 0;
    local_170[0x12] = 0;
    local_170[0x15] = 0;
    local_170[0x14] = 0;
    local_170[0x17] = 0;
    local_170[0x16] = 0;
    local_170[0x19] = 0;
    local_170[0x18] = 0;
    local_170[0x1b] = 0;
    local_170[0x1a] = 0;
    local_170[0x1d] = 0;
    local_170[0x1c] = 0;
    local_170[0x1f] = 0;
    local_170[0x1e] = 0;
    local_170[0x21] = 0;
    local_170[0x20] = 0;
    local_170[0x23] = 0;
    local_170[0x22] = 0;
    local_170[0x25] = 0;
    local_170[0x24] = 0;
    local_170[0x27] = 0;
    local_170[0x26] = 0;
    lVar4 = 0;
    do {
      bVar2 = (&DAT_180066988)[lVar4];
      cVar3 = (&DAT_180066978)[lVar4];
      lVar1 = lVar4 + 1;
      *(uint *)((longlong)&local_180 + lVar4 * 0x18 + 4) = (uint)bVar2;
      *(int *)(local_170 + lVar4 * 3 + -1) = (int)cVar3;
      local_170[lVar4 * 3] = lVar5 + 0x3270 + (ulonglong)bVar2 * 4;
      lVar4 = lVar1;
    } while (lVar1 != 0xe);
    FUN_18000b9a0((longlong)&local_180,lVar5 + 0x3270,0,0,1);
    thunk_FUN_1800010d8(param_1 + 0x84d,&local_180,0x160);
    *(undefined1 *)(param_1 + 0x65e) = 1;
    uVar7 = 1;
  }
  return uVar7;
}

