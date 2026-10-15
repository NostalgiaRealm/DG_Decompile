/*
 * FUN_10011898 at 10011898
 * undefined FUN_10011898(void)
 * Address ranges: 10011898-10011a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011898(int *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint extraout_w1;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_e0 [8];
  int iStack_d8;
  uint uStack_d4;
  undefined6 uStack_c6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined2 uStack_98;
  undefined1 auStack_96 [3];
  char acStack_93 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  char local_44 [2];
  undefined2 uStack_42;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar4 = param_2 * 3;
  uVar2 = *param_4;
  *(undefined8 *)(*param_1 + param_2 * 0xc0) = param_3;
  *(undefined4 *)(*param_1 + param_2 * 0xc0 + 8) = uVar2;
  FUN_10083260(local_e0);
  uStack_d4 = 0x10;
  iStack_d8 = 1;
  local_44[0] = '\0';
  if ((extraout_w1 >> 1 & 1) != 0) {
    local_a0 = 4;
    local_a4 = 0x4040400;
    local_44[1] = 5;
    iStack_d8 = 2;
    uStack_d4 = 0x14;
  }
  if ((extraout_w1 >> 2 & 1) != 0) {
    uStack_9a = 4;
    uStack_9c = 0x400;
    uStack_98 = 4;
    uStack_99 = (undefined1)(uStack_d4 >> 2);
    local_44[iStack_d8] = '\x06';
    iStack_d8 = iStack_d8 + 1;
    uStack_d4 = uStack_d4 + 4;
  }
  uVar6 = 0;
  iVar5 = 0;
  do {
    if ((8 << (ulonglong)(uVar6 & 0x1f) & extraout_w1) != 0) {
      local_30 = 0x100000000;
      uStack_28 = 0x300000002;
      auStack_96[iVar5 + 2] = 0;
      iVar1 = (extraout_w1 >> (ulonglong)((uVar6 + 9) * 2 & 0x1f) & 3) + 1;
      cVar3 = (char)iVar1;
      acStack_93[iVar5] = cVar3;
      acStack_93[iVar5 + 1] = cVar3 * '\x04';
      acStack_93[iVar5 + 2] = (char)(uStack_d4 >> 2);
      *(undefined1 *)((int)&uStack_90 + iVar5) = *(undefined1 *)((int)&uStack_38 + iVar1 * 4 + 4);
      *(undefined1 *)((int)&uStack_90 + iVar5 + 1) = 0;
      local_44[iStack_d8] = (char)uVar6 + '\a';
      iStack_d8 = iStack_d8 + 1;
      uStack_d4 = (byte)acStack_93[iVar5 + 1] + uStack_d4;
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 8;
  } while (uVar6 < 8);
  iVar4 = *param_1 + iVar4 * 0x40;
  *(ulonglong *)(iVar4 + 0x14) = CONCAT44(uStack_d4,iStack_d8);
  *(ulonglong *)(iVar4 + 0xc) = (ulonglong)extraout_w1;
  *(ulonglong *)(iVar4 + 0x24) = CONCAT62(uStack_c6,3);
  *(undefined8 *)(iVar4 + 0x1c) = 0x10040000000001;
  *(undefined8 *)(iVar4 + 0x34) = uStack_b8;
  *(undefined8 *)(iVar4 + 0x2c) = local_c0;
  *(ulonglong *)(iVar4 + 0x44) = CONCAT44(local_a4,uStack_a8);
  *(undefined8 *)(iVar4 + 0x3c) = uStack_b0;
  *(ulonglong *)(iVar4 + 0x54) = CONCAT62(_auStack_96,uStack_98);
  *(ulonglong *)(iVar4 + 0x4c) =
       CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,CONCAT22(uStack_9e,local_a0))));
  *(undefined8 *)(iVar4 + 100) = uStack_88;
  *(undefined8 *)(iVar4 + 0x5c) = uStack_90;
  *(undefined8 *)(iVar4 + 0x74) = uStack_78;
  *(undefined8 *)(iVar4 + 0x6c) = local_80;
  *(undefined8 *)(iVar4 + 0x84) = uStack_68;
  *(undefined8 *)(iVar4 + 0x7c) = uStack_70;
  *(undefined8 *)(iVar4 + 0x94) = uStack_58;
  *(undefined8 *)(iVar4 + 0x8c) = local_60;
  *(ulonglong *)(iVar4 + 0xa4) =
       CONCAT26(uStack_42,CONCAT15(local_44[1],CONCAT14(local_44[0],uStack_48)));
  *(undefined8 *)(iVar4 + 0x9c) = uStack_50;
  *(undefined8 *)(iVar4 + 0xb4) = uStack_38;
  *(undefined8 *)(iVar4 + 0xac) = local_40;
  return;
}

