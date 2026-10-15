/*
 * FUN_10007e33 at 10007e33
 * undefined4 __thiscall FUN_10007e33(void * this, undefined4 * param_1)
 * Address ranges: 10007e33-10007f09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10007e33(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort in_FPUControlWord;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  uint *local_c;
  uint *local_8;
  
  puVar1 = param_1;
  uVar2 = 0x8876086c;
  if (param_1 != (undefined4 *)0x0) {
    local_10 = this;
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
    local_c = &local_14;
    local_8 = (uint *)CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_14 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_14 = (uint)in_FPUControlWord;
      local_8 = (uint *)(in_FPUControlWord & 0xf0ff | 0x23f);
    }
    local_18 = puVar1[0x10];
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = puVar1[4];
    uStack_44 = puVar1[5];
    uStack_40 = puVar1[6];
    uStack_3c = puVar1[7];
    local_38 = puVar1[8];
    uStack_34 = puVar1[9];
    uStack_30 = puVar1[10];
    uStack_2c = puVar1[0xb];
    local_28 = puVar1[0xc];
    uStack_24 = puVar1[0xd];
    uStack_20 = puVar1[0xe];
    uStack_1c = puVar1[0xf];
    FUN_10019abc(local_10,&local_58);
    local_8 = &local_14;
    uVar2 = 0;
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar2;
}

