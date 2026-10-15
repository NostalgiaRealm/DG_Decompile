/*
 * FUN_1009abb3 at 1009abb3
 * undefined4 __stdcall FUN_1009abb3(int param_1, uint param_2, uint * param_3)
 * Address ranges: 1009abb3-1009accb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009abb3(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint *local_8;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = 0x8876086c;
  if ((param_3 != (uint *)0x0) &&
     (local_c = (uint *)FUN_10009dee((void *)(iVar1 + -0x63c8),&param_2), local_c != (uint *)0x0)) {
    local_8 = &local_10;
    param_2 = CONCAT22(param_2._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      param_2 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    *param_3 = *local_c;
    param_3[1] = local_c[1];
    param_3[2] = local_c[2];
    param_3[3] = local_c[3];
    param_3[4] = local_c[4];
    param_3[5] = local_c[5];
    param_3[6] = local_c[6];
    param_3[7] = local_c[7];
    param_3[8] = local_c[8];
    param_3[9] = local_c[9];
    param_3[10] = local_c[10];
    param_3[0xb] = local_c[0xb];
    param_3[0xc] = local_c[0xc];
    param_3[0xd] = local_c[0xd];
    param_3[0xe] = local_c[0xe];
    param_3[0xf] = local_c[0xf];
    param_3[0x10] = local_c[0x10];
    param_3[0x11] = local_c[0x11];
    param_3[0x12] = local_c[0x12];
    uVar2 = 0;
    param_3[0x13] = local_c[0x13];
    param_3[0x14] = local_c[0x14];
    param_3[0x15] = local_c[0x15];
    param_3[0x16] = local_c[0x16];
    param_3[0x17] = local_c[0x17];
    param_3[0x18] = local_c[0x18];
    param_3[0x19] = local_c[0x19];
    param_3 = &local_10;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

