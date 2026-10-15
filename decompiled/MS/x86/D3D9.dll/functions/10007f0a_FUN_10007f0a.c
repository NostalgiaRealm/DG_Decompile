/*
 * FUN_10007f0a at 10007f0a
 * undefined4 __thiscall FUN_10007f0a(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10007f0a-10008010
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10007f0a(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort in_FPUControlWord;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_14;
  void *local_10;
  uint *local_c;
  uint local_8;
  
  puVar1 = param_2;
  uVar2 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    local_10 = this;
    FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
    local_c = &local_14;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_14 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_14 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    local_84 = *puVar1;
    local_80 = puVar1[1];
    local_38 = puVar1[0x13];
    uStack_34 = puVar1[0x14];
    uStack_30 = puVar1[0x15];
    uStack_2c = puVar1[0x16];
    uStack_7c = puVar1[2];
    uStack_78 = puVar1[3];
    uStack_74 = puVar1[4];
    local_70 = puVar1[5];
    uStack_6c = puVar1[6];
    uStack_68 = puVar1[7];
    uStack_64 = puVar1[8];
    local_60 = puVar1[9];
    uStack_5c = puVar1[10];
    uStack_58 = puVar1[0xb];
    uStack_54 = puVar1[0xc];
    local_50 = puVar1[0xd];
    uStack_4c = puVar1[0xe];
    uStack_48 = puVar1[0xf];
    local_44 = puVar1[0x10];
    uStack_40 = puVar1[0x11];
    uStack_3c = puVar1[0x12];
    local_28 = puVar1[0x17];
    local_24 = puVar1[0x18];
    local_20 = puVar1[0x19];
    FUN_10019971(local_10,param_1,&local_84);
    uVar2 = 0;
    FUN_10003e89((char *)((int)&param_2 + 3));
  }
  return uVar2;
}

