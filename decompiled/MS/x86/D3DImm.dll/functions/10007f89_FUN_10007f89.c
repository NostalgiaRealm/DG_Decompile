/*
 * FUN_10007f89 at 10007f89
 * undefined __thiscall FUN_10007f89(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10007f89-10008082
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007f89(void *this,uint param_1,undefined4 *param_2)

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
  if (*(char *)((int)this + 0x224) == '\0') {
    puVar3 = (undefined4 *)((param_1 + 0x23) * 0x10 + (int)this);
    *puVar3 = *param_2;
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x234) = param_2[1];
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x238) = param_2[2];
    *(undefined4 *)((int)this + param_1 * 0x10 + 0x23c) = param_2[3];
    (**(code **)(**(int **)((int)this + 0x14) + 0x60))(param_1,puVar3);
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
    *(undefined4 *)(iVar1 + 0x96c + param_1 * 0x10) = *param_2;
    *(undefined4 *)(iVar1 + (param_1 + 0x97) * 0x10) = param_2[1];
    *(undefined4 *)(iVar1 + 0x974 + param_1 * 0x10) = param_2[2];
    *(undefined4 *)(iVar1 + 0x978 + param_1 * 0x10) = param_2[3];
    pbVar2 = (byte *)(iVar1 + 0xa54 + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_1 & 7);
  }
  return;
}

