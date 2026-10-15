/*
 * FUN_100ab978 at 100ab978
 * undefined FUN_100ab978(void)
 * Address ranges: 100ab978-100abb63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ab978(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  param_2 = param_2 * 0x2c;
  *(uint *)(param_1 + 0x1ce40) = (uint)(byte)(&DAT_10136edc)[param_2];
  *(uint *)(param_1 + 0x1ce44) = (uint)(byte)(&DAT_10136ede)[param_2];
  *(uint *)(param_1 + 0x1ce48) = (uint)(byte)(&DAT_10136ee0)[param_2];
  *(uint *)(param_1 + 0x1ce4c) = (uint)(byte)(&DAT_10136ee2)[param_2];
  *(uint *)(param_1 + 0x1ce50) = (uint)(byte)(&DAT_10136edd)[param_2];
  *(uint *)(param_1 + 0x1ce54) = (uint)(byte)(&DAT_10136edf)[param_2];
  *(uint *)(param_1 + 0x1ce58) = (uint)(byte)(&DAT_10136ee1)[param_2];
  *(uint *)(param_1 + 0x1ce5c) = (uint)(byte)(&DAT_10136ee3)[param_2];
  *(uint *)(param_1 + 0x1ce60) = 8 - (uint)(byte)(&DAT_10136edc)[param_2];
  *(uint *)(param_1 + 0x1ce64) = 8 - (uint)(byte)(&DAT_10136ede)[param_2];
  *(uint *)(param_1 + 0x1ce68) = 8 - (uint)(byte)(&DAT_10136ee0)[param_2];
  *(uint *)(param_1 + 0x1ce6c) = 8 - (uint)(byte)(&DAT_10136ee2)[param_2];
  *(undefined4 *)(param_1 + 0x1ce70) = *(undefined4 *)(&DAT_10136ee4 + param_2);
  puVar1 = (uint *)(param_1 + 0x1ced0);
  *puVar1 = (uint)(byte)(&DAT_10136ee8)[param_2];
  puVar2 = (uint *)(param_1 + 0x1ced4);
  *puVar2 = (uint)(byte)(&DAT_10136ee9)[param_2];
  puVar3 = (uint *)(param_1 + 0x1ced8);
  *puVar3 = (uint)(byte)(&DAT_10136eea)[param_2];
  puVar5 = (uint *)(param_1 + 0x1cedc);
  *puVar5 = (uint)(byte)(&DAT_10136eeb)[param_2];
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x1cebc) = param_4;
    *(undefined4 *)(param_1 + 0x1cec0) = 0x3d000000;
    if (param_3 - 0x17U < 2) {
      *(undefined4 *)(param_1 + 0x1cec4) = 0x447fc000;
      *(undefined4 *)(param_1 + 0x1cec8) = 0x3ff;
      *puVar1 = 0x3ff;
      *puVar2 = 0x3ff;
      *puVar3 = 0x3ff;
      uVar4 = 3;
    }
    else if ((param_3 - 9U & 0xfffffffd) == 0) {
      *(undefined4 *)(param_1 + 0x1cec4) = 0x477fff00;
      uVar4 = 0xffff;
      *(undefined4 *)(param_1 + 0x1cec8) = 0xffff;
      *puVar1 = 0xffff;
      *puVar2 = 0xffff;
      *puVar3 = 0xffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x1cec4) = 0x437f0000;
      puVar5 = (uint *)(param_1 + 0x1cec8);
      uVar4 = 0xff;
    }
    *puVar5 = uVar4;
  }
  return;
}

