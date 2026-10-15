/*
 * FUN_100414f9 at 100414f9
 * undefined4 __stdcall FUN_100414f9(undefined4 * param_1)
 * Address ranges: 100414f9-100415f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100414f9(undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  ushort in_FPUControlWord;
  double dVar3;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  float local_18;
  uint local_10;
  void *local_c;
  uint *local_8;
  
  uVar2 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar1 == 0) {
      FUN_1003c603();
    }
    local_8 = &local_10;
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
    }
    local_1c = param_1[0x10];
    local_5c = *param_1;
    uStack_58 = param_1[1];
    uStack_54 = param_1[2];
    uStack_50 = param_1[3];
    local_4c = param_1[4];
    uStack_48 = param_1[5];
    uStack_44 = param_1[6];
    uStack_40 = param_1[7];
    local_3c = param_1[8];
    uStack_38 = param_1[9];
    uStack_34 = param_1[10];
    uStack_30 = param_1[0xb];
    local_2c = param_1[0xc];
    uStack_28 = param_1[0xd];
    uStack_24 = param_1[0xe];
    uStack_20 = param_1[0xf];
    dVar3 = 0.001;
    FUN_1005c520();
    local_18 = (float)dVar3;
    FUN_10007de0(local_c,&local_5c);
    uVar2 = 0;
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return uVar2;
}

