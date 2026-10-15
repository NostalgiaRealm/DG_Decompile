/*
 * FUN_10019c65 at 10019c65
 * undefined __thiscall FUN_10019c65(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10019c65-10019d5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019c65(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  if (*(char *)((int)this + 0x3c4) == '\0') {
    puVar3 = (undefined4 *)((param_1 + 0x3d) * 0x10 + (int)this);
    *puVar3 = *param_2;
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x3d4) = param_2[1];
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x3d8) = param_2[2];
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x3dc) = param_2[3];
    (**(code **)(**(int **)((int)this + 0x14) + 0x58))(param_1,puVar3);
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + *(int *)((int)this + 0x3c0) * 4);
    *(undefined4 *)(iVar1 + 0x4a4c + param_1 * 0x10) = *param_2;
    *(undefined4 *)(iVar1 + (param_1 + 0x4a5) * 0x10) = param_2[1];
    *(undefined4 *)(iVar1 + 0x4a54 + param_1 * 0x10) = param_2[2];
    *(undefined4 *)(iVar1 + 0x4a58 + param_1 * 0x10) = param_2[3];
    pbVar2 = (byte *)(iVar1 + 0xac10 + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_1 & 7);
  }
  return;
}

