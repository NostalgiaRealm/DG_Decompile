/*
 * FUN_10019971 at 10019971
 * undefined __thiscall FUN_10019971(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10019971-10019a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019971(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  float local_90 [32];
  
  puVar2 = param_2;
  if (*(char *)((int)this + 0x3c4) == '\0') {
    FUN_10019e48((void *)((int)this + 0x2ec),&param_1,param_2);
    pfVar5 = FUN_1001a8f4(local_90,(int)param_2);
    FUN_10019de0((void *)((int)this + 0x2fc),&param_1,pfVar5);
    FUN_100184da(this,param_1,param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + *(int *)((int)this + 0x3c0) * 4);
    *(undefined1 *)((int)param_2 + 0x6d) = 1;
    iVar4 = FUN_10019ead((void *)(iVar1 + 0x4aac),&param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(iVar4 + 0x6c);
    }
    *(undefined1 *)(puVar2 + 0x1b) = uVar3;
    FUN_10019ee7((void *)(iVar1 + 0x4aac),&param_1,puVar2);
  }
  return;
}

