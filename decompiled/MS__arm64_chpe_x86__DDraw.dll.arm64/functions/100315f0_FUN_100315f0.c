/*
 * FUN_100315f0 at 100315f0
 * undefined FUN_100315f0(void)
 * Address ranges: 100315f0-1003171f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100315f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  param_2 = param_2 * 0x2c;
  *(uint *)(param_1 + 0xce40) = (uint)(byte)(&DAT_100bb79c)[param_2];
  *(uint *)(param_1 + 0xce44) = (uint)(byte)(&DAT_100bb79e)[param_2];
  *(uint *)(param_1 + 0xce48) = (uint)(byte)(&DAT_100bb7a0)[param_2];
  *(uint *)(param_1 + 0xce4c) = (uint)(byte)(&DAT_100bb7a2)[param_2];
  *(uint *)(param_1 + 0xce50) = (uint)(byte)(&DAT_100bb79d)[param_2];
  *(uint *)(param_1 + 0xce54) = (uint)(byte)(&DAT_100bb79f)[param_2];
  *(uint *)(param_1 + 0xce58) = (uint)(byte)(&DAT_100bb7a1)[param_2];
  *(uint *)(param_1 + 0xce5c) = (uint)(byte)(&DAT_100bb7a3)[param_2];
  *(uint *)(param_1 + 0xce60) = 8 - (uint)(byte)(&DAT_100bb79c)[param_2];
  *(uint *)(param_1 + 0xce64) = 8 - (uint)(byte)(&DAT_100bb79e)[param_2];
  *(uint *)(param_1 + 0xce68) = 8 - (uint)(byte)(&DAT_100bb7a0)[param_2];
  *(uint *)(param_1 + 0xce6c) = 8 - (uint)(byte)(&DAT_100bb7a2)[param_2];
  *(undefined4 *)(param_1 + 0xce70) = *(undefined4 *)(&DAT_100bb7a4 + param_2);
  *(uint *)(param_1 + 0xced0) = (uint)(byte)(&DAT_100bb7a8)[param_2];
  *(uint *)(param_1 + 0xced4) = (uint)(byte)(&DAT_100bb7a9)[param_2];
  *(uint *)(param_1 + 0xced8) = (uint)(byte)(&DAT_100bb7aa)[param_2];
  *(uint *)(param_1 + 0xcedc) = (uint)(byte)(&DAT_100bb7ab)[param_2];
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0xcebc) = param_4;
    *(undefined4 *)(param_1 + 0xcec0) = 0x3d000000;
    if (param_3 - 0x17U < 2) {
      *(undefined4 *)(param_1 + 0xcec8) = 0x3ff;
      *(undefined4 *)(param_1 + 0xcec4) = 0x447fc000;
      *(undefined4 *)(param_1 + 0xced0) = 0x3ff;
      *(undefined4 *)(param_1 + 0xced4) = 0x3ff;
      *(undefined4 *)(param_1 + 0xced8) = 0x3ff;
      *(undefined4 *)(param_1 + 0xcedc) = 3;
    }
    else if ((param_3 - 9U & 0xfffffffd) == 0) {
      *(undefined4 *)(param_1 + 0xcec8) = 0xffff;
      *(undefined4 *)(param_1 + 0xced0) = 0xffff;
      *(undefined4 *)(param_1 + 0xced4) = 0xffff;
      *(undefined4 *)(param_1 + 0xcec4) = 0x477fff00;
      *(undefined4 *)(param_1 + 0xced8) = 0xffff;
      *(undefined4 *)(param_1 + 0xcedc) = 0xffff;
    }
    else {
      *(undefined4 *)(param_1 + 0xcec8) = 0xff;
      *(undefined4 *)(param_1 + 0xcec4) = 0x437f0000;
    }
  }
  return;
}

