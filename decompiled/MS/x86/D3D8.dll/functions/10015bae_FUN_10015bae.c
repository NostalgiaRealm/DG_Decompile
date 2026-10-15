/*
 * FUN_10015bae at 10015bae
 * undefined __thiscall FUN_10015bae(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10015bae-10015caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015bae(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
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
  iVar4 = param_1 * 0x10;
  if (*(char *)((int)this + 0x220) == '\0') {
    puVar3 = (undefined4 *)((int)this + iVar4 + 0x22c);
    *puVar3 = *param_2;
    *(undefined4 *)((int)this + (param_1 + 0x23) * 0x10) = param_2[1];
    *(undefined4 *)(iVar4 + 0x234 + (int)this) = param_2[2];
    *(undefined4 *)(iVar4 + 0x238 + (int)this) = param_2[3];
    (**(code **)(**(int **)((int)this + 0x14) + 0x58))(param_1,puVar3);
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4);
    *(undefined4 *)(iVar4 + 0x493c + iVar1) = *param_2;
    *(undefined4 *)(iVar1 + (param_1 + 0x494) * 0x10) = param_2[1];
    *(undefined4 *)(iVar4 + 0x4944 + iVar1) = param_2[2];
    *(undefined4 *)(iVar4 + 0x4948 + iVar1) = param_2[3];
    pbVar2 = (byte *)(iVar1 + 0x9394 + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_1 & 7);
  }
  return;
}

