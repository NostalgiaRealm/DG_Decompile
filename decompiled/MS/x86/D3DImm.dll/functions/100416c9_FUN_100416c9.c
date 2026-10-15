/*
 * FUN_100416c9 at 100416c9
 * int __stdcall FUN_100416c9(uint param_1, int * param_2)
 * Address ranges: 100416c9-100417ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100416c9(uint param_1,int *param_2)

{
  BOOL BVar1;
  int iVar2;
  ushort in_FPUControlWord;
  int local_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  uint local_10;
  void *local_c;
  uint *local_8;
  
  if ((param_2 == (int *)0x0) || (((*param_2 != 1 && (*param_2 != 2)) && (*param_2 != 3)))) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar2 = 0;
  }
  if (-1 < iVar2) {
    BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar1 == 0) {
      FUN_1003c603();
    }
    local_8 = &local_10;
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
    }
    local_84 = *param_2;
    local_80 = param_2[1];
    local_38 = param_2[0x13];
    iStack_34 = param_2[0x14];
    iStack_30 = param_2[0x15];
    iStack_2c = param_2[0x16];
    iStack_7c = param_2[2];
    iStack_78 = param_2[3];
    iStack_74 = param_2[4];
    local_70 = param_2[5];
    iStack_6c = param_2[6];
    iStack_68 = param_2[7];
    iStack_64 = param_2[8];
    local_60 = param_2[9];
    iStack_5c = param_2[10];
    iStack_58 = param_2[0xb];
    iStack_54 = param_2[0xc];
    local_50 = param_2[0xd];
    iStack_4c = param_2[0xe];
    iStack_48 = param_2[0xf];
    local_44 = param_2[0x10];
    iStack_40 = param_2[0x11];
    iStack_3c = param_2[0x12];
    local_1c = 0;
    local_28 = param_2[0x17];
    local_24 = param_2[0x18];
    local_20 = param_2[0x19];
    FUN_10007c95(local_c,param_1,&local_84);
    iVar2 = 0;
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return iVar2;
}

