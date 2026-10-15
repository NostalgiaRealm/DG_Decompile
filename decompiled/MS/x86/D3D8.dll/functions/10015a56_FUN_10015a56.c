/*
 * FUN_10015a56 at 10015a56
 * undefined __thiscall FUN_10015a56(void * this, uint param_1, char param_2)
 * Address ranges: 10015a56-10015bad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015a56(void *this,uint param_1,char param_2)

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
  if (*(char *)((int)this + 0x220) == '\0') {
    iVar1 = FUN_1000924d((void *)((int)this + 0x148),&param_1);
    if (iVar1 == 0) {
      FUN_10015dea((void *)((int)this + 0x148),&param_1,(undefined4 *)((int)this + 0x180));
      pfVar2 = FUN_100168b4(local_a0,(int)this + 0x180);
      FUN_10015d82((void *)((int)this + 0x158),&param_1,pfVar2);
    }
    uVar3 = FUN_10007b6a((void *)((int)this + 0x174),(int *)&param_1);
    if (uVar3 == 0xffffffff) {
      if (param_2 != '\0') {
        FUN_10014232(this,param_1);
      }
    }
    else if (param_2 == '\0') {
      FUN_10014296(this,param_1);
    }
  }
  else {
    local_18 = (uint *)(*(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4) +
                       0x499c);
    iVar1 = FUN_10015e4f(local_18,&param_1);
    if (iVar1 == 0) {
      puVar4 = (undefined4 *)((int)this + 0x180);
      puVar5 = local_90;
      for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_24 = param_2;
      local_23 = 1;
      FUN_10015e89(local_18,&param_1,local_90);
    }
    else {
      *(char *)(iVar1 + 0x6c) = param_2;
    }
  }
  return;
}

