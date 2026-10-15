/*
 * FUN_100158ba at 100158ba
 * undefined __thiscall FUN_100158ba(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 100158ba-1001596c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100158ba(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  float local_90 [32];
  
  puVar2 = param_2;
  if (*(char *)((int)this + 0x220) == '\0') {
    FUN_10015dea((void *)((int)this + 0x148),&param_1,param_2);
    pfVar5 = FUN_100168b4(local_90,(int)param_2);
    FUN_10015d82((void *)((int)this + 0x158),&param_1,pfVar5);
    FUN_1001435d(this,param_1,param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4);
    *(undefined1 *)((int)param_2 + 0x6d) = 1;
    iVar4 = FUN_10015e4f((void *)(iVar1 + 0x499c),&param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(iVar4 + 0x6c);
    }
    *(undefined1 *)(puVar2 + 0x1b) = uVar3;
    FUN_10015e89((void *)(iVar1 + 0x499c),&param_1,puVar2);
  }
  return;
}

