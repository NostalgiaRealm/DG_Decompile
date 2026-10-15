/*
 * FUN_10007e31 at 10007e31
 * undefined __thiscall FUN_10007e31(void * this, uint param_1, char param_2)
 * Address ranges: 10007e31-10007f88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007e31(void *this,uint param_1,char param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort in_FPUControlWord;
  float local_a0 [4];
  undefined4 local_90 [27];
  char local_24;
  undefined1 local_23;
  uint local_1c;
  uint *local_18;
  uint local_14;
  
  local_18 = &local_1c;
  local_14 = CONCAT22(local_14._2_2_,in_FPUControlWord);
  local_1c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_1c = (uint)in_FPUControlWord;
    local_14 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  if (*(char *)((int)this + 0x224) == '\0') {
    iVar1 = FUN_10008271((void *)((int)this + 0x14c),&param_1);
    if (iVar1 == 0) {
      FUN_100082ab((void *)((int)this + 0x14c),&param_1,(int *)((int)this + 0x184));
      pfVar2 = FUN_10008ec8(local_a0,(int *)((int)this + 0x184));
      FUN_100081ef((void *)((int)this + 0x15c),&param_1,pfVar2);
    }
    uVar3 = FUN_100081c6((void *)((int)this + 0x178),(int *)&param_1);
    if (uVar3 == 0xffffffff) {
      if (param_2 != '\0') {
        FUN_10006691(this,param_1);
      }
    }
    else if (param_2 == '\0') {
      FUN_100066f5(this,param_1);
    }
  }
  else {
    local_18 = (uint *)(*(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4) +
                       0x9cc);
    iVar1 = FUN_10008310(local_18,&param_1);
    if (iVar1 == 0) {
      puVar4 = (undefined4 *)((int)this + 0x184);
      puVar5 = local_90;
      for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_24 = param_2;
      local_23 = 1;
      FUN_1000834a(local_18,&param_1,local_90);
    }
    else {
      *(char *)(iVar1 + 0x6c) = param_2;
    }
  }
  return;
}

